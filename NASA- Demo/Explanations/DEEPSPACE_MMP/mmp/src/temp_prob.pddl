(define (problem BLOCKS-4-2)
(:domain BLOCKS)
(:objects B D C A - block)
(:init
    (handempty)
(clear b)
(ontable d)
(on b c)
(on c a)
(on a d)
)
(:goal 
(and 
    (on a b)
(on c a)
(on d c)
)
)
)
