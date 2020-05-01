#lang racket

(define (append list1 list2)
  (cond
    ((null? list1) list2)
    (else (cons (car list1)
           (append (cdr list1) list2)))
    ))
                
(append '(a b c) '(d e f))