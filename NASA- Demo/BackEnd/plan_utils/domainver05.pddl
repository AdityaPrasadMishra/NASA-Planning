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
	;;(deactivatingactivityforcrew ?wrt - activity)
	(typeofactivitynormal  ?actvar - activity)
	(typeofactivitytype01 ?actvar - activity)
	(typeofactivitytype02 ?actvar - activity)
    (typeofactivitytakephoto ?actvar - activity)
	(typeofactivityorderedactivity ?actvar - activity)
    (inorderactivity ?actvar1 - activity ?actvar2 - activity)	
	(inordercrew ?crew1 - crew ?crew2 - crew)	
	(cannotassigncrew ?wrt - activity)
;;	(busy_crewmember ?crew1 - crew)
;;	(blocked_location ?loc - location)
	(changelevel ?crew1 - crew)
	(latch_open)
	(activated_activity_forloc ?wrt - activity ?loc - location)
	(activated_activity_forcrew ?wrt  - activity)
	(ordered_activity ?wrt - activity)
	(activitycompleted ?wrt - activity)
	(activityinprogress)	
    (alreadychecked ?crmem - crew)
    ;;(useforincreasingthecbustvalue)
    (recentlyused ?crmem - crew)
    (slotchangeinprogress)
    (beingusedlocation ?loc -location)
    ;;(changeloc)
    (slotinprogress)
	(activity_started ?wrt - activity)
	(assigned_all_crew_members ?wrt -  activity) 
	(executed_activity ?wrt -  activity)
	(recentlyusedcrewmem ?crmem - crew)
	(recentlyusedlocation ?loc - location)
	(freelocation ?wrt - activity)
)

;; =====
;; FUNCTIONS
;; =====

(:functions 
	(rem_time_today ?crmem - crew)
	(number_of_crew_members ?wrt - activity)
	(max_crewmember_for_activity ?wrt - activity)
	(decreaseintime ?wrt - activity)
	;;(cannotbeusedtill)
	;;(revecountcannotbeusedtill)
    (crewmemberswithcompletedwork)
    (currentcrewtime ?crmem - crew)
    (remlocationtime ?loc - location)
    ;;(recentlyusedcrewtime ?crmem - crew)
    ;;(recentlyusedlocationtime ?loc - location)
   ;; (totaltime)
    ;;(slotcount)
    ;;(revslotcount)
    ;;(beingusedlocationtime)
    ;;(check)
    (slottime)
	(currentactivitytime ?wrt - activity)
	(currentslotphase)
	(rem_time_today_all)

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
	(not(activitycompleted ?wrt))
	(not(slotinprogress))
	(not(activated_activity_forcrew ?wrt))
	(not(activated_activity_forloc ?wrt ?loc))
	(typeofactivitynormal ?wrt)
    (>(remlocationtime ?loc)0)
    (not(recentlyusedlocation ?loc))
    )	
	:effect(and
	(activated_activity_forloc ?wrt ?loc)
	(activated_activity_forcrew ?wrt)
    (recentlyusedlocation ?loc)
	(increase(currentactivitytime ?wrt)(decreaseintime ?wrt))
    )
)

(:action assigning_crew_members_activity 
	:parameters (?wrt - activity ?crmem - crew )

	:precondition(and(activated_activity_forcrew ?wrt)
					(not(slotinprogress))
                 	(not(recentlyusedcrewmem ?crmem))
			  		(>(rem_time_today ?crmem)0)
					(<(number_of_crew_members ?wrt)(max_crewmember_for_activity ?wrt)))

	:effect(and
			(assign_crewmember ?crmem ?wrt)	
			(recentlyusedcrewmem ?crmem)
			(increase(number_of_crew_members ?wrt)1)	
            (activitycompleted ?wrt)
            (increase(currentslotphase)1)
		  )
)

(:action nonexecuting_activity
:parameters (?wrt - activity)
:precondition (and(>(currentactivitytime ?wrt)0)(executed_activity ?wrt)(not(slotinprogress)))
:effect(and(not(executed_activity ?wrt)))

)

(:action starting_slot
	:parameters ()
	:precondition (and(daystarted)(>(slottime)0)(not(slotinprogress))(=(currentslotphase)4))
	:effect (and(slotinprogress))
)

(:action executing_activity 
    :parameters(?wrt - activity)
    :precondition(and(slotinprogress)
    (not(executed_activity ?wrt))
    (>(currentactivitytime ?wrt)0)
    (=(number_of_crew_members ?wrt)(max_crewmember_for_activity ?wrt)))
    :effect(and(decrease(currentactivitytime ?wrt)1)
    (executed_activity ?wrt)
    (not(activated_activity_forcrew ?wrt)))
) 


(:action completing_slot
    :parameters ()
    :precondition(and(slotinprogress))
    :effect(and(decrease(slottime)1)(not(slotinprogress)))

)


;;Checks if all crewmember are assigned and frees the location.
(:action free_location_after_assignment 
	:parameters (?wrt - activity ?loc - location)
	
	:precondition (and
							(=(currentactivitytime ?wrt)0)
							(recentlyusedlocation ?loc)
							(not(slotinprogress))
							(activated_activity_forloc ?wrt ?loc))

	:effect (and
				(not(recentlyusedlocation ?loc))	
				(decrease(remlocationtime ?loc)(decreaseintime ?wrt))
				(not(activated_activity_forloc ?wrt ?loc))
	)
)

;;Loop over crew member(s) and frees all of them one by one
(:action free_individual_crew_members
	:parameters (?wrt - activity ?crmem - crew)
	
	:precondition (and
						(=(currentactivitytime ?wrt)0)
						(not(slotinprogress))
						(recentlyusedcrewmem ?crmem)
						(assign_crewmember ?crmem ?wrt)	
					(>(number_of_crew_members ?wrt)0))

	:effect (and
				(not(assign_crewmember ?crmem ?wrt))
				(decrease(number_of_crew_members ?wrt)2)
				(not(recentlyusedcrewmem ?crmem))
				(decrease(rem_time_today ?crmem)(decreaseintime ?wrt))
                (decrease(currentslotphase)1)
                (decrease(rem_time_today_all)(decreaseintime ?wrt))
				)
)



; (:action checkday_start
; :parameters(?crmem - crew)
; :precondition(and(not(alreadychecked ?crmem ))(=(rem_time_today ?crmem)0))
; :effect(and(alreadychecked ?crmem)(increase(crewmemberswithcompletedwork)1))
; )


(:action complete_day
	:parameters()
	:precondition(and(daystarted)		
					(not(slotinprogress))		
					(=(rem_time_today_all)0)
					)
	:effect(and(not(daystarted))	
				(daycompleted)						
					)
)

(:action ordering_activity
	:parameters (?wrt - activity ?wrt1 - activity )
	:precondition(and(not(ordered_activity ?wrt))
			(inorderactivity ?wrt1 ?wrt)
			(activitycompleted ?wrt1))	
	:effect(and(ordered_activity ?wrt))
)


)

