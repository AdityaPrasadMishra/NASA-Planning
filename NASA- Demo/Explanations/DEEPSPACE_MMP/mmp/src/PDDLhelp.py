#!/usr/bin/env python

'''
Topic   :: Help with PDDL stuff
Project :: Explanations for Multi-Model Planning
Author  :: Tathagata Chakraborti
Date    :: 09/29/2016
'''

import re, os
import json

'''
Global :: global variables
'''

__DOMAIN_SOURCE__ = '../../domain/domain_template.pddl'

__GROUND_CMD__ = "./ground.sh {} {} > stdout.txt"
__PARSER_CMD__ = "./parser.sh {} {} {}"
__CREATE_TMP_CMD__ = "./create_tmp.sh {} {} > stdout.txt"
__FD_PLAN_CMD__ = './fdplan.sh "{}" "{}"'
__FD_PLAN_COST_CMD__ = "./get_plan_cost.sh"
__VAL_PLAN_CMD__ = './valplan.sh "{}" "{}" "{}"'
__GRAPH_TEST_CMD__ = "./graph_test.sh {} {} {}"
__FAIL_POINT_CMD__ = "./fail_point.sh {} {} {}"

ACTION_TEMPL = '(:action {}\n:parameters ({})\n:precondition\n(and\n{}\n)\n:effect\n(and\n{}\n)\n)\n'

DOMAIN_LEVELS = {'define':{'domain':[], ':requirements':[], ':types':[], ':predicates':[],':functions':[]}}


def get_problem_state_preds(domain_file, proble_file, section_prefix):
    pddl.Parser()
    return init_state


'''
Method :: write domain file from given state
'''

def write_domain_file_from_state(state, domain_templ, domain_dest):

    predicateList = set()
    action_map   = {}
    init_state_list = []
    goal_state_list =[]

    ACT_PAR_KEYS = ['parameters']
    ACT_PREC = ['precondition-pos', 'precondition-not', 'precondition-<=','precondition->','precondition-<','precondition-=']
    ACT_EFFS = ['effect-pos', 'effect-not', 'effect-assign','effect-increase','effect-decrease']
    ACT_SIMPLE_POS_KEYS = ['precondition-pos','effect-pos']
    ACT_SIMPLE_NEG_KEYS = ['precondition-not','effect-not']
    ACT_METRIC_KEYS = ['precondition-<=','precondition->','precondition-<','precondition-=','effect-assign','effect-increase','effect-decrease']
    #print (state)
    #exit(0)
    for item in state:
        act_name = item.split('-has-')[0]
        if act_name not in action_map:
            action_map[act_name] = {}
            for part in ACT_PAR_KEYS + ACT_SIMPLE_POS_KEYS + ACT_SIMPLE_NEG_KEYS + ACT_METRIC_KEYS:
                act_key_name = '-has-'+part+'-'
                action_map[act_name][part] = []
        # Parameters 
        for part in ACT_PAR_KEYS :
            act_key_name = '-has-'+part+'-'
            if act_key_name in item:
                action_map[act_name][part].append(item.split(act_key_name)[-1])


        # pos preconds + pos effects
        for part in ACT_SIMPLE_POS_KEYS:
            act_key_name = '-has-'+part+'-'
            if act_key_name in item:
                action_map[act_name][part].append(item.split(act_key_name)[-1])


        # NEG preconds + neg effects
        for part in ACT_SIMPLE_NEG_KEYS:
            act_key_name = '-has-'+part+'-'
            if act_key_name in item:
                action_map[act_name][part].append('(not '+item.split(act_key_name)[-1]+')')


        # Metric Keys
        for part in ACT_METRIC_KEYS:
            act_key_name = '-has-'+part+'-'
            if act_key_name in item:
                if 'precondition-' in part:
                    action_map[act_name][part].append('('+part.replace('precondition-','')+' '+item.split(act_key_name)[-1]+')')
                else:
                    action_map[act_name][part].append('('+part.replace('effect-','')+' '+item.split(act_key_name)[-1]+')')

    action_string = []
#    print action_map

    for act_name in action_map:
        parameters = action_map[act_name]['parameters'][0]
        preconditions = "\n".join(["\n".join(action_map[act_name][key]) for key in ACT_PREC])
        effs = "\n".join(["\n".join(action_map[act_name][key]) for key in ACT_EFFS])
        action_string.append(ACTION_TEMPL.format(act_name, parameters, preconditions, effs))

    with open(domain_templ, 'r') as d_fd:
        domain_str = d_fd.read()

    with open(domain_dest, 'w') as d_fd:
        d_fd.write(domain_str.format("", "\n".join(action_string)))


'''
Method :: read state from given domain file
'''

def get_predicate(pred_name, pred_parts):
    #print ("pred_name",pred_name)
    #print ("pred_parts",pred_parts)
    if str(pred_name) == "":
        return str(pred_parts[0])
    return '('+pred_name + " " + " ".join(pred_parts)+')'

def read_state_from_domain_file(domainFileName, problemFileName):

    ACTION_PARTS_KEYS  = ['parameters', 'precondition_pos', 'precondition_neg', 'effect_pos', 'effect_neg']

    current_state = set()

    ACTION_KEY = ['ACTION']

    precondition_types_simple = ["pos","not"]
    precondition_types_metric = ["=", "<",">", "<=",">="]
    effect_types_simple = ["pos","not"] #,"assign", "increase","decrease"]
    effect_types_metric = ["assign", "increase","decrease"]

    #print ("read from file")
    with open(domainFileName) as d_fd:
        domain_map = json.load(d_fd)
    #exit(0)

    # find Name
    # domain_name = domainFileName['domain'] ['define']

    # Types
    # type_list = 

    for act in domain_map["domain"]["actions"]:
        act_name = list(act.keys())[0]
        print (act,act_name,act[act_name][0])
        for act_parts in act[act_name]:
            part_name = list(act_parts.keys())[0]
            if part_name == "parameters":
                current_state.add(act_name+"-has-parameters-"+" ".join(act_parts[part_name]))
            elif part_name == "precondition":
                for sub_parts in act_parts[part_name]:
                    ty = list(sub_parts.keys())[0]
                    if ty in precondition_types_simple:
                        pos_preconditions = sub_parts[ty]
                        for precond in pos_preconditions:
                            pred_name = list(precond.keys())[0]
                            current_state.add(act_name+"-has-precondition-"+ty+"-"+get_predicate(pred_name,precond[pred_name]))
                            #print act_name+"-has-precondition-"+ty+"-"+get_predicate(pred_name,precond[pred_name])
                    elif ty in precondition_types_metric:
                        pos_preconditions = sub_parts[ty]
                        #print ("part_name",act_name,part_name,ty,pos_preconditions)
                        #exit(0)
                        for precond in pos_preconditions:
                            metric_str = ""
                            #print precond
                            for pred_parts in precond:
                                pred_name = list(pred_parts.keys())[0]
                                if metric_str == "":
                                    metric_str = get_predicate(pred_name,pred_parts[pred_name])
                                else:
                                    metric_str = metric_str + ' ' + get_predicate(pred_name,pred_parts[pred_name])

                            current_state.add(act_name+"-has-precondition-"+ty+"-"+metric_str)
                            #print act_name+"-has-precondition-"+part_name+"-"+metric_str

            elif part_name == "effect":
                for sub_parts in act_parts[part_name]:
                    ty = list(sub_parts.keys())[0]
                    if ty in effect_types_simple:
                        pos_effects = sub_parts[ty]
                        for eff in pos_effects:
                            pred_name = list(eff.keys())[0]
                            current_state.add(act_name+"-has-effect-"+ty+"-"+get_predicate(pred_name,eff[pred_name]))
                            #print act_name+"-has-effect-"+ty+"-"+get_predicate(pred_name,eff[pred_name])
            #else:
            #    print ("part_name",part_name)
            #    exit(0)

                        
                    elif ty in effect_types_metric:
                        pos_effects = sub_parts[ty]
                        #print pos_effects
                        for eff in pos_effects:
                            metric_str = ""
                            for pred_parts in eff:
                                print (pred_parts)
                                pred_name = list(pred_parts.keys())[0]
                                if metric_str == "":
                                    metric_str = get_predicate(pred_name,pred_parts[pred_name])
                                else:
                                    metric_str = metric_str + ' ' + get_predicate(pred_name,pred_parts[pred_name])

                            current_state.add(act_name+"-has-effect-"+ty+"-"+metric_str)
                            #print act_name+"-has-effect-"+ty+"-"+metric_str


    #exit(0)
    return current_state



def parse_problem(domainFileName, problemFileName, section_prefix):
    output = os.popen(__PARSER_CMD__.format(domainFileName, problemFileName, section_prefix)).read().strip()
    state = [item.strip() for item in output.split('\n')] if output != '' else []
    return state


'''
Method :: compute plan from domain and problem files
'''

def get_plan(domainFileName, problemFileName):
    #print (__FD_PLAN_CMD__.format(domainFileName, problemFileName))
    output = os.popen(__FD_PLAN_CMD__.format(domainFileName, problemFileName)).read().strip()
    plan   = [item.strip() for item in output.split('\n')] if output != '' else []
    #if len(plan) > 0:
    #    output = os.popen(__FD_PLAN_COST_CMD__).read().strip()
    #    cost   = int(output)
    #else:
    #    cost = 0
    #exit(0)
    cost = len(plan)
    return [plan, cost]


''' 
Method :: ground PDDL domain and problem files
'''

def ground(domainFileName, problemFileName):

    output = os.system('./clean.sh')
    output = os.system(__GROUND_CMD__.format(domainFileName, problemFileName))

def create_temp_files(domainFileName, problemFileName):

    output = os.system('./clean.sh')
    output = os.system(__CREATE_TMP_CMD__.format(domainFileName, problemFileName))

''' 
Method :: validate plan given PDDL domain and problem files
'''

def validate_plan(domainFileName, problemFileName, planFileName):
    print __VAL_PLAN_CMD__.format(domainFileName, problemFileName, planFileName)
    output = os.popen(__VAL_PLAN_CMD__.format(domainFileName, problemFileName, planFileName)).read().strip()
    return eval(output)

def plan_graph_test(domainFileName, problemFileName, planFileName):
    #print __GRAPH_TEST_CMD__.format(domainFileName, problemFileName, planFileName)
    output = os.popen(__GRAPH_TEST_CMD__.format(domainFileName, problemFileName, planFileName)).read().strip()
    #exit(0)
    return eval(output)

def find_fail_point(domainFileName, problemFileName, planFileName):
    output = os.popen(__FAIL_POINT_CMD__.format(domainFileName, problemFileName, planFileName)).read().strip()
    if output != '':
        return int(output)
    else:
        return 0



if __name__ == '__main__':
    pass

    ''' debug list '''
    #print validate_plan('../domain/fetchworld-base-m.pddl', '../domain/problem1.pddl', 'sas_plan')
    #state = read_state_from_domain_file('../domain/fetchworld-base-m.pddl')
    #write_domain_file_from_state(state)
