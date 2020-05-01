#lang racket
(define (WeeklyPay hours rate)
(cond [(> hours 40)(+ (* (- hours 40) (* 1.5 rate)) (* 40 rate))]
  [(<= hours 40)(* rate hours)]))

(WeeklyPay 39 10)