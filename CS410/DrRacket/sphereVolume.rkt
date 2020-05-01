;Programmer:	Oberon Ilano
;Class:		CS 410w
;Assignment:	15	
;Due date:	March 31, 2020
;Description:	Find the sphere volume with the given diameter.

#lang racket
(define (sphere_volume d)
  (* (/ 4 3) pi (/ (* d d d) 8)))

(sphere_volume 10.7)