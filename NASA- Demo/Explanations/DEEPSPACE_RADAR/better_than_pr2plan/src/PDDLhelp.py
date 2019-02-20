#!/usr/bin/env python

'''
Topic   :: Help with PDDL stuff
Project :: Explanations for Multi-Model Planning
Author  :: Tathagata Chakraborti
Date    :: 09/29/2016
'''

import re, os
import json
import copy

'''
Global :: global variables
'''

__DOMAIN_SOURCE__ = 'domain_templ.pddl'

__GROUND_CMD__ = "./ground.sh {} {} > stdout.txt"
__PARSER_CMD__ = "./parser.sh {} {} {}"
__CREATE_TMP_CMD__ = "./create_tmp.sh {} {} > stdout.txt"
__FD_PLAN_CMD__ = "./fdplan.sh {} {}"
__FD_PLAN_COST_CMD__ = "./get_plan_cost.sh"
__VAL_PLAN_CMD__ = "./valplan.sh {} {} {}"
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

def write_domain_problem_files(compiled_domain_map, domain_templ, prob_templ, domain_dest, prob_dest):

    predicateList = set()

    ACT_PAR_KEYS = ['parameters']
    ACT_PREC_SIMPLE = ['pos', 'not']
    ACT_PREC_METRIC = ['<=','>','<','=']
    ACT_EFFS_SIMPLE = ['pos', 'not']
    ACT_EFFS_METRIC = ['assign','increase','decrease']
    #print (state)
    #exit(0)

    action_string = []
#    print action_map
    #print (compiled_domain_map['domain']['actions']["free_individual_crew_members"]['effect'])
    #exit(0)
    for act_name in compiled_domain_map['domain']['actions']:
        parameters = " ".join(compiled_domain_map['domain']['actions'][act_name]['parameters'])
        preconditions = ""
        effs = ""
        #print (compiled_domain_map['domain']['actions'][act_name].keys())
        for key in ACT_PREC_SIMPLE:
            if key in compiled_domain_map['domain']['actions'][act_name]['precondition']:
                print (compiled_domain_map['domain']['actions'][act_name]['precondition'][key])
                if key == "not":
                    preconditions += "\n".join(["(not"+get_predicate(i)+")" for i in compiled_domain_map['domain']['actions'][act_name]['precondition'][key]])
                else:
                    preconditions += "\n".join([get_predicate(i) for i in compiled_domain_map['domain']['actions'][act_name]['precondition'][key]])
                preconditions += "\n"
            #else:
            #    print ("key:",key)
            #    print ("map",compiled_domain_map['domain']['actions'][act_name])
        for key in ACT_PREC_METRIC:
            if key in compiled_domain_map['domain']['actions'][act_name]['precondition']:
                print ("precondition",act_name,compiled_domain_map['domain']['actions'][act_name]['precondition'][key])
                preconditions += "\n".join([get_metric_predicate(key,i) for i in compiled_domain_map['domain']['actions'][act_name]['precondition'][key]])
                preconditions += "\n"
        for key in ACT_EFFS_SIMPLE:
            if key in compiled_domain_map['domain']['actions'][act_name]['effect']:
                if key == "not":
                    effs += "\n".join(["(not "+get_predicate(i)+")" for i in compiled_domain_map['domain']['actions'][act_name]['effect'][key]])
                else:
                    effs += "\n".join([get_predicate(i) for i in compiled_domain_map['domain']['actions'][act_name]['effect'][key]])
                effs += "\n"
        for key in ACT_EFFS_METRIC:
            if key in compiled_domain_map['domain']['actions'][act_name]['effect']:
                print ("blaha ahaosl",compiled_domain_map['domain']['actions'][act_name]['effect'])
                effs += "\n".join([get_metric_predicate(key, i) for i in compiled_domain_map['domain']['actions'][act_name]['effect'][key]])
                effs += "\n"
        print (act_name,parameters, preconditions, effs,ACTION_TEMPL.format(act_name, parameters, preconditions, effs))
        action_string.append(ACTION_TEMPL.format(act_name, str(parameters), preconditions, effs))

    with open(domain_templ, 'r') as d_fd:
        domain_str = d_fd.read()

    with open(domain_dest, 'w') as d_fd:
        d_fd.write(domain_str.format("\n".join(['('+i+')' for i in compiled_domain_map['New_Predicates']]), "\n".join(action_string)))


    with open(prob_templ, 'r') as d_fd:
        prob_str = d_fd.read()

    
    init_str = []

    for init_met in compiled_domain_map['Problem']['init']['=']:
        print ("init_met",init_met)
        init_str.append(get_metric_predicate('=', init_met))
    for init_met in compiled_domain_map['Problem']['init']['pos']:
        init_str.append(get_predicate(init_met))

    goal_str = []
    print(compiled_domain_map['Problem']['goal'].keys())
    for goal_pred in  compiled_domain_map['Problem']['goal']['pos']:
        print (goal_pred)
        goal_str.append(get_predicate(goal_pred))

    print(goal_str)

    with open(prob_dest, 'w') as p_fd:
        p_fd.write(prob_str.format("\n".join(init_str), "\n".join(goal_str)))



'''
Method :: read state from given domain file
'''

def get_predicate(pred_map):
    pred_name = list(pred_map.keys())[0]
    pred_parts = pred_map[pred_name]
    print ("pred_name",pred_name)
    print ("pred_parts",pred_parts)
    if str(pred_name) == "" and len(pred_parts) > 0:
        return '('+pred_name + " " + str(pred_parts[0]) + ")"
    else:
        return '('+pred_name + " " + " ".join(pred_parts)+')'


def get_metric_predicate(met_type, condition_list):
    print ("met_type",met_type, condition_list)
    left_part = condition_list[0]
    right_part = condition_list[1]
    left_pred_key = list(left_part.keys())[0]
    if len(right_part) > 0:
        right_pred_key = list(right_part.keys())[0]
    
    if left_pred_key[0] == '?':
        if len(right_part) > 0:
            print ("ERROR: Something wrong with the equality condition", condition_list)
            exit(1)
        print (left_pred_key, left_part[left_pred_key])
        return '('+met_type+" "+ str(left_pred_key) + " " +left_part[left_pred_key][0]+')'
    else:
        left_pred = "("+left_pred_key+" "+" ".join(left_part[left_pred_key])+')'
    if right_pred_key == "":
        right_pred = str(right_part[right_pred_key][0])
    else:
        right_pred = "("+right_pred_key+" "+" ".join(right_part[right_pred_key])+')'
    return '('+met_type+" "+left_pred+ " " +right_pred+')'


def read_domain_problem_files(domainFileName, problemFileName):

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

    with open(problemFileName) as d_fd:
        domain_map['Problem'] = json.load(d_fd)['Problem']


    return domain_map


def compile_act_seqs(domain_map, act_seq):
    compiled_map = copy.deepcopy(domain_map)
    NEW_PREDS = set()
    last_obs = ""
    ind = 0
    for act in act_seq:
        print ("act",act)
        ind += 1
        obs_pred = "observed_"+act.replace('(','').replace(')','').replace(' ','_')
        NEW_PREDS.add(obs_pred)
        act_parts = act.replace('(','').replace(')','').lower().split(' ')
        act_name = act_parts[0]
        act_args = act_parts[1:]
        new_act = copy.deepcopy(domain_map["domain"]['actions'][act_name])
        new_act_name = act_name + "OBS_SEQ"+str(ind)
        var_list = []
        for par in domain_map["domain"]['actions'][act_name]["parameters"]:
            var_list.append(par.split(" - ")[0])
        if len(act_args) > 0 and "=" not in  new_act['precondition']:
            new_act['precondition']["="] = []
        if last_obs != "":
            if "pos" not in new_act['precondition']:
                new_act['precondition']['pos'] = []
            new_act['precondition']['pos'].append({last_obs:[]})
        for a_ind in range(len(act_args)):
            new_act['precondition']["="].append([{var_list[a_ind]: [act_args[a_ind]]}, {}])

        try:
            new_act['effect']['pos'].append({obs_pred:[]})
        except KeyError:
            new_act['effect']['pos'] = list()
            new_act['effect']['pos'].append({obs_pred:[]})
        #if "takephoto" in new_act_name:
        #    print (new_act)
        #    exit(1)
        compiled_map["domain"]['actions'][new_act_name] = new_act
        last_obs = obs_pred
    compiled_map['Problem']['goal']['pos'].append({last_obs:[]})
    compiled_map['New_Predicates'] = NEW_PREDS
    return compiled_map


if __name__ == '__main__':
    pass

    ''' debug list '''
    #print validate_plan('../domain/fetchworld-base-m.pddl', '../domain/problem1.pddl', 'sas_plan')
    #state = read_state_from_domain_file('../domain/fetchworld-base-m.pddl')
    #write_domain_file_from_state(state)
