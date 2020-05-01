;Programmer:	Oberon Ilano
;Class:		CS 410w
;Assignment:	15	
;Due date:	March 31, 2020
;Description:	Returns a list identical to its parameter
;               list except the given atom that has been deleted.

#lang racket

(define (remove atm lst)
  (cond
   (not (null? lst) (remove* (list atm) lst))
  (else (remove atm (cdr lst)))))

(remove '3 '(5 3 4 3 99 88 3))