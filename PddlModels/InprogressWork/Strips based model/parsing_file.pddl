(define (domain Nasa_strips_advanced_model)

;; =====
;; REQUIREMENTS
;; =====

(:requirements :strips :typing :adl)

;; =====
;; TYPES
;; =====

(:types 
	crew levels times activity activitytype location  - objects
)


;; =====        
;; PREDICATES
;; =====

(:predicates
	(daystarted)
	(daycompleted)


	(timecompleted ?time - times)
	(timeinprogress ?time - times)

	(inordertime  ?time1 - times ?time2 - times)
	(inorderlevel ?levelvar - levels ?levelvar2 - levels)
	(inordercrew ?crew1 - crew ?crew2 - crew)

	(currentlevel ?levelvar - levels ?crew1 - crew)

	(currenttime ?time - times)
	(lasttime ?time - times)


	(levelsforTime ?levelvar - levels ?time - times )
	(levelsforactivity ?levelvar - levels ?actvar - activity)

	(activity ?type - activitytype ?actvar - activity)
	(activityinprogress ?actvar - activity ?crew1 - crew ?loc - location)
	(activitycompleted  ?actvar - activity ?crew1 - crew)
	
	(busycrewmember ?crew1 - crew)
	(blockedlocation ?loc - location)
	
	(onecrewmemberforexperiments ?actvar - activity)
	(twocrewmemberforexperiments ?actvar - activity)
	(threecrewmemberforexperiments ?actvar - activity)
	(fourcrewmemberforexperiments ?actvar - activity)

	(firstcrewmember ?crew1 - crew)
	(lastcrewmember ?crew1 - crew)

	(changelevel ?crew1 - crew)
)


;; =====
;; ACTIONS
;; =====

(:action StartingDay
	:parameters ()
	:precondition (and(not(daystarted))
			(not(daycompleted)))
	:effect (and(daystarted))
)

(:action EndingDay
	:parameters(?time - times ?crew1 - crew)
	:precondition(and(lasttime ?time)
			(timecompleted ?time)
			(not(daycompleted))
			(daystarted)
			)
	:effect(and(daycompleted))

)

(:action StartPeriodOfDay 
	:parameters (?time - times ?time2 - times)
	:precondition (and
			(daystarted)
			(not(timeinprogress ?time))
			(not(timecompleted ?time))
			(inordertime ?time2 ?time)
			(timecompleted ?time2))
	:effect (timeinprogress ?time)
)

(:action EndPeriodOfDay 
	:parameters (?time - times ?levelvar - levels ?crew1 - crew)
	:precondition (and
			(daystarted)
			(timeinprogress ?time)
			(lastcrewmember ?crew1)
			(currentlevel ?levelvar ?crew1)
			(levelsforTime ?levelvar ?time )
			)
	:effect (and(not(timeinprogress ?time))(timecompleted ?time))
)

(:action ChangeLevel
	:parameters(?level1 - levels ?level2 - levels ?crew1 - crew ?crew2 - crew)
	:precondition(and
			(changelevel ?crew1)
			(not(firstcrewmember ?crew1))
			(inordercrew ?crew2 ?crew1)
			(inorderlevel ?level1 ?level2)
			(currentlevel ?level1 ?crew1)
			(currentlevel ?level2 ?crew2)
			)
	:effect (and(currentlevel ?level2 ?crew1)
			(not(changelevel ?crew1))
			(not(currentlevel ?level1 ?crew1)))
)

(:action ChangeLevelofFirstCrewmember
	:parameters(?level1 - levels ?level2 - levels ?crew1 - crew)
	:precondition(and
			(changelevel ?crew1)
			(firstcrewmember ?crew1)
			(inorderlevel ?level1 ?level2)
			(currentlevel ?level1 ?crew1)
			)
	:effect (and(currentlevel ?level2 ?crew1)
			(not(changelevel ?crew1))
			(not(currentlevel ?level1 ?crew1)))
)

(:action StartingActivitywithonecrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(onecrewmemberforexperiments ?actvar)
			(not(activityinprogress ?actvar ?crew1 ?loc))
			(not(activitycompleted  ?actvar ?crew1 ))
			(not(busycrewmember ?crew1))	
			(not(blockedlocation ?loc))
			(currentlevel ?levelvar ?crew1)
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(activityinprogress ?actvar ?crew1 ?loc)
		(busycrewmember ?crew1)	
		(blockedlocation ?loc))

)

(:action CompletingActivityWithonecrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(onecrewmemberforexperiments ?actvar)
			(activityinprogress ?actvar ?crew1 ?loc)
			(not(activitycompleted  ?actvar ?crew1 ))
			(busycrewmember ?crew1)	
			(blockedlocation ?loc)
			(currentlevel ?levelvar ?crew1)
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(not(busycrewmember ?crew1))	
		(not(blockedlocation ?loc))
		(activitycompleted ?actvar ?crew1)
		(not(activityinprogress ?actvar ?crew1 ?loc))
		(changelevel ?crew1))

)


(:action StartingActivitywithtwocrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?crew2 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(twocrewmemberforexperiments ?actvar)
			(not(activityinprogress ?actvar ?crew1 ?loc))
			(not(activityinprogress ?actvar ?crew2 ?loc))
			(not(activitycompleted  ?actvar ?crew1 ))
			(not(activitycompleted  ?actvar ?crew2 ))
			(not(busycrewmember ?crew1))
			(not(busycrewmember ?crew2))	
			(not(blockedlocation ?loc))
			(currentlevel ?levelvar ?crew1)
			(currentlevel ?levelvar ?crew2)
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(activityinprogress ?actvar ?crew1 ?loc)
		(activityinprogress ?actvar ?crew2 ?loc)
			(busycrewmember ?crew1)
			(busycrewmember ?crew2)	
			(blockedlocation ?loc))

)

(:action CompletingActivityWithtwocrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?crew2 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(twocrewmemberforexperiments ?actvar )
			(activityinprogress ?actvar ?crew1 ?loc)
			(activityinprogress ?actvar ?crew2 ?loc)
			(not(activitycompleted  ?actvar ?crew1 ))
			(not(activitycompleted  ?actvar ?crew2 ))
			(busycrewmember ?crew1)
			(busycrewmember ?crew2)	
			(blockedlocation ?loc)
			(currentlevel ?levelvar ?crew1)
			(currentlevel ?levelvar ?crew2)	
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(activitycompleted ?actvar ?crew1)
		(activitycompleted ?actvar ?crew2)
		(not(activityinprogress ?actvar ?crew1 ?loc))
		(not(activityinprogress ?actvar ?crew2 ?loc))
		(changelevel ?crew1)
		(changelevel ?crew2)
		(not(busycrewmember ?crew1))
		(not(busycrewmember ?crew2))	
		(not(blockedlocation ?loc)))

)

(:action StartingActivitywiththreecrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?crew2 - crew ?crew3 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(threecrewmemberforexperiments ?actvar)
			(not(activityinprogress ?actvar ?crew1 ?loc))
			(not(activityinprogress ?actvar ?crew2 ?loc))
			(not(activityinprogress ?actvar ?crew3 ?loc))
			(not(activitycompleted  ?actvar ?crew1 ))
			(not(activitycompleted  ?actvar ?crew2 ))
			(not(activitycompleted  ?actvar ?crew3 ))
			(not(busycrewmember ?crew1))
			(not(busycrewmember ?crew2))
			(not(busycrewmember ?crew3))	
			(not(blockedlocation ?loc))
			(currentlevel ?levelvar ?crew1)
			(currentlevel ?levelvar ?crew2)
			(currentlevel ?levelvar ?crew3)	
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(activityinprogress ?actvar ?crew1 ?loc)
		(activityinprogress ?actvar ?crew2 ?loc)
		(activityinprogress ?actvar ?crew3 ?loc)
		(busycrewmember ?crew1)
		(busycrewmember ?crew2)
		(busycrewmember ?crew3)	
		(blockedlocation ?loc))

)

(:action CompletingActivityWiththreecrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?crew2 - crew ?crew3 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(threecrewmemberforexperiments ?actvar )
			(activityinprogress ?actvar ?crew1 ?loc)
			(activityinprogress ?actvar ?crew2 ?loc)
			(activityinprogress ?actvar ?crew3 ?loc)
			(not(activitycompleted  ?actvar ?crew1 ))
			(not(activitycompleted  ?actvar ?crew2 ))
			(not(activitycompleted  ?actvar ?crew3 ))
			(busycrewmember ?crew1)
			(busycrewmember ?crew2)
			(busycrewmember ?crew3)	
			(blockedlocation ?loc)
			(currentlevel ?levelvar ?crew1)
			(currentlevel ?levelvar ?crew2)
			(currentlevel ?levelvar ?crew3)	
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(activitycompleted ?actvar ?crew1 )
		(activitycompleted ?actvar ?crew2 )
		(activitycompleted ?actvar ?crew3 )
		(not(activityinprogress ?actvar ?crew1 ?loc))
		(not(activityinprogress ?actvar ?crew2 ?loc))
		(not(activityinprogress ?actvar ?crew3 ?loc))
		(changelevel ?crew1)
		(changelevel ?crew2)
		(changelevel ?crew3)
		(not(busycrewmember ?crew1))
		(not(busycrewmember ?crew2))
		(not(busycrewmember ?crew3))	
		(not(blockedlocation ?loc)))

)


(:action StartingActivitywithfourcrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?crew2 - crew ?crew3 - crew ?crew4 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(fourcrewmemberforexperiments ?actvar)
			(not(activityinprogress ?actvar ?crew1 ?loc))
			(not(activityinprogress ?actvar ?crew2 ?loc))
			(not(activityinprogress ?actvar ?crew3 ?loc))
			(not(activityinprogress ?actvar ?crew4 ?loc))
			(not(activitycompleted  ?actvar ?crew1 ))
			(not(activitycompleted  ?actvar ?crew2 ))
			(not(activitycompleted  ?actvar ?crew3 ))
			(not(activitycompleted  ?actvar ?crew4 ))
			(not(busycrewmember ?crew1))
			(not(busycrewmember ?crew2))
			(not(busycrewmember ?crew3))
			(not(busycrewmember ?crew4))	
			(not(blockedlocation ?loc))
			(currentlevel ?levelvar ?crew1)
			(currentlevel ?levelvar ?crew2)
			(currentlevel ?levelvar ?crew3)
			(currentlevel ?levelvar ?crew4)	
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(activityinprogress ?actvar ?crew1 ?loc)
		(activityinprogress ?actvar ?crew2 ?loc)
		(activityinprogress ?actvar ?crew3 ?loc)
		(activityinprogress ?actvar ?crew4 ?loc)
		(busycrewmember ?crew1)
		(busycrewmember ?crew2)
		(busycrewmember ?crew3)
		(busycrewmember ?crew4)	
		(blockedlocation ?loc))

)

(:action CompletingActivityWithfourcrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?crew2 - crew ?crew3 - crew ?crew4 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(fourcrewmemberforexperiments ?actvar )
			(activityinprogress ?actvar ?crew1 ?loc)
			(activityinprogress ?actvar ?crew2 ?loc)
			(activityinprogress ?actvar ?crew3 ?loc)
			(activityinprogress ?actvar ?crew4 ?loc)
			(not(activitycompleted  ?actvar ?crew1 ))
			(not(activitycompleted  ?actvar ?crew2 ))
			(not(activitycompleted  ?actvar ?crew3 ))
			(not(activitycompleted  ?actvar ?crew4 ))
			(busycrewmember ?crew1)
			(busycrewmember ?crew2)
			(busycrewmember ?crew3)
			(busycrewmember ?crew4)	
			(blockedlocation ?loc)
			(currentlevel ?levelvar ?crew1)
			(currentlevel ?levelvar ?crew2)
			(currentlevel ?levelvar ?crew3)	
			(currentlevel ?levelvar ?crew4)	
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(activitycompleted ?actvar ?crew1 )
		(activitycompleted ?actvar ?crew2 )
		(activitycompleted ?actvar ?crew3 )
		(activitycompleted ?actvar ?crew4 )
		(not(activityinprogress ?actvar ?crew1 ?loc))
		(not(activityinprogress ?actvar ?crew2 ?loc))
		(not(activityinprogress ?actvar ?crew3 ?loc))
		(not(activityinprogress ?actvar ?crew4 ?loc))
		(not(busycrewmember ?crew1))
		(not(busycrewmember ?crew2))
		(not(busycrewmember ?crew3))
		(not(busycrewmember ?crew4))	
		(not(blockedlocation ?loc))
		(changelevel ?crew1)
		(changelevel ?crew2)
		(changelevel ?crew3)
		(changelevel ?crew4))

)

)




 
(define (domain Nasa_strips_advanced_model)

;; =====
;; REQUIREMENTS
;; =====

(:requirements :strips :typing :adl)

;; =====
;; TYPES
;; =====

(:types 
	crew levels times activity activitytype location  - objects
)


;; =====        
;; PREDICATES
;; =====

(:predicates
	(daystarted)
	(daycompleted)


	(timecompleted ?time - times)
	(timeinprogress ?time - times)

	(inordertime  ?time1 - times ?time2 - times)
	(inorderlevel ?levelvar - levels ?levelvar2 - levels)
	(inordercrew ?crew1 - crew ?crew2 - crew)

	(currentlevel ?levelvar - levels ?crew1 - crew)

	(currenttime ?time - times)
	(lasttime ?time - times)


	(levelsforTime ?levelvar - levels ?time - times )
	(levelsforactivity ?levelvar - levels ?actvar - activity)

	(activity ?type - activitytype ?actvar - activity)
	(activityinprogress ?actvar - activity ?crew1 - crew ?loc - location)
	(activitycompleted  ?actvar - activity ?crew1 - crew)
	
	(busycrewmember ?crew1 - crew)
	(blockedlocation ?loc - location)
	
	(onecrewmemberforexperiments ?actvar - activity)
	(twocrewmemberforexperiments ?actvar - activity)
	(threecrewmemberforexperiments ?actvar - activity)
	(fourcrewmemberforexperiments ?actvar - activity)

	(firstcrewmember ?crew1 - crew)
	(lastcrewmember ?crew1 - crew)

	(changelevel ?crew1 - crew)
)


;; =====
;; ACTIONS
;; =====

(:action StartingDay
	:parameters ()
	:precondition (and(not(daystarted))
			(not(daycompleted)))
	:effect (and(daystarted))
)

(:action EndingDay
	:parameters(?time - times ?crew1 - crew)
	:precondition(and(lasttime ?time)
			(timecompleted ?time)
			(not(daycompleted))
			(daystarted)
			)
	:effect(and(daycompleted))

)

(:action StartPeriodOfDay 
	:parameters (?time - times ?time2 - times)
	:precondition (and
			(daystarted)
			(not(timeinprogress ?time))
			(not(timecompleted ?time))
			(inordertime ?time2 ?time)
			(timecompleted ?time2))
	:effect (timeinprogress ?time)
)

(:action EndPeriodOfDay 
	:parameters (?time - times ?levelvar - levels ?crew1 - crew)
	:precondition (and
			(daystarted)
			(timeinprogress ?time)
			(lastcrewmember ?crew1)
			(currentlevel ?levelvar ?crew1)
			(levelsforTime ?levelvar ?time )
			)
	:effect (and(not(timeinprogress ?time))(timecompleted ?time))
)

(:action ChangeLevel
	:parameters(?level1 - levels ?level2 - levels ?crew1 - crew ?crew2 - crew)
	:precondition(and
			(changelevel ?crew1)
			(not(firstcrewmember ?crew1))
			(inordercrew ?crew2 ?crew1)
			(inorderlevel ?level1 ?level2)
			(currentlevel ?level1 ?crew1)
			(currentlevel ?level2 ?crew2)
			)
	:effect (and(currentlevel ?level2 ?crew1)
			(not(changelevel ?crew1))
			(not(currentlevel ?level1 ?crew1)))
)

(:action ChangeLevelofFirstCrewmember
	:parameters(?level1 - levels ?level2 - levels ?crew1 - crew)
	:precondition(and
			(changelevel ?crew1)
			(firstcrewmember ?crew1)
			(inorderlevel ?level1 ?level2)
			(currentlevel ?level1 ?crew1)
			)
	:effect (and(currentlevel ?level2 ?crew1)
			(not(changelevel ?crew1))
			(not(currentlevel ?level1 ?crew1)))
)

(:action StartingActivitywithonecrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(onecrewmemberforexperiments ?actvar)
			(not(activityinprogress ?actvar ?crew1 ?loc))
			(not(activitycompleted  ?actvar ?crew1 ))
			(not(busycrewmember ?crew1))	
			(not(blockedlocation ?loc))
			(currentlevel ?levelvar ?crew1)
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(activityinprogress ?actvar ?crew1 ?loc)
		(busycrewmember ?crew1)	
		(blockedlocation ?loc))

)

(:action CompletingActivityWithonecrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(onecrewmemberforexperiments ?actvar)
			(activityinprogress ?actvar ?crew1 ?loc)
			(not(activitycompleted  ?actvar ?crew1 ))
			(busycrewmember ?crew1)	
			(blockedlocation ?loc)
			(currentlevel ?levelvar ?crew1)
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(not(busycrewmember ?crew1))	
		(not(blockedlocation ?loc))
		(activitycompleted ?actvar ?crew1)
		(not(activityinprogress ?actvar ?crew1 ?loc))
		(changelevel ?crew1))

)


(:action StartingActivitywithtwocrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?crew2 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(twocrewmemberforexperiments ?actvar)
			(not(activityinprogress ?actvar ?crew1 ?loc))
			(not(activityinprogress ?actvar ?crew2 ?loc))
			(not(activitycompleted  ?actvar ?crew1 ))
			(not(activitycompleted  ?actvar ?crew2 ))
			(not(busycrewmember ?crew1))
			(not(busycrewmember ?crew2))	
			(not(blockedlocation ?loc))
			(currentlevel ?levelvar ?crew1)
			(currentlevel ?levelvar ?crew2)
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(activityinprogress ?actvar ?crew1 ?loc)
		(activityinprogress ?actvar ?crew2 ?loc)
			(busycrewmember ?crew1)
			(busycrewmember ?crew2)	
			(blockedlocation ?loc))

)

(:action CompletingActivityWithtwocrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?crew2 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(twocrewmemberforexperiments ?actvar )
			(activityinprogress ?actvar ?crew1 ?loc)
			(activityinprogress ?actvar ?crew2 ?loc)
			(not(activitycompleted  ?actvar ?crew1 ))
			(not(activitycompleted  ?actvar ?crew2 ))
			(busycrewmember ?crew1)
			(busycrewmember ?crew2)	
			(blockedlocation ?loc)
			(currentlevel ?levelvar ?crew1)
			(currentlevel ?levelvar ?crew2)	
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(activitycompleted ?actvar ?crew1)
		(activitycompleted ?actvar ?crew2)
		(not(activityinprogress ?actvar ?crew1 ?loc))
		(not(activityinprogress ?actvar ?crew2 ?loc))
		(changelevel ?crew1)
		(changelevel ?crew2)
		(not(busycrewmember ?crew1))
		(not(busycrewmember ?crew2))	
		(not(blockedlocation ?loc)))

)

(:action StartingActivitywiththreecrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?crew2 - crew ?crew3 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(threecrewmemberforexperiments ?actvar)
			(not(activityinprogress ?actvar ?crew1 ?loc))
			(not(activityinprogress ?actvar ?crew2 ?loc))
			(not(activityinprogress ?actvar ?crew3 ?loc))
			(not(activitycompleted  ?actvar ?crew1 ))
			(not(activitycompleted  ?actvar ?crew2 ))
			(not(activitycompleted  ?actvar ?crew3 ))
			(not(busycrewmember ?crew1))
			(not(busycrewmember ?crew2))
			(not(busycrewmember ?crew3))	
			(not(blockedlocation ?loc))
			(currentlevel ?levelvar ?crew1)
			(currentlevel ?levelvar ?crew2)
			(currentlevel ?levelvar ?crew3)	
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(activityinprogress ?actvar ?crew1 ?loc)
		(activityinprogress ?actvar ?crew2 ?loc)
		(activityinprogress ?actvar ?crew3 ?loc)
		(busycrewmember ?crew1)
		(busycrewmember ?crew2)
		(busycrewmember ?crew3)	
		(blockedlocation ?loc))

)

(:action CompletingActivityWiththreecrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?crew2 - crew ?crew3 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(threecrewmemberforexperiments ?actvar )
			(activityinprogress ?actvar ?crew1 ?loc)
			(activityinprogress ?actvar ?crew2 ?loc)
			(activityinprogress ?actvar ?crew3 ?loc)
			(not(activitycompleted  ?actvar ?crew1 ))
			(not(activitycompleted  ?actvar ?crew2 ))
			(not(activitycompleted  ?actvar ?crew3 ))
			(busycrewmember ?crew1)
			(busycrewmember ?crew2)
			(busycrewmember ?crew3)	
			(blockedlocation ?loc)
			(currentlevel ?levelvar ?crew1)
			(currentlevel ?levelvar ?crew2)
			(currentlevel ?levelvar ?crew3)	
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(activitycompleted ?actvar ?crew1 )
		(activitycompleted ?actvar ?crew2 )
		(activitycompleted ?actvar ?crew3 )
		(not(activityinprogress ?actvar ?crew1 ?loc))
		(not(activityinprogress ?actvar ?crew2 ?loc))
		(not(activityinprogress ?actvar ?crew3 ?loc))
		(changelevel ?crew1)
		(changelevel ?crew2)
		(changelevel ?crew3)
		(not(busycrewmember ?crew1))
		(not(busycrewmember ?crew2))
		(not(busycrewmember ?crew3))	
		(not(blockedlocation ?loc)))

)


(:action StartingActivitywithfourcrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?crew2 - crew ?crew3 - crew ?crew4 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(fourcrewmemberforexperiments ?actvar)
			(not(activityinprogress ?actvar ?crew1 ?loc))
			(not(activityinprogress ?actvar ?crew2 ?loc))
			(not(activityinprogress ?actvar ?crew3 ?loc))
			(not(activityinprogress ?actvar ?crew4 ?loc))
			(not(activitycompleted  ?actvar ?crew1 ))
			(not(activitycompleted  ?actvar ?crew2 ))
			(not(activitycompleted  ?actvar ?crew3 ))
			(not(activitycompleted  ?actvar ?crew4 ))
			(not(busycrewmember ?crew1))
			(not(busycrewmember ?crew2))
			(not(busycrewmember ?crew3))
			(not(busycrewmember ?crew4))	
			(not(blockedlocation ?loc))
			(currentlevel ?levelvar ?crew1)
			(currentlevel ?levelvar ?crew2)
			(currentlevel ?levelvar ?crew3)
			(currentlevel ?levelvar ?crew4)	
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(activityinprogress ?actvar ?crew1 ?loc)
		(activityinprogress ?actvar ?crew2 ?loc)
		(activityinprogress ?actvar ?crew3 ?loc)
		(activityinprogress ?actvar ?crew4 ?loc)
		(busycrewmember ?crew1)
		(busycrewmember ?crew2)
		(busycrewmember ?crew3)
		(busycrewmember ?crew4)	
		(blockedlocation ?loc))

)

(:action CompletingActivityWithfourcrewmember 
	:parameters(?levelvar - levels  ?actvar - activity ?crew1 - crew ?crew2 - crew ?crew3 - crew ?crew4 - crew ?loc - Location)
	:precondition(and
			(not(changelevel ?crew1))
			(fourcrewmemberforexperiments ?actvar )
			(activityinprogress ?actvar ?crew1 ?loc)
			(activityinprogress ?actvar ?crew2 ?loc)
			(activityinprogress ?actvar ?crew3 ?loc)
			(activityinprogress ?actvar ?crew4 ?loc)
			(not(activitycompleted  ?actvar ?crew1 ))
			(not(activitycompleted  ?actvar ?crew2 ))
			(not(activitycompleted  ?actvar ?crew3 ))
			(not(activitycompleted  ?actvar ?crew4 ))
			(busycrewmember ?crew1)
			(busycrewmember ?crew2)
			(busycrewmember ?crew3)
			(busycrewmember ?crew4)	
			(blockedlocation ?loc)
			(currentlevel ?levelvar ?crew1)
			(currentlevel ?levelvar ?crew2)
			(currentlevel ?levelvar ?crew3)	
			(currentlevel ?levelvar ?crew4)	
			(levelsforactivity ?levelvar ?actvar)
			)
	:effect(and
		(activitycompleted ?actvar ?crew1 )
		(activitycompleted ?actvar ?crew2 )
		(activitycompleted ?actvar ?crew3 )
		(activitycompleted ?actvar ?crew4 )
		(not(activityinprogress ?actvar ?crew1 ?loc))
		(not(activityinprogress ?actvar ?crew2 ?loc))
		(not(activityinprogress ?actvar ?crew3 ?loc))
		(not(activityinprogress ?actvar ?crew4 ?loc))
		(not(busycrewmember ?crew1))
		(not(busycrewmember ?crew2))
		(not(busycrewmember ?crew3))
		(not(busycrewmember ?crew4))	
		(not(blockedlocation ?loc))
		(changelevel ?crew1)
		(changelevel ?crew2)
		(changelevel ?crew3)
		(changelevel ?crew4))

)

)




 
