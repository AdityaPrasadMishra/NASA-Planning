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
	return round_k_digits(n,2.000000);
}

double assign_rem_time_for_activity_action_starting_activity(double total_time_for_activity_per_person ) {
	 return round_k_digits(total_time_for_activity_per_person,2.000000); 
}

double decrease_total_time_for_activity_action_starting_activity(double total_time_for_activity, double total_time_for_activity_per_person ) {
	 return round_k_digits(total_time_for_activity-(total_time_for_activity_per_person),2.000000); 
}

double decrease_rem_time_today_action_completing_activity(double rem_time_today, double total_time_for_activity_per_person ) {
	 return round_k_digits(rem_time_today-(total_time_for_activity_per_person),2.000000); 
}

double increase_time_spent_today_action_completing_activity(double time_spent_today, double total_time_for_activity_per_person ) {
	 return round_k_digits(time_spent_today+(total_time_for_activity_per_person),2.000000); 
}

double decrease_rem_time_for_activity_duraction_end_continuing_activity(double rem_time_for_activity ) {
	 return round_k_digits(rem_time_for_activity-(30.0000),2.000000); 
}

double assign_day_in_progress_action_starting_day_1() {
	 return round_k_digits(1.00000,2.000000); 
}

double assign_day_in_progress_action_starting_day_2() {
	 return round_k_digits(2.00000,2.000000); 
}

