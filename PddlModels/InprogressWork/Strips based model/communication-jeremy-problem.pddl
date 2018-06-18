(define (problem Nasa_strips_advanced_model_prob01)
(:domain Nasa_strips_advanced_model)


(:objects
        a b c d - crew
	zerotime postsleep latemorning afternoon evening presleep - times
        breakfast normalwork1 normalwork2 dinner meditation sleep lunch loading unloading t1exercise t2exercise mutationexp xrayexp communication takephoto repairshuttle - activity
        locA locB locC locD locE locF - location
	l1 l2 l3 l4 l5 l6 l7 l8 l9 l10 - levels
	food experiment communicationact loadunload - activitytype
)

(:init	


	(inorderlevel l1 l2)
	(inorderlevel l2 l3)
	(inorderlevel l3 l4)
	(inorderlevel l4 l5)
	(inorderlevel l5 l6)
	(inorderlevel l6 l7)
	(inorderlevel l7 l8)
	(inorderlevel l8 l9)
	(inorderlevel l9 l10)
	
	(timecompleted zerotime)
	(inordertime zerotime postsleep)
	(inordertime postsleep latemorning)
	(inordertime latemorning afternoon)
	(inordertime afternoon evening)
	(inordertime evening presleep)

	(lasttime presleep)


	(currentlevel l1 a)
	(currentlevel l1 b)
	(currentlevel l1 c)
	(currentlevel l1 d)

	(firstcrewmember a)
	(inordercrew a b)
	(inordercrew b c)
	(inordercrew c d)
	(lastcrewmember d)

	(onecrewmemberforexperiments breakfast)
	(onecrewmemberforexperiments lunch)
	(onecrewmemberforexperiments dinner)
	(onecrewmemberforexperiments normalwork1)
	(onecrewmemberforexperiments normalwork2)
	(onecrewmemberforexperiments sleep)
	(onecrewmemberforexperiments meditation)
	(onecrewmemberforexperiments takephoto)
	(onecrewmemberforexperiments mutationexp)
	(onecrewmemberforexperiments t1exercise)
	(onecrewmemberforexperiments t2exercise)
	(onecrewmemberforexperiments xrayexp)
	(twocrewmemberforexperiments loading)

	(twocrewmemberforexperiments takephoto)
	(twocrewmemberforexperiments t1exercise)
	(twocrewmemberforexperiments t2exercise)

	(threecrewmemberforexperiments unloading)
	(threecrewmemberforexperiments repairshuttle)
	(threecrewmemberforexperiments communication)

	(fourcrewmemberforexperiments breakfast)
	(fourcrewmemberforexperiments lunch)
	(fourcrewmemberforexperiments dinner)
	(fourcrewmemberforexperiments repairshuttle)

	(levelsforTime l3 postsleep )
	(levelsforTime l5 latemorning)
	(levelsforTime l7 afternoon )
	(levelsforTime l9 evening )
	(levelsforTime l10 presleep )

	(levelsforactivity l1 breakfast)
	(levelsforactivity l2 meditation)
	(levelsforactivity l3 normalwork1)
	(levelsforactivity l4 normalwork2)
	(levelsforactivity l5 lunch)
	(levelsforactivity l4 mutationexp)
	(levelsforactivity l6 xrayexp)
	(levelsforactivity l6 loading)
	(levelsforactivity l7 unloading)
	(levelsforactivity l8 t1exercise)
	(levelsforactivity l9 dinner)
	(levelsforactivity l10 sleep)
	(levelsforactivity l1 t1exercise)
	(levelsforactivity l5 t2exercise)
	(levelsforactivity l6 communication)
	(levelsforactivity l4 takephoto)
	(levelsforactivity l8 repairshuttle)
	(levelsforactivity l2 communication)
)

(:goal (and
	(timecompleted postsleep)
	(timecompleted latemorning)
	(timecompleted afternoon)
	(timecompleted evening)
    	(timecompleted presleep)
	(daycompleted)
)
)

)

