;;From Wikapedia:
;; n computer programming, CAR (car) /kɑːr/ (About this soundlisten) 
;; and CDR (cdr) (/ˈkʌdər/ (About this soundlisten) or /ˈkʊdər/ 
;; (About this soundlisten)) are primitive operations on cons cells 
;; (or "non-atomic S-expressions") introduced in the Lisp programming language. 
;; A cons cell is composed of two pointers; the car operation extracts the first pointer, 
;; and the cdr operation extracts the second.

;; Thus, the expression 
;; (car (cons x y)) evaluates to x,
;; and (cdr (cons x y)) evaluates to y.

;;two-way switch 

;;interleave: list1 list2 --> list
;;interleaves the element of two lists

;;Algorithm
(define (interleave a b)
        (if (= (length a) 1)
            (list (car a) (car b))
            (cons (car a) (cons (car b) (interleave (cdr a) (cdr b)))
            )
        )  
)

;;input (a b c d e) and ( 1 2 3 4 5) --> two lists
(display (interleave '(a b c d e) '(1 2 3 4 5)))
;;output (a 1 b 2 c 3 d 4 e 5)

(exit)