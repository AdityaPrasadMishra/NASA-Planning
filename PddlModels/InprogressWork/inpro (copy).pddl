(define (domain Nasa_basic_model)

;; =====
;; REQUIREMENTS
;; =====

(:requirements :fluents :durative-actions :typing :negative-preconditions :disjunctive-preconditions :time :duration-inequalities  :timed-initial-literals :equality :existential-preconditions :quantified-preconditions :conditional-effects )

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

(:action starting_activity 
	:parameters (?wrt - activity ?crmem - crew_members ?loc - location ?day - days)
	
	:precondition(and(schedule_in_progress ?crmem) 
	(or(can_perform_activity_all ?crmem)
	(can_perform_activity ?wrt ?crmem))
	(or(and(can_start_activity ?crmem ?wrt))
	(and(not(paused_activity ?wrt ?crmem ?loc))
	(not(performing_activity ?wrt ?crmem ?loc))
        (>=(total_time_for_activity ?wrt ?day)0)))
	(not(busy_crewmember ?crmem))
	(not(blocked_location ?loc))
	(>=(rem_time_today ?crmem)
	(+(total_time_for_activity_per_person ?wrt ?day)
	(time_spent_today ?crmem))))
	
	:effect(and
	(assign(rem_time_for_activity ?wrt ?crmem)
	(total_time_for_activity_per_person ?wrt ?day))
	(decrease(total_time_for_activity ?wrt ?day)
	(total_time_for_activity_per_person ?wrt ?day))
	(performing_activity ?wrt ?crmem ?loc)
	(blocked_location ?loc)
	(not(can_start_activity ?crmem ?wrt))
	(not(activity_in_progress ?wrt ?crmem ))
	(not(can_perform_activity_all ?crmem ))
	(not(can_perform_activity ?wrt ?crmem ))
	(not(activity_in_progress ?wrt ?crmem)))
)

(:action completing_activity 
	:parameters (?wrt - activity ?crmem - crew_members ?loc - location ?day - days)
	
	:precondition (and(schedule_in_progress ?crmem)
	(<=(rem_time_for_activity ?wrt ?crmem)30)
	(not(activity_in_progress ?wrt ?crmem))
	(not(can_start_activity ?crmem ?wrt))
	(busy_crewmember ?crmem)
	(performing_activity ?wrt ?crmem ?loc)
	(blocked_location ?loc))

	:effect (and(decrease(rem_time_today ?crmem)
	(total_time_for_activity_per_person ?wrt ?day))
	(increase(time_spent_today ?crmem)
        (total_time_for_activity_per_person ?wrt ?day))
	(not(performing_activity ?wrt ?crmem ?loc))
	(not(busy_crewmember ?crmem))
	(not(blocked_location ?loc))
	(can_perform_activity_all ?crmem)
	(can_start_activity ?crmem ?wrt))
)


(:action pausing_activity
        :parameters (?wrt - activity  ?wrt2 - activity ?crmem - crew_members ?loc - location)

        :precondition (and(schedule_in_progress ?crmem)
	(not(activity_in_progress ?wrt ?crmem ))
	(not(can_start_activity ?crmem ?wrt))
	(can_pause ?wrt ?wrt2)
	(>=(rem_time_for_activity ?wrt ?crmem)30)
	(busy_crewmember ?crmem)(not(paused_activity ?wrt ?crmem ?loc))
	(performing_activity ?wrt ?crmem ?loc)
	(blocked_location ?loc))

        :effect (and
	(not(performing_activity ?wrt ?crmem ?loc))
	(paused_activity ?wrt ?crmem ?loc)
	(not(busy_crewmember ?crmem))
	(not(blocked_location ?loc)) 
	(can_perform_activity ?wrt2 ?crmem))
)

(:action resuming_activity 
	:parameters (?wrt - activity ?crmem - crew_members ?loc - location )
	
	:precondition(and(day_in_progress)
	(not(can_start_activity ?crmem ?wrt))
	(or(can_perform_activity_all ?crmem)
	(can_perform_activity ?wrt ?crmem))
	(not(performing_activity ?wrt ?crmem ?loc))
	(paused_activity ?wrt ?crmem ?loc)
	(not(busy_crewmember ?crmem))
	(not(blocked_location ?loc))
	(>=(rem_time_for_activity ?wrt ?crmem)30))
	
	:effect(and(busy_crewmember ?crmem)
	(performing_activity ?wrt ?crmem ?loc)
	(not(activity_in_progress ?wrt ?crmem ))
	(blocked_location ?loc)
	(not(can_perform_activity_all ?crmem ))
	(not(can_perform_activity ?wrt ?crmem ))
	(not(paused_activity ?wrt ?crmem ?loc)))
)

(:durative-action continuing_activity
	:parameters(?wrt - activity ?crmem - crew_members ?loc - location)
	
	:duration(= ?duration 30)

	:condition(and 
	(at start(schedule_in_progress ?crmem))
	(over all(schedule_in_progress ?crmem))
	(at end(schedule_in_progress ?crmem))
	(at start(>=(rem_time_for_activity ?wrt ?crmem)30))
	(at start(not(activity_in_progress ?wrt ?crmem )))
	(over all(activity_in_progress ?wrt ?crmem ))
	(at start(performing_activity ?wrt ?crmem ?loc))
	(over all(performing_activity ?wrt ?crmem ?loc )) 
	(at start(busy_crewmember ?crmem))
        (over all(busy_crewmember ?crmem))
	(at start(blocked_location ?loc))
        (over all(blocked_location ?loc))
	(at start(not(paused_activity ?wrt ?crmem ?loc)))	
	(over all(not(paused_activity ?wrt ?crmem ?loc)))	
	)

	:effect(and
	 (at end(decrease(rem_time_for_activity ?wrt ?crmem)30))
	 (at start(activity_in_progress ?wrt ?crmem))
         (at end(not(activity_in_progress ?wrt ?crmem)))
	 )
)

(:action completing_day
        :parameters (?day - days)
        
	:precondition (and(=(number_of_crew_members_with_task_complete)(number_of_crew_members)))
        
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
        
	:precondition (and(day_in_progress ?day)(create_schedule_for_member ?crmem ?day))
        
	:effect (and(not(create_schedule_for_member ?crmem ?day))(schedule_in_progress ?crmem)(assign(rem_time_today ?crmem)1440)
	(assign(time_spent_today ?crmem)0))
)

(:action completing_all_activity 
	:parameters (?crmem - crew_members)
	
	:precondition (and(schedule_in_progress ?crmem)(=(rem_time_today ?crmem)0))

	:effect (and(not(schedule_in_progress ?crmem))(increase(number_of_crew_members_with_task_complete)1))
)

)
