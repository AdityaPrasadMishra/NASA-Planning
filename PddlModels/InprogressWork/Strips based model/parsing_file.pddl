(define (domain Nasa_strips_activity_model)

;; =====
;; REQUIREMENTS
;; =====

(:requirements :strips :typing :adl)

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
	(in_order ?day1 - days ?day - days)
	(performing_activity ?wrt - activity ?crmem - crew_members)
	(blocked_location ?loc - location)
	(busy_crewmember ?crmem - crew_members)
	(complete_day ?day - days)
	(day_in_progress ?day - days)
	(already_completed ?wrt - activity ?crmem - crew_members ?day - days)
	(inordercrewmember ?crmem1 - crew_members ?crmem - crew_members)
	(revordercrewmember ?crmem1 - crew_members ?crmem - crew_members)
	(inordertasks ?wrt1 - activity ?wrt - activity)
	(firstcrewmember ?crmem - crew_members)
	(firsttask ?wrt - activity)
	(lastcrewmember ?crmem - crew_members)
	(lasttask ?wrt - activity)
	(location_used_by ?loc - location ?crmem - crew_members)
	(day_in_progress_for_crewmember ?crmem - crew_members)
	(day_completed ?crmem - crew_members ?day - days)
)

;; =====
;; ACTIONS
;; =====

(:action starting_day
        :parameters (?day - days ?day1 - days)
        
	:precondition (and(not(day_in_progress ?day))
	(not(complete_day ?day))
	(complete_day ?day1)
	(in_order ?day1 ?day))
        
	:effect (and(day_in_progress ?day))
)

(:action starting_day_for_crew_member 
	:parameters (?crmem - crew_members ?crmem1 - crew_members ?day - days)
	:precondition (and
			(not(day_completed ?crmem ?day)) 
			(not(day_in_progress_for_crewmember ?crmem))
			(or(lastcrewmember ?crmem)(and
			(revordercrewmember ?crmem1 ?crmem)
			(day_in_progress_for_crewmember ?crmem1)))				
			(day_in_progress ?day))
	:effect (and(day_in_progress_for_crewmember ?crmem))
)

(:action starting_activity 
	:parameters (?wrt - activity ?wrt1 - activity ?crmem - crew_members ?loc - location ?day - days)
	
	:precondition(and
	(day_in_progress ?day)
	(day_in_progress_for_crewmember ?crmem)
	(or(firsttask ?wrt)
	(and(inordertasks ?wrt1 ?wrt)
	(already_completed ?wrt1 ?crmem ?day)))	
	(not(performing_activity ?wrt ?crmem))	
	(not(already_completed ?wrt ?crmem ?day))
	(not(busy_crewmember ?crmem))
	(not(location_used_by ?loc ?crmem))
	(not(blocked_location ?loc)))
	
	:effect(and
	(performing_activity ?wrt ?crmem)
	(location_used_by ?loc ?crmem)
	(busy_crewmember ?crmem)
	(blocked_location ?loc))
)

(:action completing_activity 
	:parameters (?wrt - activity ?crmem - crew_members ?loc - location ?day - days)
	
	:precondition (and
	(day_in_progress ?day)
	(day_in_progress_for_crewmember ?crmem)
	(location_used_by ?loc ?crmem)
	(not(already_completed ?wrt ?crmem ?day))
	(performing_activity ?wrt ?crmem)
	(blocked_location ?loc))

	:effect (and
	(not(performing_activity ?wrt ?crmem))
	(not(busy_crewmember ?crmem))
	(not(location_used_by ?loc ?crmem))
	(not(blocked_location ?loc))
	(already_completed ?wrt ?crmem ?day))
)

(:action ending_day_for_crew_member 
	:parameters (?crmem - crew_members ?wrt - activity ?crmem1 - crew_members  ?day - days)
	:precondition (and
			(already_completed ?wrt ?crmem ?day)
			(lasttask ?wrt)
			(day_in_progress_for_crewmember ?crmem)
			(not(day_completed ?crmem ?day))
			(or(firstcrewmember ?crmem)(and
			(inordercrewmember ?crmem1 ?crmem)
			(not(day_in_progress_for_crewmember ?crmem1))
			(day_completed ?crmem1 ?day)))
			(day_in_progress ?day))

	:effect (and
		(not(day_in_progress_for_crewmember ?crmem))	
		(day_completed ?crmem ?day))
)


(:action completing_day
        :parameters (?crmem - crew_members ?day - days)
        
	:precondition (and(day_completed ?crmem ?day)		
			(lastcrewmember ?crmem)
			(day_in_progress ?day))
        
	:effect (and(not(day_in_progress ?day))
		(complete_day ?day))
)







)
(define (problem Nasa_strips_activity_model_prob01)
(:domain Nasa_strips_activity_model)

;(:requirements :fluents :typing :negative-preconditions :disjunctive-preconditions :equality :existential-preconditions :quantified-preconditions :conditional-effects )

(:objects
        a b c d - crew_members
        first_task work exercise sleep breakfast last_task - activity
        locA locB locC locD locE locF - location
        day0 day1 day2 - days
)

(:init	
	(in_order day0 day1)
	(in_order day1 day2)
	(complete_day day0)
	(firstcrewmember a)
	(firsttask first_task)
	(lastcrewmember d)
	(lasttask last_task)
	(inordertasks first_task breakfast)
	(inordertasks breakfast work)
	(inordertasks work exercise)
	(inordertasks exercise sleep)	
	(inordertasks sleep last_task)
	(inordercrewmember a b)
	(inordercrewmember b c)
	(inordercrewmember c d)
	(revordercrewmember d c)
	(revordercrewmember c b)
	(revordercrewmember b a)


)

(:goal (and
	(complete_day day1)
	(complete_day day2)
)
)

)

