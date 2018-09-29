(define (problem Nasa_strips_advanced_model_prob01)
(:domain Nasa_strips_advanced_model_withSoftConstraints)
(:objects
        a b c d - crew
        breakfast normalwork1 normalwork2 dinner meditation sleep lunch loading unloading t1exercise t2exercise mutationexp xrayexp communication xrayexp2 communication2 takephoto repairshuttle - activity
        locA locB locC locD locE locF - location
)
(:init
    (=(rem_time_today_forall)48)
    (=(rem_time_today a)12)
    (=(rem_time_today b)12)
    (=(rem_time_today c)12)
    (=(rem_time_today d)12)

    (=(number_of_crew_members breakfast)0)
    (=(number_of_crew_members normalwork1)0)
    (=(number_of_crew_members normalwork2)0)
    (=(number_of_crew_members dinner)0)
    (=(number_of_crew_members meditation)0)
    (=(number_of_crew_members sleep)0)
    (=(number_of_crew_members lunch)0)
    (=(number_of_crew_members loading)0)
    (=(number_of_crew_members unloading)0)
    (=(number_of_crew_members t1exercise)0)
    (=(number_of_crew_members t2exercise)0)
    (=(number_of_crew_members takephoto)0)
    (=(number_of_crew_members repairshuttle)0)
    (=(number_of_crew_members xrayexp)0)
    (=(number_of_crew_members communication)0)
    (=(number_of_crew_members xrayexp2)0)
    (=(number_of_crew_members communication2)0)
    (latch_open)
    (=(max_crewmember_for_activity breakfast)4)
    (=(max_crewmember_for_activity normalwork1)4)
    (=(max_crewmember_for_activity normalwork2)4)
    (=(max_crewmember_for_activity dinner)4)
    (=(max_crewmember_for_activity meditation)4)
    (=(max_crewmember_for_activity sleep)4)
    (=(max_crewmember_for_activity lunch)4)
    (=(max_crewmember_for_activity loading)4)
    (=(max_crewmember_for_activity unloading)4)
    (=(max_crewmember_for_activity t1exercise)4)
    (=(max_crewmember_for_activity t2exercise)4)
    (=(max_crewmember_for_activity takephoto)4)
    (=(max_crewmember_for_activity repairshuttle)4)
    (=(max_crewmember_for_activity xrayexp)3)
    (=(max_crewmember_for_activity communication)3)
    (=(max_crewmember_for_activity xrayexp2)1)
    (=(max_crewmember_for_activity communication2)1)


    (typeofactivitynormal breakfast)
    (typeofactivitynormal normalwork1)
    (typeofactivitynormal normalwork2)
    (typeofactivitynormal dinner)
    (typeofactivitynormal meditation)
    (typeofactivitynormal sleep)
    (typeofactivitynormal lunch)
    (typeofactivitynormal loading)
    (typeofactivitynormal unloading)
    (typeofactivitynormal t1exercise)
    (typeofactivitynormal t2exercise)
    (typeofactivitynormal takephoto)
    (typeofactivitynormal repairshuttle)
    (typeofactivitynormal xrayexp)
    (typeofactivitytype0 communication)
    (typeofactivitynormal xrayexp2)
    (typeofactivitytype0 communication2)
    
    (currentcrewmember a)
    (inordercrew a b)
    (inordercrew b c)
    (inordercrew c d)
    (inordercrew d a)

)


(:goal(and(daycompleted)
(activitycompleted communication2)
)

)

)
