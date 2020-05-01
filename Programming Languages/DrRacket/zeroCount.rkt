;Programmer:	Oberon Ilano
;Class:		CS 410w
;Assignment:	15	
;Due date:	March 31, 2020
;Description:	Count the number of 0s in the list.

#lang racket
(define (count lst)
     (cond
       ((null? lst) 0)
       ((eq? 0 (car lst))
       (+ 1 (count (cdr lst))))
       (else (count (cdr lst)))))

(count '(7 0 99 0 -8 44 0))