;Programmer:	Oberon Ilano
;Class:		CS 410w
;Assignment:	15	
;Due date:	March 31, 2020
;Description:   Calculate the average of the scores after dropping
;               the highest and lowest scores.

#lang racket

;find the highest value in the list
(define (highScore lst)
(cond
  ((null? lst) 0)
  ((null? (rest lst)) (first lst))
  (else
   (cond
      ((> (first lst) (highScore (rest lst))) (first lst))
      (else (highScore (rest lst)))))))

;find the lowest value in the list
(define (lowScore lst)
  (cond
    ((null? lst) 0)
    ((null? (rest lst)) (first lst))
    (else
     (cond
       ((< (first lst) (lowScore (rest lst))) (first lst))
       (else (lowScore (rest lst)))))))

;drop the lowest and highest from the list
(define (dropLowHigh lst)
  (define low (lowScore lst))
  (define high (highScore lst))
  (cond
   (not (null? lst) (remove* (list low high) lst))
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