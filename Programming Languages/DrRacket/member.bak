#lang racket

(define (member atm a_list)
  (cond
    ((null? a_list) #F)
    ((eq? atm (car a_list)) #T)
    (else (member atm (cdr a_list)))))

(member 'c '(a b x d))
