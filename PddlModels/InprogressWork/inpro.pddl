(define (domain Nasa_basic_model)

(:requirements :strips :fluents :durative-actions :typing :negative-preconditions :disjunctive-preconditions :equality :existential-preconditions :quantified-preconditions :conditional-effects :continous-effects :time :duration-inequalities  :timed-initial-literals)

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
	(can_start_activity ?crmem - crew_members ?wrt - activity)
	(can_perform_activity ?wrt - activity ?crmem -crew_members )
	(performing_activity ?wrt - activity ?crmem - crew_members ?loc - location)
	(paused_activity ?wrt - activity ?crmem - crew_members ?loc - location)
	(completed_activity ?wrt - activity ?crmem - crew_members ?loc - location ?day - days)
	(blocked_location ?loc - location)
	(busy_crewmember ?crmem - crew_members)
	(start_day ?day - days)
	(can_start_activity ?crmem - crew_members ?wrt - activity)
	(complete_day ?day - days)
	(first_day ?day - days)
	(second_day ?day - days)
	(can_pause ?act1 - activity ?act2 - activity)
	(activity_in_progress ?wrt - activity ?crmem - crew_members )
	(max_day_reached)
)


;; =====
;; FUNCTIONS
;; =====
(:functions 
	(day_in_progress)
	(time_spent_today ?crmem - crew_members)
	(rem_time_today ?crmem - crew_members)
	(rem_time_for_activity ?wrt - activity ?crmem - crew_members)
	(total_time_for_activity ?wrt - activity ?day - days)
	(total_time_for_activity_per_person ?wrt - activity ?day - days)
)

;; =====
;; ACTIONS
;; =====

(:action starting_day_1
	:parameters(?day - days)

	:preconditon(and(not(complete_day?day))(first_day?day)(=(day_in_progress)0))
	
	:effect(and(start_day ? day)
	(forall(?x-crew_members)
	(and(can_perform_activity_all ?crmem)
	(not(busy_crewmember ?crmem))
	(assign(rem_time_today ?x)1440)
	(assign(time_spent_today ?x)0)))
	(forall(?x - crew_members ?a - activity)
	(and(can_start_activity ?x ?a)))
	(forall(?l-location)(not(blocked_location ?l)))
	(assign(day_in_progress)1))	
)

(:action completing_day_1
        :parameters(?day - days)
        
	:preconditon(and((not(complete_day?day))(forall(?x-crew_members)(=(rem_time_today ?x)0))(=(day_in_progress)1)))
        
	:effect(and(complete_day ?day))
)

(:action starting_day_2
        :parameters (?day - days,?day1-days)
        
	:preconditon (and(not(complete_day?day))(first_day?day1)(complete_day?day1)(second_day?day)(=(day_in_progress)1))
        
	:effect (and(start_day ?day)
	(forall(?x-crew_members)
	(and(can_perform_activity_all ?crmem)
        (not(busy_crewmember ?crmem))
	(assign(time_spent_today ?x)0))
	(assign(rem_time_today ?x)1440))) 
	(forall(?x - crew_members ?a - activity)
        (and(can_start_activity ?x ?a)))
	(forall(?l-location)(not(blocked_location ?l)))
	(assign(day_in_progress)2))
)

(:action completing_day_2
        :parameters (?day - days,?day1-days)
        
	:preconditon (and(not(complete_day?day))(forall(?x-crew_members)(=(rem_time_today ?x)0))(=(day_in_progress)2))
        
	:effect(and(complete_day ?day))

)


(:action starting_activity 
	:parameters (?wrt - activity ?crmem - crew_members ?loc - location ?day -days)
	
	:precondition(and 
	(or(can_perform_activity_all ?crmem)
	(can_perform_activity ?wrt ?crmem))
	(or(and(can_start_activity ?crmem ?wrt))
	(and(not(paused_activity ?wrt ?crmem ?loc))
	(not(performing_activity ?wrt ?crmem ?loc)) 
	(not(completed_activity ?wrt ?crmem ?loc ?day))))
	(not(busy_crewmember ?crmem))
	(not(blocked_location ?loc))
	(>=(rem_time_today ?crmem)
	(+(total_time_for_activity_per_person ?wrt ?day)(time_spent_today ?crmem))))
	
	:effect(and
	(assign(rem_time_for_activity ?wrt ?crmem)
	(total_time_for_activity_per_person ?wrt ?day))
	(decrease(total_time_for_activity ?wrt)(total_time_for_activity_per_person ?wrt ?day))
	(performing_activity ?wrt ?crmem ?loc)
	(blocked_location ?loc)
	(not(can_start_activity ?crmem ?wrt))
	(not(activity_in_progress ?wrt ?crmem  ?loc ))
	(not(can_perform_activity_all ?crmem ))
	(not(can_perform_activity ?wrt ?crmem ))
	(not(activity_in_progress ?wrt ?crmem)))
)

(:action completing_activity 
	:parameters (?wrt - activity ?crmem - crew_members ?loc - location ?day -days)
	
	:precondition (and(<=(rem_time_for_activity ?wrt ?crmem)30)
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
	(completed_activity ?wrt ?crmem ?loc ?day)
	(not(busy_crewmember ?crmem))
	(not(blocked_location ?loc))
	(can_perform_activity_all ?crmem ))
)


(:action pausing_activity
        :parameters (?wrt - activity  ?wrt2 - activity ?crmem - crew_members ?loc - location)

        :precondition (and
	(not(activity_in_progress ?wrt ?crmem  ?loc ))
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
	
	:precondition(and
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
	
	:duration (30)

	:condition(and 
	(at start(>=(rem_time_for_activity ?wrt ?crmem)30))
	(at start(not(activity_in_progress ?wrt ?crmem )))
	(over all(activity_in_progress ?wrt ?crmem  ?loc ))
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
	 (at start(activity_in_progress ?wrt ?crmem ?loc))
         (at end(not(activity_in_progress ?wrt ?crmem)))
	 )
)

)


