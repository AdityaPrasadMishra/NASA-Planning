#!/usr/bin/env python

'''
Topic   :: Environment definition
Project :: Explanations for Multi-Model Planning
Author  :: Tathagata Chakraborti
Date    :: 09/29/2016
'''

from PDDLhelp import *
import copy

'''
Class :: Environment Definition
'''

class Problem:

    def __init__(self, orig_domain_file, orig_problem_file, plan_file, domain_templ, prob_templ, domain_dest, prob_dest):
        domain_map = read_domain_problem_files(orig_domain_file, orig_problem_file)
        print(domain_map.keys())
        self.act_seq = []

        with open(plan_file) as p_fd:
            self.act_seq = [i.strip() for i in p_fd.readlines()]
        
        print("-----")
        print(self.act_seq)

        compiled_domain_map = compile_act_seqs(domain_map, self.act_seq)

        write_domain_problem_files(compiled_domain_map, domain_templ, prob_templ, domain_dest, prob_dest)


