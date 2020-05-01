#lang racket

(define (bad a b c)
  (define m (max a b c))
  (define d (- (+ a b c) m))
  (> m d))
    
(define (heron a b c)
  (define s (/ (+ a b c) 2))
  (if (bad a b c)
      "bad"
  (sqrt(* s (- s a) (- s b) (- s c)))))

(heron 7 6 5)