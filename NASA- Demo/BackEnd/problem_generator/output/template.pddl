(define (problem masterplan) (:domain IPASS)

(:objects
zero one two three four five six seven eight nine ten - num
foundations systems applications - concentration
big_data ai cybersecurity - specialization
[PROFESSORS]
[COURSES]
)

(:init
(sem_quota zero)
(current_num zero)
(next_num zero one)
(next_num one two)
(next_num two three)
(next_num three four)
(next_num four five)
(next_num five six)
(next_num six seven)
(next_num seven eight)
(next_num eight nine)
(next_num nine ten)
(next_num ten ten)
[COURSE_BLOCK]
[PROFESSOR_BLOCK]
[DEFICIENCY_BLOCK]
[IS_RA_TA]
[IS_INTERNATIONAL]
)

(:goal (and
(defended)
)
)

)