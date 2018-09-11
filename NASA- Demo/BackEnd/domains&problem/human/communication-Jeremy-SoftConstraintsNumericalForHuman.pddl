(define (domain Nasa_strips_advanced_model_withSoftConstraints)

;; =====
;; REQUIREMENTS
;; =====

(:requirements :strips :typing :fluents :negative-preconditions :disjunctive-preconditions :equality :existential-preconditions :quantified-preconditions :conditional-effects :adl)

;; =====
;; TYPES
;; =====

(:types 
	crew activity location  - objects
)


;; =====        
;; PREDICATES
;; =====

(:predicates
	(daystarted)
	(daycompleted)
	(assign_crewmember ?crmem - crew ?wrt - activity)	
	(deactivatingactivityforcrew ?wrt - activity)
	(typeofactivitynormal  ?actvar - activity)
	(typeofactivitytype0 ?actvar - activity)
	(inordercrew ?crew1 - crew ?crew2 - crew)	
	(currentcrewmember ?crew - crew)
	(cannotassigncrew ?wrt - activity)
	(busy_crewmember ?crew1 - crew)
	(blocked_location ?loc - location)
	(changelevel ?crew1 - crew)
	(latch_open)
	(activated_activity_forloc ?wrt - activity ?loc - location)
	(activated_activity_forcrew ?wrt  - activity)
	(activitycompleted ?wrt - activity)
	(activityinprogress)
)

;; =====
;; FUNCTIONS
;; =====

(:functions 
	(rem_time_today_forall)
	(rem_time_today ?crmem - crew)
	(number_of_crew_members ?wrt - activity)
	(max_crewmember_for_activity ?wrt - activity)
)

;; =====
;; ACTIONS
;; =====

(:action starting_day
	:parameters ()
	:precondition (and(not(daystarted)))
	:effect (and(daystarted))
)

(:action starting_activity_normal 
	:parameters (?wrt - activity ?loc - location )
	
	:precondition(and
	(daystarted)
	(not(activitycompleted ?wrt))
	(not(activityinprogress))
	(typeofactivitynormal ?wrt)
	(not(blocked_location ?loc)))
	
	:effect(and
	(blocked_location ?loc)
	(activityinprogress)
	(activated_activity_forloc ?wrt ?loc)
	(activated_activity_forcrew ?wrt))
)

(:action starting_activity_type0 
	:parameters (?wrt - activity ?loc - location )
	
	:precondition(and
	(daystarted)	
	(not(activitycompleted ?wrt))
	(not(activityinprogress))
	(typeofactivitytype0 ?wrt)
	(not(activitycompleted  ?wrt ))
	(not(blocked_location ?loc)))
	
	:effect(and
	(activityinprogress)
	(blocked_location ?loc)
	(activated_activity_forloc ?wrt ?loc)
	(activated_activity_forcrew ?wrt))
)


(:action assigning_crew_members_activity 
	:parameters (?wrt - activity ?crmem - crew ?crmem1 - crew)

	:precondition(and(activated_activity_forcrew ?wrt)
		         (currentcrewmember ?crmem )
				 (not(cannotassigncrew ?wrt))
	             (inordercrew ?crmem ?crmem1)
			  (>(rem_time_today ?crmem)0)
			(<(number_of_crew_members ?wrt)(max_crewmember_for_activity ?wrt)))

	:effect(and
		(assign_crewmember ?crmem ?wrt)	
		(not(currentcrewmember ?crmem))
		(currentcrewmember ?crmem1)
		(decrease(rem_time_today ?crmem)1)
		(decrease(rem_time_today_forall)1)
		(increase(number_of_crew_members ?wrt)1)	
		)
)

;;Checks if all crewmember are assigned and frees the location.
(:action free_location_after_assignment 
	:parameters (?wrt - activity ?loc - location)
	
	:precondition (and(activated_activity_forcrew ?wrt)
					(=(number_of_crew_members ?wrt)(max_crewmember_for_activity ?wrt))
							(activated_activity_forloc ?wrt ?loc)
							(blocked_location ?loc))

	:effect (and
				(cannotassigncrew ?wrt)
				(not(blocked_location ?loc))
				(deactivatingactivityforcrew ?wrt)
				(not(activated_activity_forloc ?wrt ?loc))
	)
)

;;Loop over crew member(s) and frees all of them one by one
(:action free_individual_crew_members
	:parameters (?wrt - activity ?crmem - crew)
	
	:precondition (and(deactivatingactivityforcrew ?wrt)
						(assign_crewmember ?crmem ?wrt)	
					(>(number_of_crew_members ?wrt)0))

	:effect (and
				(not(assign_crewmember ?crmem ?wrt))
				(decrease(number_of_crew_members ?wrt)1)
				)
)


(:action complete_activity
	:parameters(?wrt - activity)
	:precondition(and(deactivatingactivityforcrew ?wrt)
					(activated_activity_forcrew ?wrt)			
					(=(number_of_crew_members ?wrt)0)					
					)
	:effect(and		(not(activityinprogress))				
					(activitycompleted ?wrt)
					(not(activated_activity_forcrew ?wrt))
					(not(deactivatingactivityforcrew ?wrt))					
					)
)

(:action complete_day
	:parameters()
	:precondition(and(daystarted)
					(not(activityinprogress))	
					(<=(rem_time_today_forall)0)			
					)
	:effect(and(not(daystarted))	
				(daycompleted)						
					)
)

)

