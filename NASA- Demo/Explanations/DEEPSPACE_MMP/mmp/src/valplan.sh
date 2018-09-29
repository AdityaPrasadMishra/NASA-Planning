# path to fast downward #
#VAL_PATH=$(locate VAL/validate|head -n 1)
VAL_PATH="/home/local/ASUAD/amishr28/iPass-MasterPlan/plan_utils/VAL/validate"
# validate plan given domain and problem
output=$(${VAL_PATH} "$1" "$2" "$3" | grep "Successful plans:"|wc -l)

if [ ${output} -gt 0 ]; then
    echo "True"
else
    echo "False"
fi
