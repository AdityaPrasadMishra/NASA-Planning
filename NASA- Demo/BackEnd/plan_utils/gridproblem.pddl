(define (problem GRID_DOMAIN_FOR_HAAI_prob01)
(:domain GRID_DOMAIN_FOR_HAAI)
(:objects
a b c d e f g h i - location
)
(:init
    (current a)
    (right a b)
    (right b c)
    (right d e)
    (right e f)
    (right g h)
    (right h i)
    (left c b)
    (left b a)
    (left f e)
    (left e d)
    (left i h)
    (left h g)
    (top d a)
    (top g d)
    (top e b)
    (top h e)
    (top f c)
    (top i f)
    (bottom a d)
    (bottom d g)
    (bottom b e)
    (bottom e h)
    (bottom c f)
    (bottom f i)
    (box c)
    (unloadbox f)
)
;;a b c
;;d e f
;;g h i
(:goal
(and(unfetched_box)(observed d))
)
)