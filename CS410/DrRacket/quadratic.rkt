#lang racket

(define (numRoots a b c)
  (define d (- (* b b) (* 4 a c)))
  (cond
    ((zero? d) 1)
    ((> d 0) 2)
    (else 0))
  )

(define (quadratic_roots a b c)
  (define n (numRoots a b c))
  (define
    root_part_over_2a
    (/ (sqrt (- (* b b) (* 4 a c)))(* 2 a)))
  (define minus_b_over_2a (/ (- 0 b) (* 2 a)))
(cond
  ((= n 2)
   (list (+ minus_b_over_2a root_part_over_2a))
   (- minus_b_over_2a root_part_over_2a))
   ((= n 1)
    minus_b_over_2a)
   ((= n 0) "No real roots")))

(quadratic_roots 1 -1 -6)
(quadratic_roots 2 3 5)
(quadratic_roots 1 6 9)