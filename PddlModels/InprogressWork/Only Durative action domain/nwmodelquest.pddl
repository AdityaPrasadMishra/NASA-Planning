(define (problem Nasa_basic_model_with_dur_action_prob01)
(:domain Nasa_basic_model_with_durative_actions)

;(:requirements :fluents :typing :negative-preconditions :disjunctive-preconditions :equality :existential-preconditions :quantified-preconditions :conditional-effects )

(:objects
        a  b - crew_members
        work exercise  - activity
        locA - location
        day0 day1 day2 - days
)

(:init	
;;==========
;;PREDICATES
;;==========
	(in_order day0 day1)
	(in_order day1 day2)
	;(day_in_progress day1)
	;(day_in_progress day2)	    
	(complete_day day0) 

;;=========
;;FUNCTIONS
;;=========
	(=(rem_time_today a day1)24)
	(=(rem_time_today b day1)24)
	;(=(rem_time_today c day1)24)
	;(=(rem_time_today d day1)24)

	(=(rem_time_today a day2)24)
	(=(rem_time_today b day2)24)
	;(=(rem_time_today c day2)24)
	;(=(rem_time_today d day2)24)

	(=(total_time_for_activity_per_person work day1)12)
	(=(total_time_for_activity_per_person exercise day1)12)
	;(=(total_time_for_activity_per_person sleep day1)8)
	;(=(total_time_for_activity_per_person nothing day1)3)
	;(=(total_time_for_activity_per_person breakfast day1)1)
	;(=(total_time_for_activity_per_person lunch day1)1)
	;(=(total_time_for_activity_per_person dinner day1)1)

	(=(total_time_for_activity_per_person work day2)12)
	(=(total_time_for_activity_per_person exercise day2)12)
	;(=(total_time_for_activity_per_person sleep day2)8)
	;(=(total_time_for_activity_per_person nothing day2)3)
	;(=(total_time_for_activity_per_person breakfast day2)1)
	;(=(total_time_for_activity_per_person lunch day2)1)
	;(=(total_time_for_activity_per_person dinner day2)1)
)

(:goal (
	and
	(complete_day day1)
	(complete_day day2)
	(already_completed work a day1)
	(already_completed work a day2)	
	(already_completed work b day1)
	(already_completed work b day2)	
	;(planner_in_progress a work day1)
	;(planner_in_progress b work day1)
	;(planner_in_progress a work day2)
	;(planner_in_progress b work day2)
	(<=(rem_time_today a day1)0)
	(<=(rem_time_today b day1)0)
	;(<=(rem_time_today c day1)0)
	;(=(rem_time_today d day1)0)

	(<=(rem_time_today a day2)0)
	(<=(rem_time_today b day2)0)
	;(=(rem_time_today c day2)0)
	;(=(rem_time_today d day2)0)
)
)

)

