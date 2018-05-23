(define (problem Nasa_basic_model_prob01)
(:domain Nasa_basic_model)

;(:requirements :fluents :typing :negative-preconditions :disjunctive-preconditions :equality :existential-preconditions :quantified-preconditions :conditional-effects )

(:objects
        a b c d - crew_members
        work exercise sleep nothing breakfast - activity
        locA - location
        day0 day1 day2 - days
)

(:init	
   (not(busy_crewmember a))
   (not(busy_crewmember b))
   (not(busy_crewmember c))
   (not(busy_crewmember d))
   
  (not(blocked_location locA))

   (=(number_of_crew_members)4)
   (=(number_of_crew_members_with_task_complete)0)

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

(:goal (and(complete_day day1)(complete_day day2)
)
)

)

