from flask import Flask, render_template, request, jsonify
from flask_restful import Api, Resource
import json
from flask_cors import CORS, cross_origin
import sys
from newplanner import NewPlanner
import datetime

app = Flask(__name__)
CORS(app)
planner = NewPlanner()
STARTACTIVITY = "(STARTING_ACTIVITY_"
COMPLETEACTIVITY = "(COMPLETE_ACTIVITY "
ASSIGNCREW = "(ASSIGNING_CREW_MEMBERS_ACTIVITY "
FREECREW = "(FREE_INDIVIDUAL_CREW_MEMBERS "




@app.route("/")
def index():
    return jsonify({"hello":"hello"})

@app.route("/validate", methods=['GET', 'POST'])
def validate():
    if request.method == 'POST':
        print("in post")
        # print(request.json)
        sessionObject = request.json
        print(sessionObject)
        planstring = "(CLOSE_LATCH)\n"
        planstring = "(STARTING_DAY)\n"
        rutaskcounter = 0
        for task in sessionObject['tasks']:
            print(task['taskName'])
            planstring+=("(STARTING_ACTIVITY_"+task['taskType']['name'] +" "+task['taskName']+" LOCF" +")\n").upper()
            for ct in range(len(task['taskCrew'])):
                planstring +=("(ASSIGNING_CREW_MEMBERS_ACTIVITY "+task['taskName']+" "+task["taskCrew"][ct]["name"]+")\n").upper()
            planstring+=("(FREE_LOCATION_AFTER_ASSIGNMENT "+task['taskName']+" LOCF)\n").upper()
            for ct in range(len(task['taskCrew'])):
                planstring+= ("(FREE_INDIVIDUAL_CREW_MEMBERS "+task['taskName']+" "+task["taskCrew"][ct]["name"]+")\n").upper()
                rutaskcounter+=1
            planstring+=("(COMPLETE_ACTIVITY "+task['taskName']+")\n").upper()
            if rutaskcounter==4:
                gini = 1 
                for ct in range(4):
                    planstring+= ("(CLEANRRECENTLYUSEDTASKONE "+"CrewMember-"+str(gini)+")\n").upper()
                    gini+=1

                # for ct in range(len(task['taskCrew'])):
                #     planstring+=("(CLEANRRECENTLYUSEDTASKTWO "+task["taskCrew"][ct]["name"]+")\n").upper()
                planstring+="(CLEANRRECENTLYUSEDTASKTWO)\n".upper()
                rutaskcounter = 0
        print(planstring)
        planstring+="(COMPLETE_DAY)"
        text_file = open("./plan_utils/plan", "w")
        text_file.write(planstring)
        text_file.close()
        out = planner.run_validate()
        error = True
        #out = ''
        if out:
            if 'No matching action defined for' in out:
                out = out.split("Plan Repair Advice:")[1].strip()
                out = out.split("Failed plans:")[0].strip()

            if 'Plan failed to execute' in out:
                out = out.split("Plan Repair Advice:")[1].strip()
                out = out.split("Failed plans:")[0].strip()
            
            if '(complete_day) has an unsatisfied precondition' in out:
                out = "Invalid Plan: Please schedule tasks till 7 p.m. for all crew members."
            
            if 'Satisfy (number_of_crew_members' in out:
                if '(max_crewmember_for_activity' in out:
                    taskname = out.split('(max_crewmember_for_activity ')[1].split(')')[0]
                    number = out.split('(max_crewmember_for_activity ')[1].split(')')[1].split('=')[1].split(']')[0]
                    out = "Invalid Plan: Insufficient number of crew members for the task " + taskname.upper() +".<br/>Needs " + number +" crew members."
            
            if 'Successful plans:' in out and 'Plan valid' in out:
                out = "Valid Plan!"


            return jsonify({"output":out,"error":False})
        # print(out)
    return jsonify({"output":"Hurray!!! No Problems while validating the plan.","error":False})


@app.route("/explain", methods=['GET', 'POST'])
def explain():
    if request.method == 'GET':
        out = planner.run_explanations()
        return jsonify({"output":out,"error":False})

@app.route("/suggest", methods=['GET', 'POST'])
def suggest():
    if request.method == 'POST':
        message =''
        sessionObject = request.json
        out = planner.run_planner()
        if not out:
            message +="Planner Filed to execute"
        planstring =''
        with open("./plan_utils/suggestedplan") as text_file:
            planstring =text_file.read()
            print(planstring)
        planstringarr = planstring.split(")\n")
        starttime = 9
        slotcheck = 0
        tasks = []
        events = []
        events2 = []
        taskidcount = 0
        eventidcount = 1
        activityStarted = False
        currentDT = datetime.datetime.now()
        strdate =  str(currentDT.strftime("%Y-%m-%d"))
        changeintime = 2
        message =''
        onesidecheck = []
        twosidecheck = []

        for planstr in planstringarr:
            if taskidcount ==0:
                task = {}
                taskidcount += 1
                task['id'] = taskidcount
                task['taskCrew'] = []
                task['events'] = []
            if STARTACTIVITY in planstr:                
                if not activityStarted:
                    activityStarted = True
                    planstr2 = planstr.split(' ')
                    planstr3 = planstr2[0].split('_')
                    task['taskName'] = planstr2[1]
                    a = sessionObject['typeofevents']
                    # print(a)
                    # print(planstr3)
                    print(planstr)
                    task['taskType'] = filter(lambda x : x['name'].upper() == planstr3[2].upper(), a )[0]
                else:
                    message +="The Plan is in an inconsistent state"
                    break
            
            if 'taskName' in task and ASSIGNCREW + task['taskName'] in planstr: 
                planstr2 = planstr.split(' ')
                a = sessionObject['resources']
                taskCrew = filter(lambda x : x['name'].upper() == planstr2[2].upper(), a )[0]
                task['taskCrew'].append(taskCrew)
                if(slotcheck == 4):
                    starttime += changeintime
                    slotcheck = 0
                newEvent = {}
                newEvent['id']= str(eventidcount)
                newEvent['title']= str(task['taskName'])
                newEvent['start']= str(strdate + ' ' + str(starttime)+':00:00')
                newEvent['end']= str(strdate + ' ' + str(starttime + changeintime)+':00:00')
                newEvent['resourceId']= str(taskCrew['id'])
                newEvent['bgColor'] = str(task['taskType']['color'])
                newEvent['taskid']= str(taskidcount)
                task['events'].append(newEvent)
                events.append(newEvent)
                events2.append(newEvent)
                slotcheck += 1
                eventidcount+=1
                onesidecheck.append(taskCrew['name'].upper().strip())

            if 'taskName' in task and FREECREW + task['taskName'] in planstr:
                planstr2 = planstr.split(' ')
                planstr4 = planstr2[2].split(')')
                twosidecheck.append(planstr4[0])

            if 'taskName' in task and COMPLETEACTIVITY + task['taskName'] in planstr: 
                #print("coming here")
                lenstrchk = 0
                for stri in onesidecheck:
                    if stri in twosidecheck:
                        lenstrchk+=1
                    else:
                        print("Issue in Assignment of crew in the plan")
                        print(onesidecheck)
                        print(twosidecheck)
                        message+="Issue in Assignment of crew in the plan "
                        break
                tasks.append(task)
                task = {}
                task['id'] = taskidcount
                taskidcount += 1
                task['taskCrew'] = []
                task['events'] = []
                activityStarted = False
                onesidecheck = []
                twosidecheck = []
        print(tasks)
        print(message)
        finalobject = {}        
        finalobject['taskobject'] = tasks
        finalobject['message'] = message
        finalobject['events'] = events
        finalobject['events2'] = events2
        print(finalobject)
        finalobject =json.dumps(finalobject)     
        #print(finalobject)        
        return finalobject
    





def main(host='10.218.107.216'):
    app.run(host=host,
            port=5000,
            debug=True)

if __name__ == '__main__':
    if len(sys.argv) == 2:
        main(host=sys.argv[1])
    else:
        main()
