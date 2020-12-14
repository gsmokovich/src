;;Multi-Switch Example

;;Write an expression that evaluates to the time of day,
;; based on the current time

(define (time-of-day hour)
    (cond
         ((< hour 6) 'night)
         ((< hour 12) 'morning)
         ((< hour 18) 'afternoon)
         (else 'evening)
    )
)

(display (time-of-day 13))

(newline)

(exit)