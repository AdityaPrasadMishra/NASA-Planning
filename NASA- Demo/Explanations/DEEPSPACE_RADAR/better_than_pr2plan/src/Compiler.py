#!/usr/bin/env python

'''
Topic   :: The driver Script for the system that is better than pr2plan for compiling partial plans into a planning problem
Project :: BPR2
Date    :: 
'''


import argparse, sys
from Problem import Problem
import json

def main():
    
    parser = argparse.ArgumentParser(description='''The driver Script for Compilation''',
                                     epilog="Usage >> ./Compiler.py -m current_domain.pddl -p current_problem.pddl -f plan_fragment"+
                                            " -t domain_templ.pdd -r prob_templ.pddl -s new_domain.pddl -q new_problem.pddl" )

    # Flags for the search
    parser.add_argument('-m', '--model',   type=str, help="Domain file with real PDDL model of robot.", required=True)
    parser.add_argument('-p', '--problem', type=str, help="Problem file for robot.", required=True)
    parser.add_argument('-t', '--domain_templ', type=str, help="Template for domain file for robot.", required=True)
    parser.add_argument('-r', '--prob_templ', type=str, help="Template for problem file for robot.", required=True)
    parser.add_argument('-s', '--domain_dest', type=str, help="Destination for the new domain file for robot.", required=True)
    parser.add_argument('-q', '--prob_dest', type=str, help="Destination for new problem file for robot.", required=True)
    parser.add_argument('-f', '--plan_file',    type=str, help="Plan file.", required=True)
 

    if not sys.argv[1:] or '-h' in sys.argv[1:]:
        print parser.print_help()
        sys.exit(1)

    args = parser.parse_args()


    # define problem object and run the required search
    try:
        pr_obj = Problem(args.model, args.problem, args.plan_file, args.domain_templ, args.prob_templ, args.domain_dest, args.prob_dest)  
    except Exception as e:
        print("Exception: " + str(e))

    



if __name__ == '__main__':
    main()
