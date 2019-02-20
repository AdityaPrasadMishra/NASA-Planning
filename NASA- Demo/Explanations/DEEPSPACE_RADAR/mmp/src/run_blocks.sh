#!/bin/bash

mkdir -p /tmp/block_mce_logs

for dom in 2 #1 2 3
do
    for pr in 2
    do
        (time python Explainer.py -s ME -m ../../MCE_VS_UNIF_SEARCH/test_files/blocksworld/original_domain.pddl -n ../../MCE_VS_UNIF_SEARCH/test_files/blocksworld/domain${dom}.pddl -t ../../MCE_VS_UNIF_SEARCH/test_files/blocksworld/domain_template.pddl -p ../../MCE_VS_UNIF_SEARCH/test_files/blocksworld/prob${pr}.pddl -r ../../MCE_VS_UNIF_SEARCH/test_files/blocksworld/prob3_templ.pddl) > /tmp/block_mce_logs/mce_test_one_${dom}_${pr} 2>&1
    done
done

