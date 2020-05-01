#lang racket
(define (pay hours rate)
  (if (> hours 40)
      (+ (* 40 rate) (* rate (* 1.5 (- hours 40))))
      (* hours rate)))

(pay 20 10)

(pay 42 10)