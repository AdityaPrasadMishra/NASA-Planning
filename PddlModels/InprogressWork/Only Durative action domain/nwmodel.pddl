(define (domain Nasa_basic_model_with_durative_actions )

;; ============
;; REQUIREMENTS
;; ============

(:requirements :typing :fluents :negative-preconditions :disjunctive-preconditions :equality :existential-preconditions :quantified-preconditions :conditional-effects :time :duration-inequalities :durative-actions :timed-initial-literals )

;; =====
;; TYPES
;; =====
(:types 
	crew_members activity location days  - objects
)

;; =====        
;; PREDICATES
;; =====
(:predicates
	(can_perform_activity_all ?crmem - crew_members ?day - days)
	(in_order ?day1 - days ?day - days)
	(can_start_activity ?crmem - crew_members ?wrt - activity)
	(can_perform_activity ?wrt - activity ?crmem -crew_members )
	(performing_activity ?wrt - activity ?crmem - crew_members)
	(paused_activity ?wrt - activity ?crmem - crew_members )
	(blocked_location ?loc - location)
	(busy_crewmember ?crmem - crew_members)
	(start_day ?day - days)
	(complete_day ?day - days)
	(can_pause ?act1 - activity ?act2 - activity)
	(activity_in_progress ?wrt - activity ?crmem - crew_members )	
	(day_in_progress ?day - days)
	(schedule_in_progress ?crmem - crew_members)
	(create_schedule_for_member ?crmem - crew_members ?day - days)
	(already_completed ?wrt - activity ?crmem - crew_members ?day - days)
	(planner_in_progress ?crmem - crew_members ?wrt - activity ?day - days)
)


;; =====
;; FUNCTIONS
;; =====
(:functions 
	(time_spent_today ?crmem - crew_members)
	(rem_time_today ?crmem - crew_members ?day - days)
	(rem_time_for_activity ?wrt - activity ?crmem - crew_members )
	(total_time_for_activity ?wrt - activity ?day - days)
	(total_time_for_activity_per_person ?wrt - activity ?day - days)
	;(number_of_crew_members)
	;(number_of_crew_members_with_task_complete)
)

;; ================
;; DURATIVE-ACTIONS
;; ================

(:durative-action active_day
	:parameters(?day - days ?day1 - days)
	
	:duration(= ?duration 24)

	:condition(and 
	(at start(not(day_in_progress ?day)))
	(at start(not(complete_day ?day)))
	(at start(in_order ?day1 ?day))
	(at start(complete_day ?day1))
	(over all(not(complete_day ?day)))
	(over all(in_order ?day1 ?day))
	(over all(complete_day ?day1))
	(over all(day_in_progress ?day))
	(at end(not(complete_day ?day)))
	(at end(in_order ?day1 ?day))
	(at end(complete_day ?day1))
	(at end(day_in_progress ?day))
	)	

	:effect(and
	(at start(day_in_progress ?day))
	(at end(not(day_in_progress ?day)))
	(at end(complete_day ?day))
	)
)

(:durative-action active_activity
	:parameters(?day - days ?wrt - activity ?crmem - crew_members)
	
	:duration(= ?duration (total_time_for_activity_per_person ?wrt ?day))

	:condition(and 
	(at start(day_in_progress ?day))
	(at start(not(performing_activity ?wrt ?crmem)))
	(at start(>(rem_time_today ?crmem ?day)0))
	(at start(not(busy_crewmember ?crmem)))
	(at start(not(already_completed ?wrt ?crmem ?day )))
	(over all(day_in_progress ?day))
	(over all(performing_activity ?wrt ?crmem))
	(over all(>(rem_time_today ?crmem ?day)0))
	(over all(busy_crewmember ?crmem))
	(over all(not(already_completed ?wrt ?crmem ?day )))
	(at end(performing_activity ?wrt ?crmem))
	(at end(>(rem_time_today ?crmem ?day)0))
	(at end(busy_crewmember ?crmem))
	(at end(not(already_completed ?wrt ?crmem ?day )))
	)	

	:effect(and
	(at start(performing_activity ?wrt ?crmem))
	(at start(busy_crewmember ?crmem))
	(at end(not(performing_activity ?wrt ?crmem)))
	(at end(decrease(rem_time_today ?crmem ?day)(total_time_for_activity_per_person ?wrt ?day)))
 	(at end(already_completed ?wrt ?crmem ?day))
	(at end(not(busy_crewmember ?crmem)))
	)
)

;(:durative-action active_dummy
;	:parameters(?day - days ?crmem - crew_members ?wrt - activity)
;	
;	:duration(= ?duration 5)
;
;	:condition(and 
;	(at start(day_in_progress ?day))
;	)	
;
;	:effect(and
;	(at end(planner_in_progress ?crmem ?wrt ?day))
;	)
;)






)
