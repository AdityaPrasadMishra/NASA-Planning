(define (problem Nasa_basic_model_prob01)
(:domain Nasa_basic_model)

;(:requirements :fluents :typing :negative-preconditions :disjunctive-preconditions :equality :existential-preconditions :quantified-preconditions :conditional-effects )

(:objects
        a b c d - crew_members
        work exercise sleep nothing breakfast lunch dinner - activity
        locA locB locC locD locE locF locG - location
        day0 day1 day2 - days
)

(:init	
   (not(busy_crewmember a))
   (not(busy_crewmember b))
   (not(busy_crewmember c))
   (not(busy_crewmember d))
   
   (not(blocked_location locA))
   (not(blocked_location locB))
   (not(blocked_location locC))
   (not(blocked_location locD))
   (not(blocked_location locE)) 
   (not(blocked_location locF))
   (not(blocked_location locG))

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

   (in_order day0 day1)

   (in_order day1 day2)
    
   (complete_day day0)
   
   (can_start_activity a work)
   (can_start_activity b work)
   (can_start_activity c work)
   (can_start_activity d work)	

   (can_start_activity a exercise)
   (can_start_activity b exercise)
   (can_start_activity c exercise)
   (can_start_activity d exercise)

   (can_start_activity a sleep)
   (can_start_activity b sleep)
   (can_start_activity c sleep)
   (can_start_activity d sleep)

   (can_start_activity a nothing)
   (can_start_activity b nothing)
   (can_start_activity c nothing)
   (can_start_activity d nothing)

   (can_start_activity a breakfast)
   (can_start_activity b breakfast)
   (can_start_activity c breakfast)
   (can_start_activity d breakfast)

   (can_start_activity a lunch)
   (can_start_activity b lunch)
   (can_start_activity c lunch)
   (can_start_activity d lunch)

   (can_start_activity a dinner)
   (can_start_activity b dinner)
   (can_start_activity c dinner)
   (can_start_activity d dinner)

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
   ;(=(rem_time_today a)7)
   ;(schedule_in_progress a)
   ;(busy_crewmember a)
   ;(performing_activity work a locA)
   ;(blocked_location locA)

)

(:goal (and
(complete_day day1)(complete_day day2)
        ;(=(rem_time_today a)0)      
	;(complete_day day1)
	;(complete_day day2)
   	;(not(day_in_progress day1))  
   	;(not(day_in_progress day2))
)
)

)

