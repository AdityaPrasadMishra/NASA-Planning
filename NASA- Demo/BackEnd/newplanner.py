import os
import re
import subprocess
from shutil import copy as copyf
from copy import deepcopy

class NewPlanner():
        def __init__(self):

            self.PLAN_FILES_DIR = './plan_utils/{}'
            self.PDDL_FILES_DIR = 'initial_problem_and_domain/{}'

            # File paths to planning technologies
            self.CALL_FF = self.PLAN_FILES_DIR.format('ff')
            self.CALL_FAST_DOWNWARD = self.PLAN_FILES_DIR.format(
                'FAST-DOWNWARD/fast-downward.py ')
            self.CALL_VAL = self.PLAN_FILES_DIR.format('VAL/validate -v ')
            self.CALL_PR2 = self.PLAN_FILES_DIR.format('PR2/pr2plan ')
            
            # Takes two parameters-- time and command. Eg. timeout 3s ls -l
            self.TIMEOUT_CALL = 'timeout '
            self.TIMEOUT_CODE = 124
            
            # Domain and problem files
            self.domain = self.PDDL_FILES_DIR.format('domain.pddl')
            self.human_domain = self.PDDL_FILES_DIR.format('empty_domain.pddl')
            self.problem = self.PDDL_FILES_DIR.format('problem.pddl')

            # Grounded pr-domain and pr-problem files
            self.pr_domain = './pr-domain.pddl'
            self.pr_problem = './pr-problem.pddl'
            self.grounded_pr_domain = self.PLAN_FILES_DIR.format('pr-domain.pddl')
            self.grounded_pr_problem = self.PLAN_FILES_DIR.format(
                'pr-problem.pddl')

            # Plan files
            self.plan_output = './generated_plan'
            self.obs = self.PLAN_FILES_DIR.format('obs.dat')
            self.blank_obs = self.PLAN_FILES_DIR.format('blank_obs.dat')
            self.saveduiPlan = self.PLAN_FILES_DIR.format('saved_obs.dat')

            # Explanation files
            self.domain_template = self.PDDL_FILES_DIR.format('ipass_domain_template.pddl')
            self.exp_file = self.PLAN_FILES_DIR.format(
                'explanations.dat')

            # Files for storing problem state as a json
            self.problem_state_json = './static/files/state.json'
        
        def run_planner(self, timeout='1000s'):
            try:
                cmd = self.CALL_FF + \
                " -o %s -f %s |grep -E '[0-9]:'|awk -F: '{print $NF}'|sed 's/^ /(/'|sed 's/$/)/' > %s"% ("./plan_utils/domainver02.pddl", "./plan_utils/problem.pddl", "./plan_utils/suggestedplan")
                print(cmd)
                status_code = os.system(self.TIMEOUT_CALL + timeout + ' ' + cmd)
                if status_code == self.TIMEOUT_CODE:
                    print('[WARNING] Timeout occured')
                    return False
                return True
            except Exception as e:
                if hasattr(e, 'message'):
                    print(e.message)
                else:
                    print(e)
                return False

        def run_validate(self):
            try:
                cmd = "./plan_utils/VAL/validate -v" + \
                    ' {} {} {}'.format("./plan_utils/domainver02.pddl", "./plan_utils/problem.pddl", "./plan_utils/plan")
                proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, shell=True)
                (out, err) = proc.communicate()
                print('[DEBUG] Running command: {}'.format(cmd))
                print('[DEBUG] Output of Validate: {}'.format(out))
                print('[DEBUG] Output of Validate Error: {}'.format(err))
                return out
            except BaseException:
                print(
                    '[ERROR] Failed to execute VAL with the given files:\ndomain:{}\nproblem:{}\nobservation:{}'
                    .format("./plan_utils/domainver02.pddl", "./plan_utils/problem.pddl", "./plan_utils/plan"))


        
        def run_explanations(self):
            try:
                cmd ="cd '/media/data_mount_disk/Main/DropBoxNew/Dropbox (ASU)/NASA-Planning/NASA- Demo/Explanations/DEEPSPACE_MMP/mmp/src/' &&"
                cmd += "python '/media/data_mount_disk/Main/DropBoxNew/Dropbox (ASU)/NASA-Planning/NASA- Demo/Explanations/DEEPSPACE_MMP/mmp/src/Explainer.py' -s ME -m '/media/data_mount_disk/Main/DropBoxNew/Dropbox (ASU)/NASA-Planning/NASA- Demo/Explanations/Current/JSON_Models/DomaininJSONPlanner.json'"
                cmd += " -n '/media/data_mount_disk/Main/DropBoxNew/Dropbox (ASU)/NASA-Planning/NASA- Demo/Explanations/Current/JSON_Models/DomaininJSONHuman.json'"
                cmd += " -t '/media/data_mount_disk/Main/DropBoxNew/Dropbox (ASU)/NASA-Planning/NASA- Demo/Explanations/Current/PDDL_Models/domain_templ.pddl'"
                cmd += " -p '/media/data_mount_disk/Main/DropBoxNew/Dropbox (ASU)/NASA-Planning/NASA- Demo/BackEnd/plan_utils/problem.pddl'" 
                cmd += " -r '/media/data_mount_disk/Main/DropBoxNew/Dropbox (ASU)/NASA-Planning/NASA- Demo/BackEnd/plan_utils/problem.pddl'" 
                #cmd += "-f '/media/data_mount_disk/Main/DropBoxNew/Dropbox (ASU)/NASA-Planning/NASA- Demo/Explanations/Test plan/plan'"
                cmd += ' | grep "Explanation >> "'
                
                proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, shell=True)
                (out, err) = proc.communicate()
                print('[DEBUG] Running command: {}'.format(cmd))
                print('[DEBUG] Output of Validate: {}'.format(out))
                print('[DEBUG] Output of Validate Error: {}'.format(err))
                outarr =out.split("Explanation >> ")
                print(outarr)
                
                out = "<br/>".join(outarr)
                return out 
                # with open('/media/data_mount_disk/Main/DropBoxNew/Dropbox (ASU)/NASA-Planning/NASA- Demo/Explanations/DEEPSPACE_MMP/mmp/src/exp.dat') as f:
                #     exps = f.read()
                # return exps

            except Exception as e:
                if hasattr(e, 'message'):
                    print(e.message)
                else:
                    print(e)
                return False

        def run_partialsuggest(self, timeout='1000s'):
            try:
                explanationSrc = "../Explanations/DEEPSPACE_RADAR/better_than_pr2plan/src/"
                cmd ="cd "+explanationSrc+" &&"
                cmd += "python Compiler.py -m DomaininJSONPlanner.json -p ProbleminJSON.json -t domain_templ.pddl -r prob_templ.pddl -s newdomain.pddl -q newproblem.pddl -f partialplan"                
                cmd += '|grep "Exception: "'
                proc = subprocess.Popen(cmd, stdout=subprocess.PIPE, shell=True)
                (out, err) = proc.communicate()
                print('[DEBUG] Running command: {}'.format(cmd))
                print('[DEBUG] Output of Validate: {}'.format(out))
                print('[DEBUG] Output of Validate Error: {}'.format(err))
                print(out)
                if out != '':
                    return out
                #print(outarr)
                cmd = explanationSrc+"ff -p "+explanationSrc+" -o newdomain.pddl -f newproblem.pddl" 
                cmd += "|grep -E '[0-9]:'|awk -F: '{print $NF}'|sed 's/^ /(/'|sed 's/$/)/' > completeplan"
                status_code = os.system(self.TIMEOUT_CALL + timeout + ' ' + cmd)
                print("here01")
                if status_code == self.TIMEOUT_CODE:
                    print('[WARNING] Timeout occured')
                    return "False"
                return "True"
    
                # with open('/media/data_mount_disk/Main/DropBoxNew/Dropbox (ASU)/NASA-Planning/NASA- Demo/Explanations/DEEPSPACE_MMP/mmp/src/exp.dat') as f:
                #     exps = f.read()
                # return exps

            except Exception as e:
                if hasattr(e, 'message'):
                    print(e.message)
                else:
                    print(e)
                return "False"
