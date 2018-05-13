(define (problem Nasa_basic_model_prob01)
(:domain Nasa_basic_model)

(:requirements :strips :fluents :durative-actions :typing :negative-preconditions :disjunctive-preconditions :equality :exist
ential-preconditions :quantified-preconditions :conditional-effects :continous-effects :time :duration-inequalities  :timed-i
nitial-literals)

(:objects
        a b c d - crew_members
        work exercise sleep nothing breakfast lunch dinner - activity
        locA locB locC locD locE locF locG - location
        day1 day2 - days
)

(:init	
   :(=(day_in_progress)0)
   :(=(total_time_for_activity work day1)1440)
   :(=(total_time_for_activity exercise day1)360)
   :(=(total_time_for_activity sleep day1)1440)
   :(=(total_time_for_activity nothing day1)630)
   :(=(total_time_for_activity breakfast day1)90)
   :(=(total_time_for_activity lunch day1)180)
   :(=(total_time_for_activity dinner day1)180) 

   :(=(total_time_for_activity work day2)1440)
   :(=(total_time_for_activity exercise day2)360)
   :(=(total_time_for_activity sleep day2)1440)
   :(=(total_time_for_activity nothing day2)630)
   :(=(total_time_for_activity breakfast day2)90)
   :(=(total_time_for_activity lunch day2)180)
   :(=(total_time_for_activity dinner day2)180)

   :(=(total_time_for_activity_per_person work day1)480)
   :(=(total_time_for_activity_per_person exercise day1)120)
   :(=(total_time_for_activity_per_person sleep day1)480)
   :(=(total_time_for_activity_per_person nothing day1)210)
   :(=(total_time_for_activity_per_person breakfast day1)30)
   :(=(total_time_for_activity_per_person lunch day1)60)
   :(=(total_time_for_activity_per_person dinner day1)60)

   :(=(total_time_for_activity_per_person work day2)480)
   :(=(total_time_for_activity_per_person exercise day2)120)
   :(=(total_time_for_activity_per_person sleep day2)480)
   :(=(total_time_for_activity_per_person nothing day2)210)
   :(=(total_time_for_activity_per_person breakfast day2)30)
   :(=(total_time_for_activity_per_person lunch day2)60)
   :(=(total_time_for_activity_per_person dinner day2)60)

   (not(complete_day day1))

   (not(complete_day day2))

   (first_day day1)

   (second_day day2)
)

(:goal (and
	(complete_day day1)
	(complete_day day2)))

)
