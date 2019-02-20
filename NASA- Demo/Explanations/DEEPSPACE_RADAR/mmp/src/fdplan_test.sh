#/usr/bin/env bash

# path to fast downward #
#FD_PATH=$(locate fast-downward.py | head -n 1)

# find optimal plan using fd on input domain and problem #
#rm -f output output.sas sas_plan
#${FD_PATH} $1 $2 --search "astar(lmcut())" | grep -e \([0-9]\) | awk '{$NF=""; print $0}'

python3 /media/data_mount/mycode/UNIFIED_GENERATION/simple_planner_unmodified/src/Planner.py -m $1 -p $2 -H hmax
