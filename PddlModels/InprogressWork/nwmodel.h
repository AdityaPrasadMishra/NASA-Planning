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

double decrease_rem_time_today_duraction_end_active_activity(double rem_time_today, double total_time_for_activity_per_person ) {
	 return round_k_digits(rem_time_today-(total_time_for_activity_per_person),4.000000); 
}

