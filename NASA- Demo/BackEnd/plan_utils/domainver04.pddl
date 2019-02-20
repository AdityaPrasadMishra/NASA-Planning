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


; (:action slot_change_crew
;  :parameters (?crmem - crew)
;  :precondition(and
;                 (or(=(revslotcount)4)
;                 (slotchangeinprogress))
;                 (>(recentlyusedcrewtime ?crmem)0)
;                 (not(recentlyused ?crmem))
;                 (<(slotcount)4)
;                 )
; :effect(and(increase(slotcount)1)
; (decrease(recentlyusedcrewtime ?crmem)1)
; (recentlyused ?crmem)
; (changeloc)
; (increase(check)1)
; (slotchangeinprogress))

; )

; (:action slot_change_location
;  :parameters (?loc - location)
;  :precondition(and(>(recentlyusedlocationtime ?loc)0)
;                 (changeloc)
;                 (not(recentlyusedlocation ?loc))
;                 )
; :effect(and(decrease(recentlyusedlocationtime ?loc)1)(not(changeloc))(recentlyusedlocation ?loc))

; )

; (:action complete_slot_change_part1
; :parameters (?crmem - crew)
; :precondition(and(=(slotcount)4))
; :effect(and(not(recentlyused ?crmem)))
; )

; (:action complete_slot_change_part2
; :parameters (?loc - location)
; :precondition(and(=(slotcount)4))
; :effect(and(not(recentlyusedlocation ?loc)))
; )



; (:action complete_slot_change_part3
; :parameters ()
; :precondition(and(=(revslotcount)4)(=(slotcount)4))
; :effect(and(not(slotchangeinprogress))(decrease(revslotcount)4)(decrease(slotcount)4))
;;)



(:action starting_slot
	:parameters ()
	:precondition (and(daystarted)(>(slottime)0)(not(slotinprogress)))
	:effect (and(slotinprogress))
)



(:action starting_activity_normal 
	:parameters (?wrt - activity ?loc - location )	
	:precondition(and
	(not(activitycompleted ?wrt))
	(slotinprogress)
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
					(slotinprogress)
                 	(not(recentlyusedcrewmem ?crmem))
			  		(>(rem_time_today ?crmem)0)
					(<(number_of_crew_members ?wrt)(max_crewmember_for_activity ?wrt)))

	:effect(and
			(assign_crewmember ?crmem ?wrt)	
			(recentlyusedcrewmem ?crmem)
			(increase(number_of_crew_members ?wrt)1)	
		  )
)



(:action execute_activity
:parameters(?wrt - activity)
:precondition(and(>(currentactivitytime ?wrt)0)
					(slotinprogress)
					(activated_activity_forcrew ?wrt)
					(not(executed_activity ?wrt))
					(=(number_of_crew_members ?wrt)(max_crewmember_for_activity ?wrt)))
:effect(and(decrease(currentactivitytime ?wrt)1)
			(increase(currentslotphase)(max_crewmember_for_activity ?wrt))
			(executed_activity ?wrt))
)



(:action complete_activity
	:parameters(?wrt - activity)
	:precondition(and(activated_activity_forcrew ?wrt)
					(=(currentactivitytime ?wrt)0)					
					)
	:effect(and	(not(activated_activity_forcrew ?wrt))				
					(activitycompleted ?wrt)				
					)
)

(:action completing_slot
    :parameters ()
    :precondition(and(slotinprogress)(=(currentslotphase)4))
    :effect(and(decrease(slottime)1)(not(slotinprogress))(decrease(currentslotphase)4))

)

(:action continuing_activity 
	:parameters (?wrt - activity )
	
	:precondition(and	
	(executed_activity ?wrt)
    (activated_activity_forcrew ?wrt)
	(not(slotinprogress))
    )	
	:effect(and(not(executed_activity ?wrt)))
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
				(freelocation ?wrt)
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
				(decrease(number_of_crew_members ?wrt)1)
				(not(recentlyusedcrewmem ?crmem))
				(decrease(rem_time_today ?crmem)(decreaseintime ?wrt))
				)
)



(:action checkday_start
:parameters(?crmem - crew)
:precondition(and(not(alreadychecked ?crmem ))(=(rem_time_today ?crmem)0))
:effect(and(alreadychecked ?crmem)(increase(crewmemberswithcompletedwork)1))
)


(:action complete_day
	:parameters()
	:precondition(and(daystarted)		
					(not(slotinprogress))		
					(=(crewmemberswithcompletedwork)4)
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

