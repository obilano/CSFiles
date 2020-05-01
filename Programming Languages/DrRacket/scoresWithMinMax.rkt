;Programmer:	Oberon Ilano
;Class:		CS 410w
;Assignment:	15	
;Due date:	March 31, 2020
;Description:   Calculate the average of the scores after dropping
;               the highest and lowest scores.

#lang racket



;drop the lowest and highest from the list
(define (dropLowHigh lst)
  (define min (lowScore lst))
  (define max (highScore lst))
  (cond
   (not (null? lst) (remove* (list min max) lst))
  (else (dropLowHigh (cdr lst)))))

;calculate the avg after dropping the highest and lowest
(define (avg lst)
  (define afterDrop (dropLowHigh lst))
  ( / (apply + afterDrop) (length afterDrop)))
 
; test high, low, and drop
;(highScore '(7 6 3 10 9))
;(lowScore '(7 6 3 10 9))
;(dropLowHigh '(7 6 3 10 9))

(avg '(7 6 3 10 9))