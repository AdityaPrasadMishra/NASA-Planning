(define (problem Nasa_strips_activity_model_prob01)
(:domain Nasa_strips_activity_model)

;(:requirements :fluents :typing :negative-preconditions :disjunctive-preconditions :equality :existential-preconditions :quantified-preconditions :conditional-effects )

(:objects
        a b c d - crew_members
        first_task work exercise sleep breakfast last_task - activity
        locA locB locC locD locE locF - location
        day0 day1 day2 - days
)

(:init	
	(in_order day0 day1)
	(in_order day1 day2)
	(complete_day day0)
	(firstcrewmember a)
	(firsttask first_task)
	(lastcrewmember d)
	(lasttask last_task)
	(inordertasks first_task breakfast)
	(inordertasks breakfast work)
	(inordertasks work exercise)
	(inordertasks exercise sleep)	
	(inordertasks sleep last_task)
	(inordercrewmember a b)
	(inordercrewmember b c)
	(inordercrewmember c d)
	(revordercrewmember d c)
	(revordercrewmember c b)
	(revordercrewmember b a)


)

(:goal (and
	(complete_day day1)
	(complete_day day2)
)
)

)

