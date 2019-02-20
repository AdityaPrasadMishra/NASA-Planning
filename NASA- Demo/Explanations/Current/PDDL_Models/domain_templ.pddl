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
	(typeofactivitytypeSpectrometry ?wrt - activity)
	(typeofactivitytypeRearrangeSpectrometer ?wrt - activity)
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
	(spectrometerarranged)
{}
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

{}

)

