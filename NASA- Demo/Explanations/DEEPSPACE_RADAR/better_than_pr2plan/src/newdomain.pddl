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
	(typeofactivitytakephoto ?actvar - activity)
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
	(recentlyused ?crmem - crew)
	(useonlyonceforcleanup)
        (useforincreasingthecbustvalue)
    (observed_COMPLETE_ACTIVITY_LUNCH)
(observed_STARTING_DAY)
(observed_FREE_INDIVIDUAL_CREW_MEMBERS_LUNCH_CREWMEMBER-3)
(observed_FREE_INDIVIDUAL_CREW_MEMBERS_LUNCH_CREWMEMBER-1)
(observed_ASSIGNING_CREW_MEMBERS_ACTIVITY_LUNCH_CREWMEMBER-1)
(observed_ASSIGNING_CREW_MEMBERS_ACTIVITY_LUNCH_CREWMEMBER-3)
(observed_COMPLETE_DAY)
(observed_STARTING_ACTIVITY_TYPE02_LUNCH_LOCF)
(observed_FREE_LOCATION_AFTER_ASSIGNMENT_LUNCH_LOCF)
)

;; =====
;; FUNCTIONS
;; =====

(:functions 
	(rem_time_today_forall)
	(rem_time_today ?crmem - crew)
	(number_of_crew_members ?wrt - activity)
	(max_crewmember_for_activity ?wrt - activity)
	(decreaseintime)
	(cannotbeusedtill)
	(revecountcannotbeusedtill)
)

;; =====
;; ACTIONS
;; =====

(:action assigning_crew_members_activityOBS_SEQ4
:parameters (?wrt - activity ?crmem - crew)
:precondition
(and
(activated_activity_forcrew ?wrt)
(observed_ASSIGNING_CREW_MEMBERS_ACTIVITY_LUNCH_CREWMEMBER-1 )
(not(cannotassigncrew ?wrt))
(not(recentlyused ?crmem))
(not(busy_crewmember ?crmem))
(> (rem_time_today ?crmem) 0)
(< (number_of_crew_members ?wrt) (max_crewmember_for_activity ?wrt))
(= ?wrt lunch)
(= ?crmem crewmember-3)

)
:effect
(and
(assign_crewmember ?crmem ?wrt)
(busy_crewmember ?crmem)
(observed_ASSIGNING_CREW_MEMBERS_ACTIVITY_LUNCH_CREWMEMBER-3 )
(not (currentcrewmember ?crmem))
(increase (number_of_crew_members ?wrt) 1)
(decrease (rem_time_today ?crmem) (decreaseintime ))
(decrease (rem_time_today_forall ) (decreaseintime ))

)
)

(:action starting_activity_takephoto
:parameters (?wrt - activity ?loc - location)
:precondition
(and
(daystarted )
(typeofactivitytakephoto ?wrt)
(latch_open )
(not(activitycompleted ?wrt))
(not(activityinprogress ))
(not(blocked_location ?loc))

)
:effect
(and
(blocked_location ?loc)
(activityinprogress )
(activated_activity_forloc ?wrt ?loc)
(activated_activity_forcrew ?wrt)
(not (latch_open ))

)
)

(:action starting_dayOBS_SEQ1
:parameters ()
:precondition
(and
(not(daystarted ))

)
:effect
(and
(daystarted )
(observed_STARTING_DAY )

)
)

(:action starting_day
:parameters ()
:precondition
(and
(not(daystarted ))

)
:effect
(and
(daystarted )

)
)

(:action assigning_crew_members_activityOBS_SEQ3
:parameters (?wrt - activity ?crmem - crew)
:precondition
(and
(activated_activity_forcrew ?wrt)
(observed_STARTING_ACTIVITY_TYPE02_LUNCH_LOCF )
(not(cannotassigncrew ?wrt))
(not(recentlyused ?crmem))
(not(busy_crewmember ?crmem))
(> (rem_time_today ?crmem) 0)
(< (number_of_crew_members ?wrt) (max_crewmember_for_activity ?wrt))
(= ?wrt lunch)
(= ?crmem crewmember-1)

)
:effect
(and
(assign_crewmember ?crmem ?wrt)
(busy_crewmember ?crmem)
(observed_ASSIGNING_CREW_MEMBERS_ACTIVITY_LUNCH_CREWMEMBER-1 )
(not (currentcrewmember ?crmem))
(increase (number_of_crew_members ?wrt) 1)
(decrease (rem_time_today ?crmem) (decreaseintime ))
(decrease (rem_time_today_forall ) (decreaseintime ))

)
)

(:action starting_activity_type02
:parameters (?wrt - activity ?loc - location)
:precondition
(and
(daystarted )
(typeofactivitytype02 ?wrt)
(not(activitycompleted ?wrt))
(not(activityinprogress ))
(not(blocked_location ?loc))
(not(latch_open ))

)
:effect
(and
(blocked_location ?loc)
(activityinprogress )
(activated_activity_forloc ?wrt ?loc)
(activated_activity_forcrew ?wrt)

)
)

(:action starting_activity_type01
:parameters (?wrt - activity ?loc - location)
:precondition
(and
(daystarted )
(typeofactivitytype01 ?wrt)
(not(activitycompleted ?wrt))
(not(activityinprogress ))
(not(blocked_location ?loc))

)
:effect
(and
(blocked_location ?loc)
(activityinprogress )
(activated_activity_forloc ?wrt ?loc)
(activated_activity_forcrew ?wrt)

)
)

(:action starting_activity_type02OBS_SEQ2
:parameters (?wrt - activity ?loc - location)
:precondition
(and
(daystarted )
(typeofactivitytype02 ?wrt)
(observed_STARTING_DAY )
(not(activitycompleted ?wrt))
(not(activityinprogress ))
(not(blocked_location ?loc))
(not(latch_open ))
(= ?wrt lunch)
(= ?loc locf)

)
:effect
(and
(blocked_location ?loc)
(activityinprogress )
(activated_activity_forloc ?wrt ?loc)
(activated_activity_forcrew ?wrt)
(observed_STARTING_ACTIVITY_TYPE02_LUNCH_LOCF )

)
)

(:action cleanrrecentlyusedtaskone
:parameters (?crmem - crew)
:precondition
(and
(= (revecountcannotbeusedtill ) 4)

)
:effect
(and
(not (recentlyused ?crmem))

)
)

(:action free_location_after_assignmentOBS_SEQ5
:parameters (?wrt - activity ?loc - location)
:precondition
(and
(activated_activity_forcrew ?wrt)
(activated_activity_forloc ?wrt ?loc)
(blocked_location ?loc)
(observed_ASSIGNING_CREW_MEMBERS_ACTIVITY_LUNCH_CREWMEMBER-3 )
(= (number_of_crew_members ?wrt) (max_crewmember_for_activity ?wrt))
(= ?wrt lunch)
(= ?loc locf)

)
:effect
(and
(cannotassigncrew ?wrt)
(deactivatingactivityforcrew ?wrt)
(observed_FREE_LOCATION_AFTER_ASSIGNMENT_LUNCH_LOCF )
(not (blocked_location ?loc))
(not (activated_activity_forloc ?wrt ?loc))

)
)

(:action cleanrrecentlyusedtasktwo
:parameters ()
:precondition
(and
(= (revecountcannotbeusedtill ) 4)

)
:effect
(and
(decrease (revecountcannotbeusedtill ) 4)

)
)

(:action free_individual_crew_membersOBS_SEQ7
:parameters (?wrt - activity ?crmem - crew)
:precondition
(and
(deactivatingactivityforcrew ?wrt)
(assign_crewmember ?crmem ?wrt)
(observed_FREE_INDIVIDUAL_CREW_MEMBERS_LUNCH_CREWMEMBER-1 )
(> (number_of_crew_members ?wrt) 0)
(= ?wrt lunch)
(= ?crmem crewmember-3)

)
:effect
(and
(recentlyused ?crmem)
(observed_FREE_INDIVIDUAL_CREW_MEMBERS_LUNCH_CREWMEMBER-3 )
(not (assign_crewmember ?crmem ?wrt))
(not (busy_crewmember ?crmem))
(increase (revecountcannotbeusedtill ) 1)
(decrease (number_of_crew_members ?wrt) 1)

)
)

(:action complete_activityOBS_SEQ8
:parameters (?wrt - activity)
:precondition
(and
(deactivatingactivityforcrew ?wrt)
(activated_activity_forcrew ?wrt)
(observed_FREE_INDIVIDUAL_CREW_MEMBERS_LUNCH_CREWMEMBER-3 )
(= (number_of_crew_members ?wrt) 0)
(= ?wrt lunch)

)
:effect
(and
(activitycompleted ?wrt)
(observed_COMPLETE_ACTIVITY_LUNCH )
(not (activityinprogress ))
(not (activated_activity_forcrew ?wrt))
(not (deactivatingactivityforcrew ?wrt))

)
)

(:action assigning_crew_members_activity
:parameters (?wrt - activity ?crmem - crew)
:precondition
(and
(activated_activity_forcrew ?wrt)
(not(cannotassigncrew ?wrt))
(not(recentlyused ?crmem))
(not(busy_crewmember ?crmem))
(> (rem_time_today ?crmem) 0)
(< (number_of_crew_members ?wrt) (max_crewmember_for_activity ?wrt))

)
:effect
(and
(assign_crewmember ?crmem ?wrt)
(busy_crewmember ?crmem)
(not (currentcrewmember ?crmem))
(increase (number_of_crew_members ?wrt) 1)
(decrease (rem_time_today ?crmem) (decreaseintime ))
(decrease (rem_time_today_forall ) (decreaseintime ))

)
)

(:action complete_activity
:parameters (?wrt - activity)
:precondition
(and
(deactivatingactivityforcrew ?wrt)
(activated_activity_forcrew ?wrt)
(= (number_of_crew_members ?wrt) 0)

)
:effect
(and
(activitycompleted ?wrt)
(not (activityinprogress ))
(not (activated_activity_forcrew ?wrt))
(not (deactivatingactivityforcrew ?wrt))

)
)

(:action free_location_after_assignment
:parameters (?wrt - activity ?loc - location)
:precondition
(and
(activated_activity_forcrew ?wrt)
(activated_activity_forloc ?wrt ?loc)
(blocked_location ?loc)
(= (number_of_crew_members ?wrt) (max_crewmember_for_activity ?wrt))

)
:effect
(and
(cannotassigncrew ?wrt)
(deactivatingactivityforcrew ?wrt)
(not (blocked_location ?loc))
(not (activated_activity_forloc ?wrt ?loc))

)
)

(:action free_individual_crew_members
:parameters (?wrt - activity ?crmem - crew)
:precondition
(and
(deactivatingactivityforcrew ?wrt)
(assign_crewmember ?crmem ?wrt)
(> (number_of_crew_members ?wrt) 0)

)
:effect
(and
(recentlyused ?crmem)
(not (assign_crewmember ?crmem ?wrt))
(not (busy_crewmember ?crmem))
(increase (revecountcannotbeusedtill ) 1)
(decrease (number_of_crew_members ?wrt) 1)

)
)

(:action complete_day
:parameters ()
:precondition
(and
(daystarted )
(not(activityinprogress ))
(<= (rem_time_today_forall ) 0)

)
:effect
(and
(daycompleted )
(not (daystarted ))

)
)

(:action free_individual_crew_membersOBS_SEQ6
:parameters (?wrt - activity ?crmem - crew)
:precondition
(and
(deactivatingactivityforcrew ?wrt)
(assign_crewmember ?crmem ?wrt)
(observed_FREE_LOCATION_AFTER_ASSIGNMENT_LUNCH_LOCF )
(> (number_of_crew_members ?wrt) 0)
(= ?wrt lunch)
(= ?crmem crewmember-1)

)
:effect
(and
(recentlyused ?crmem)
(observed_FREE_INDIVIDUAL_CREW_MEMBERS_LUNCH_CREWMEMBER-1 )
(not (assign_crewmember ?crmem ?wrt))
(not (busy_crewmember ?crmem))
(increase (revecountcannotbeusedtill ) 1)
(decrease (number_of_crew_members ?wrt) 1)

)
)

(:action starting_activity_normal
:parameters (?wrt - activity ?loc - location)
:precondition
(and
(daystarted )
(typeofactivitynormal ?wrt)
(not(activitycompleted ?wrt))
(not(activityinprogress ))
(not(blocked_location ?loc))

)
:effect
(and
(blocked_location ?loc)
(activityinprogress )
(activated_activity_forloc ?wrt ?loc)
(activated_activity_forcrew ?wrt)

)
)

(:action complete_dayOBS_SEQ9
:parameters ()
:precondition
(and
(daystarted )
(observed_COMPLETE_ACTIVITY_LUNCH )
(not(activityinprogress ))
(<= (rem_time_today_forall ) 0)

)
:effect
(and
(daycompleted )
(observed_COMPLETE_DAY )
(not (daystarted ))

)
)


)

