from flask import Flask, render_template, request, jsonify
from flask_restful import Api, Resource
import json
from flask_cors import CORS, cross_origin
import sys
from newplanner import NewPlanner

app = Flask(__name__)
CORS(app)
planner = NewPlanner()





@app.route("/")
def index(was_plan_found=False):
    return jsonify({"hello":"hello"})

@app.route("/validate", methods=['GET', 'POST'])
def validate(was_plan_found=False):
    if request.method == 'POST':
        print("in post")
        # print(request.json)
        sessionObject = request.json
        planstring = "(STARTING_DAY)\n"
        rutaskcounter = 0
        for task in sessionObject['tasks']:
            planstring+=("(STARTING_ACTIVITY_"+task['taskType']['name'] +" "+task['events'][0]['title']+" LOCF" +")\n").upper()
            for ct in range(len(task['taskCrew'])):
                planstring +=("(ASSIGNING_CREW_MEMBERS_ACTIVITY "+task['events'][0]['title']+" "+task["taskCrew"][ct]["name"]+")\n").upper()
            planstring+=("(FREE_LOCATION_AFTER_ASSIGNMENT "+task['events'][0]['title']+" LOCF)\n").upper()
            for ct in range(len(task['taskCrew'])):
                planstring+= ("(FREE_INDIVIDUAL_CREW_MEMBERS "+task['events'][0]['title']+" "+task["taskCrew"][ct]["name"]+")\n").upper()
                planstring+= ("(CLEANRRECENTLYUSEDTASKONE)\n").upper()
                rutaskcounter+=1
            planstring+=("(COMPLETE_ACTIVITY "+task['events'][0]['title']+")\n").upper()
            if rutaskcounter==4:
                for ct in range(len(task['taskCrew'])):
                    planstring+=("(CLEANRRECENTLYUSEDTASKTWO "+task["taskCrew"][ct]["name"]+")\n").upper()
                planstring+="(CLEANRRECENTLYUSEDTASKTHREE)\n".upper()
                rutaskcounter = 0
        planstring+="(COMPLETE_DAY)"
        text_file = open("./plan_utils/plan", "w")
        text_file.write(planstring)
        text_file.close()
        out = planner.run_validate()
        if out:
            if 'No matching action defined for' in out:
                out = out.split("Plan Repair Advice:")[1].strip()
                out = out.split("Failed plans:")[0].strip()
                return jsonify({"output":out})
            if 'Plan failed to execute' in out:
                out = out.split("Plan Repair Advice:")[1].strip()
                out = out.split("Failed plans:")[0].strip()
                return jsonify({"output":out})
        # print(out)
    return jsonify({"output":"Hurray!!! No Problems in Validate"})


def main(host='10.218.107.216'):
    app.run(host=host,
            port=5000,
            debug=True)

if __name__ == '__main__':
    if len(sys.argv) == 2:
        main(host=sys.argv[1])
    else:
        main()
