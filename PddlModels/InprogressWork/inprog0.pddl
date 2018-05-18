(define (domain Nasa_basic_model)

;; =====
;; REQUIREMENTS
;; =====

(:requirements :fluents :typing :negative-preconditions :disjunctive-preconditions :equality :existential-preconditions :quantified-preconditions :conditional-effects )

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
	(can_perform_activity_all ?crmem - crew_members )
	(in_order ?day1 - days ?day - days)
	(can_start_activity ?crmem - crew_members ?wrt - activity)
	(can_perform_activity ?wrt - activity ?crmem -crew_members )
	(performing_activity ?wrt - activity ?crmem - crew_members ?loc - location)
	(paused_activity ?wrt - activity ?crmem - crew_members ?loc - location)
	(blocked_location ?loc - location)
	(busy_crewmember ?crmem - crew_members)
	(start_day ?day - days)
	(complete_day ?day - days)
	(can_pause ?act1 - activity ?act2 - activity)
	(activity_in_progress ?wrt - activity ?crmem - crew_members )	
	(day_in_progress ?day - days)
	(schedule_in_progress ?crmem - crew_members)
	(create_schedule_for_member ?crmem - crew_members ?day - days)
	(planner_in_progress)
)


;; =====
;; FUNCTIONS
;; =====
(:functions 
	(time_spent_today ?crmem - crew_members)
	(rem_time_today ?crmem - crew_members)
	(rem_time_for_activity ?wrt - activity ?crmem - crew_members)
	(total_time_for_activity ?wrt - activity ?day - days)
	(total_time_for_activity_per_person ?wrt - activity ?day - days)
	(number_of_crew_members)
	(number_of_crew_members_with_task_complete)
)

;; =====
;; ACTIONS
;; =====

(:action completing_day
        :parameters (?day - days)
        
	:precondition (and(=(number_of_crew_members_with_task_complete)(number_of_crew_members))(day_in_progress ?day))
        
	:effect (and(not(day_in_progress ?day))(complete_day ?day)(assign(number_of_crew_members_with_task_complete)0))
)


(:action starting_day
        :parameters (?day - days ?day1 - days)
        
	:precondition (and(not(day_in_progress ?day))
	(not(complete_day ?day))
	(complete_day ?day1)
	(in_order ?day1 ?day))
        
	:effect (and(day_in_progress ?day))
)



(:action starting_day_for_crewmember
        :parameters (?crmem - crew_members ?day - days)
        
	:precondition (and(day_in_progress ?day)(not(planner_in_progress))(create_schedule_for_member ?crmem ?day))
        
	:effect (and(not(create_schedule_for_member ?crmem ?day))(planner_in_progress)(schedule_in_progress ?crmem)(assign(rem_time_today ?crmem)0)
	(assign(time_spent_today ?crmem)0))
)

(:action completing_all_activity 
	:parameters (?crmem - crew_members)
	
	:precondition (and(schedule_in_progress ?crmem)(planner_in_progress)(=(rem_time_today ?crmem)0))

	:effect (and(not(schedule_in_progress ?crmem))(not(planner_in_progress))(increase(number_of_crew_members_with_task_complete)1))
)

)
