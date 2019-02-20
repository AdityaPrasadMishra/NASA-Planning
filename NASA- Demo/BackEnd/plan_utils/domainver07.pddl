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
	(typeofactivitytype01 ?actvar - activity)
	(typeofactivitytype02 ?actvar - activity)
	(inorderactivity ?actvar1 - activity ?actvar2 - activity)
	(typeofactivityorderedactivity ?actvar - activity)	
	(inordercrew ?crew1 - crew ?crew2 - crew)	
	(currentcrewmember ?crew - crew)
	(cannotassigncrew ?wrt - activity)
	(busy_crewmember ?crew1 - crew)
	(blocked_location ?loc - location)
	(changelevel ?crew1 - crew)
	(latch_open)
	(activated_activity_forloc ?wrt - activity ?loc - location)
	(activated_activity_forcrew ?wrt  - activity)
	(ordered_activity ?wrt - activity)
	(activitycompleted ?wrt - activity)
	(activityinprogress)
	(recentlyused ?crmem - crew)
	(useonlyonceforcleanup)
    (useforincreasingthecbustvalue)
)

;; =====
;; FUNCTIONS
;; =====

(:functions 
	(rem_time_today_forall)
	(rem_time_today ?crmem - crew)
	(number_of_crew_members ?wrt - activity)
	(max_crewmember_for_activity ?wrt - activity)
	(decreaseintime ?wrt - activity)
	(cannotbeusedtill)
	(revecountcannotbeusedtill)
)

;; =====
;; ACTIONS
;; =====

(:action starting_day
	:parameters ()
	:precondition (and(not(daystarted)))
	:effect (and(daystarted))
)

;;(:action cleanrrecentlyusedtaskone 
;;	:parameters(?wrt - activity)
;;	:precondition(and(>(cannotbeusedtill)0)
;;			(not(useonlyonceforcleanup))
;;			(deactivatingactivityforcrew ?wrt))
;;	:effect(and(useonlyonceforcleanup)(decrease(cannotbeusedtill)(max_crewmember_for_activity ?wrt)))

;;)


(:action cleanrrecentlyusedtaskone
	:parameters(?crmem - crew)
	:precondition(and(=(revecountcannotbeusedtill)4))
	:effect(and(not(recentlyused ?crmem)))

)

(:action cleanrrecentlyusedtasktwo
	:parameters()
	:precondition(and(=(revecountcannotbeusedtill)4))
	:effect(and(decrease(revecountcannotbeusedtill)4))
)



(:action starting_activity_normal 
	:parameters (?wrt - activity ?loc - location )
	
	:precondition(and
	(daystarted)
	(not(activitycompleted ?wrt))
	;;(useonlyonceforcleanup)
	(not(activityinprogress))
	(typeofactivitynormal ?wrt)
	(not(blocked_location ?loc)))
	
	:effect(and
	(blocked_location ?loc)
	(activityinprogress)
	;;(not(useonlyonceforcleanup))
	(activated_activity_forloc ?wrt ?loc)
	(activated_activity_forcrew ?wrt))
)

(:action starting_activity_type01 
	:parameters (?wrt - activity ?loc - location )
	
	:precondition(and
	(daystarted)	
	;;(useonlyonceforcleanup)
	(not(activitycompleted ?wrt))
	(not(activityinprogress))
	(typeofactivitytype01 ?wrt)
	(not(blocked_location ?loc))
	(not(latch_open)))
	
	:effect(and
	(activityinprogress)
	(blocked_location ?loc)
        ;;(not(useonlyonceforcleanup))
	(activated_activity_forloc ?wrt ?loc)
	(activated_activity_forcrew ?wrt))
)

(:action starting_activity_type02 
	:parameters (?wrt - activity ?loc - location )
	
	:precondition(and
	(daystarted)	
	;;(useonlyonceforcleanup)
	(not(activitycompleted ?wrt))
	(not(activityinprogress))
	(typeofactivitytype02 ?wrt)
	(not(blocked_location ?loc))
	(not(latch_open)))
	
	:effect(and
	(activityinprogress)
	(blocked_location ?loc)
        ;;(not(useonlyonceforcleanup))
	(activated_activity_forloc ?wrt ?loc)
	(activated_activity_forcrew ?wrt))
)

(:action starting_activity_orderedactivity 
	:parameters (?wrt - activity ?loc - location )
	
	:precondition(and
	(daystarted)	
	;;(useonlyonceforcleanup)
	(not(activitycompleted ?wrt))
	(not(activityinprogress))
	(typeofactivityorderedactivity ?wrt)
	(not(blocked_location ?loc))
	(ordered_activity ?wrt)
	(not(latch_open)))
	
	:effect(and
	(activityinprogress)
	(blocked_location ?loc)
        ;;(not(useonlyonceforcleanup))
	(activated_activity_forloc ?wrt ?loc)
	(activated_activity_forcrew ?wrt))
)

(:action ordering_activity
	:parameters (?wrt - activity ?wrt1 - activity )
	:precondition(and(not(ordered_activity ?wrt))
			(inorderactivity ?wrt1 ?wrt)
			(activitycompleted ?wrt1))	
	:effect(and(ordered_activity ?wrt))
)




(:action assigning_current_crew_member
	:parameters(?crmem - crew ?crmem1 - crew)
	:precondition(and(currentcrewmember ?crmem)
					(busy_crewmember ?crmem)
					(inordercrew ?crmem ?crmem1)
				)
	:effect(and
	(not(currentcrewmember ?crmem))
	(currentcrewmember ?crmem1))

)


(:action assigning_crew_members_activity 
	:parameters (?wrt - activity ?crmem - crew )

	:precondition(and(activated_activity_forcrew ?wrt)
					(not(recentlyused ?crmem))
				 (not(busy_crewmember ?crmem))
				 (not(cannotassigncrew ?wrt))
			  (>(rem_time_today ?crmem)0)
			(<(number_of_crew_members ?wrt)(max_crewmember_for_activity ?wrt)))

	:effect(and
		(assign_crewmember ?crmem ?wrt)	
		(busy_crewmember ?crmem)
		(decrease(rem_time_today ?crmem)(decreaseintime ?wrt))
		(decrease(rem_time_today_forall)(decreaseintime ?wrt))
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
				(not(busy_crewmember ?crmem))
				(increase(revecountcannotbeusedtill)1)
				(decrease(number_of_crew_members ?wrt)1)
				(recentlyused ?crmem)
				)
)


(:action complete_activity
	:parameters(?wrt - activity)
	:precondition(and(deactivatingactivityforcrew ?wrt)
					(activated_activity_forcrew ?wrt)			
					(=(number_of_crew_members ?wrt)0)					
					)
	:effect(and		
					(not(activityinprogress))				
					(activitycompleted ?wrt)
					(not(activated_activity_forcrew ?wrt))
					(not(deactivatingactivityforcrew ?wrt))					
					)
)

(:action complete_day
	:parameters()
	:precondition(and(daystarted)
					(not(activityinprogress))	
					(=(rem_time_today_forall)0)			
					)
	:effect(and(not(daystarted))	
				(daycompleted)						
					)
)

)

