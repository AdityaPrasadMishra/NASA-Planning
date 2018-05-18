(define (problem Nasa_basic_model_prob01)
(:domain Nasa_basic_model)

(:requirements :fluents :durative-actions :typing :negative-preconditions :disjunctive-preconditions :time :duration-inequalities  :timed-initial-literals :equality :existential-preconditions :quantified-preconditions :conditional-effects )

(:objects
        a b c d - crew_members
        work exercise sleep nothing breakfast lunch dinner - activity
        locA locB locC locD locE locF locG - location
        day0 day1 day2 - days
)

(:init	
   (=(number_of_crew_members)4)
   (=(number_of_crew_members_with_task_complete)0)
   (=(total_time_for_activity work day1)1440)
   (=(total_time_for_activity exercise day1)360)
   (=(total_time_for_activity sleep day1)1440)
   (=(total_time_for_activity nothing day1)630)
   (=(total_time_for_activity breakfast day1)90)
   (=(total_time_for_activity lunch day1)180)
   (=(total_time_for_activity dinner day1)180) 

   (=(total_time_for_activity work day2)1440)
   (=(total_time_for_activity exercise day2)360)
   (=(total_time_for_activity sleep day2)1440)
   (=(total_time_for_activity nothing day2)630)
   (=(total_time_for_activity breakfast day2)90)
   (=(total_time_for_activity lunch day2)180)
   (=(total_time_for_activity dinner day2)180)

   (=(total_time_for_activity_per_person work day1)480)
   (=(total_time_for_activity_per_person exercise day1)120)
   (=(total_time_for_activity_per_person sleep day1)480)
   (=(total_time_for_activity_per_person nothing day1)210)
   (=(total_time_for_activity_per_person breakfast day1)30)
   (=(total_time_for_activity_per_person lunch day1)60)
   (=(total_time_for_activity_per_person dinner day1)60)

   (=(total_time_for_activity_per_person work day2)480)
   (=(total_time_for_activity_per_person exercise day2)120)
   (=(total_time_for_activity_per_person sleep day2)480)
   (=(total_time_for_activity_per_person nothing day2)210)
   (=(total_time_for_activity_per_person breakfast day2)30)
   (=(total_time_for_activity_per_person lunch day2)60)
   (=(total_time_for_activity_per_person dinner day2)60)

   (=(rem_time_today a)0)
   (=(rem_time_today b)0)
   (=(rem_time_today c)0)
   (=(rem_time_today d)0)
   
   (=(time_spent_today a)0)
   (=(time_spent_today b)0)
   (=(time_spent_today c)0)
   (=(time_spent_today d)0)

   (in_order day0 day1)

   (in_order day1 day2)
    
   (complete_day day0)	
	
   (create_schedule_for_member a day1)
   (create_schedule_for_member b day1)
   (create_schedule_for_member c day1)
   (create_schedule_for_member d day1)

   (create_schedule_for_member a day2)
   (create_schedule_for_member b day2)
   (create_schedule_for_member c day2)
   (create_schedule_for_member d day2)   


   (not(day_in_progress day1))
  
   (not(day_in_progress day2))
  
   (not(complete_day day1))

   (not(complete_day day2))

)

(:goal (and
	(complete_day day1)
	(complete_day day2)))

)
)
