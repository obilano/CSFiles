#lang racket

(define (count lst)
  (cond
    ((null? lst) 0)
    ((+ 1 (count (cdr lst))))))

(count '(a b c d))
                 
