from flask import Flask, render_template, request, jsonify
from planner import Planner
from interface import Interface
import json
import sys

app = Flask(__name__)
planner = Planner()
translator = Interface()

# Create a new planning problem
# planner.definePlanningProblem()

''' Helper actions '''
def pddl_to_ui_actions():
    # Get the plan to be showed in the planning panel
    action_seq = planner.get_action_sequence_list()
    return translator.actionsToUI(action_seq)

def ui_to_pddl_actions(request, is_get_request=False):
    if is_get_request:
        plan = json.loads( request.args.get('plan') )
    else:
        plan = json.loads( dict(request.form)['plan'][0] )
    return translator.uiToActions(plan)

@app.route("/")
def index(was_plan_found=False):
    p = pddl_to_ui_actions()
    # Should we show the explanation button
    can_ask_for_explanations = 0
    if was_plan_found:
        can_ask_for_explanations = 1
    
    return render_template('index.html', canAskForExplanations=can_ask_for_explanations, plan=p)

@app.route("/validate", methods=['GET', 'POST'])
def validate():
    print('[DEBUG] Starting Validation Process ...')
    planner.save_plan()
    is_plan_valid = planner.get_validated_plan(ui_to_pddl_actions(request, is_get_request=True))
    return jsonify({
        'plan'   : pddl_to_ui_actions(),
        'status' : is_plan_valid
    })
    
@app.route("/suggest", methods=['GET', 'POST'])
def suggest():
    print('[DEBUG] Starting Suggestion Process ...')
    planner.save_plan()
    
    # plan_was_found = True if plan is found, False otherwise
    was_plan_found = planner.get_suggested_plan(ui_to_pddl_actions(request, is_get_request=True))
    if not was_plan_found:
        planner.load_plan()

    return jsonify({
        'plan'   : pddl_to_ui_actions(),
        'status' : was_plan_found
    })

@app.route("/check", methods=['GET', 'POST'])
def check():
    print('[DEBUG] Starting the Checking Process ...')
    planner.save_plan()
    plan_complete_status = planner.is_plan_complete(ui_to_pddl_actions(request, is_get_request=True))
    return jsonify({
        'status' : plan_complete_status
    })

@app.route("/getPlanExplanation", methods=['GET', 'POST'])
def get_explanations():
    print('[DEBUG] Generating Plan Explanation(s) ...')
    planner.save_plan()
    explanations = planner.get_explanations(ui_to_pddl_actions(request, is_get_request=True))
    return jsonify(explanations)

def main(host='10.218.107.216'):
    app.run(host=host,
            port=5000,
            debug=True)

if __name__ == '__main__':
    if len(sys.argv) == 2:
        main(host=sys.argv[1])
    else:
        main()
