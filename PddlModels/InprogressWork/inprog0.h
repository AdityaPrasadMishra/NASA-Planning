#include <cmath>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

double round_k_digits(double n, unsigned k){
	double prec = pow(0.1,k);
	double round = (n>0) ? (n+prec/2) : (n-prec/2);
	return round-fmod(round,prec);
}

double ext_assignment(double n){
	return round_k_digits(n,4.000000);
}

double assign_number_of_crew_members_with_task_complete_action_completing_day() {
	 return round_k_digits(0.00000,4.000000); 
}

double assign_rem_time_today_action_starting_day_for_crewmember() {
	 return round_k_digits(0.00000,4.000000); 
}

double assign_time_spent_today_action_starting_day_for_crewmember() {
	 return round_k_digits(0.00000,4.000000); 
}

double increase_number_of_crew_members_with_task_complete_action_completing_all_activity(double number_of_crew_members_with_task_complete ) {
	 return round_k_digits(number_of_crew_members_with_task_complete+(1.00000),4.000000); 
}

