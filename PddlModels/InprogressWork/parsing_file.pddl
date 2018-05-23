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
	(can_perform_activity_all ?crmem - crew_members ?day - days)
	(in_order ?day1 - days ?day - days)
	(can_start_activity ?crmem - crew_members ?wrt - activity)
	(can_perform_activity ?wrt - activity ?crmem -crew_members )
	(performing_activity ?wrt - activity ?crmem - crew_members ?loc - location)
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
(:action starting_activity 
	:parameters (?wrt - activity ?crmem - crew_members ?loc - location ?day - days)
	
	:precondition(and
	(day_in_progress ?day)
        (>=(rem_time_today ?crmem)0)
	(schedule_in_progress ?crmem) 
	(can_perform_activity_all ?crmem ?day)
	(not(already_completed ?wrt ?crmem ?day))
	(not(busy_crewmember ?crmem))
	(not(blocked_location ?loc)))
	
	:effect(and
	(performing_activity ?wrt ?crmem ?loc)
	(busy_crewmember ?crmem)
	(blocked_location ?loc))
)

(:action completing_activity 
	:parameters (?wrt - activity ?crmem - crew_members ?loc - location ?day - days)
	
	:precondition (and(schedule_in_progress ?crmem)
	(day_in_progress ?day)
	(busy_crewmember ?crmem)
	(performing_activity ?wrt ?crmem ?loc)
	(blocked_location ?loc))

	:effect (and
	(not(performing_activity ?wrt ?crmem ?loc))
	(not(busy_crewmember ?crmem))
	(not(blocked_location ?loc))
	(already_completed ?wrt ?crmem ?day)
	(decrease(rem_time_today ?crmem)1))
)




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
        
	:effect (and(day_in_progress ?day)(not(planner_in_progress)))
)



(:action starting_day_for_crewmember
        :parameters (?crmem - crew_members ?day - days)
        
	:precondition (and(day_in_progress ?day)(not(planner_in_progress))(create_schedule_for_member ?crmem ?day))
        
	:effect (and(not(create_schedule_for_member ?crmem ?day))
			(planner_in_progress)
			(schedule_in_progress ?crmem)
			(can_perform_activity_all ?crmem ?day)
			(assign(rem_time_today ?crmem)3))
)

(:action completing_all_activity 
	:parameters (?crmem - crew_members ?day -days)
	
	:precondition (and(day_in_progress ?day)(schedule_in_progress ?crmem)(planner_in_progress)(=(rem_time_today ?crmem)0))

	:effect (and(not(schedule_in_progress ?crmem))(not(planner_in_progress))
							(increase(number_of_crew_members_with_task_complete)1)
							(not(can_perform_activity_all ?crmem ?day)))
)

)
(define (problem Nasa_basic_model_prob01)
(:domain Nasa_basic_model)

;(:requirements :fluents :typing :negative-preconditions :disjunctive-preconditions :equality :existential-preconditions :quantified-preconditions :conditional-effects )

(:objects
        a b c d - crew_members
        work exercise sleep nothing breakfast - activity
        locA - location
        day0 day1 day2 - days
)

(:init	
   (not(busy_crewmember a))
   (not(busy_crewmember b))
   (not(busy_crewmember c))
   (not(busy_crewmember d))
   
  (not(blocked_location locA))

   (=(number_of_crew_members)4)
   (=(number_of_crew_members_with_task_complete)0)

   (in_order day0 day1)

   (in_order day1 day2)
    
   (complete_day day0)
   
   (can_start_activity a work)
   (can_start_activity b work)
   (can_start_activity c work)
   (can_start_activity d work)	

   (can_start_activity a exercise)
   (can_start_activity b exercise)
   (can_start_activity c exercise)
   (can_start_activity d exercise)

   (can_start_activity a sleep)
   (can_start_activity b sleep)
   (can_start_activity c sleep)
   (can_start_activity d sleep)

   (can_start_activity a nothing)
   (can_start_activity b nothing)
   (can_start_activity c nothing)
   (can_start_activity d nothing)

   (can_start_activity a breakfast)
   (can_start_activity b breakfast)
   (can_start_activity c breakfast)
   (can_start_activity d breakfast)

   (create_schedule_for_member a day1)
   (create_schedule_for_member b day1)
   (create_schedule_for_member c day1)
   (create_schedule_for_member d day1)

   (create_schedule_for_member a day2)
   (create_schedule_for_member b day2)
   (create_schedule_for_member c day2)
   (create_schedule_for_member d day2)  	

   (not(day_in_progress day1))
  
   (not(day_in_progress day2))
  
   (not(complete_day day1))

   (not(complete_day day2))

)

(:goal (and(complete_day day1)(complete_day day2)
)
)

)

