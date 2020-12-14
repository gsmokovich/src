; Resistors are common electronic components used to regulate the current in a circuit. 
; Resistance is expressed in Ohms; resistors are color coded using four colored strips. 
; The first three strips represent the base value of the resistor and the fourth strip
; represents the multiplier. The table below holds the translation key.

; Color	Value
; Black	0
; Brown	1
; Red	2
; Orange	3
; Yellow	4
; Green	5
; Blue	6
; Violet	7
; Grey	8
; White	9

; For example, a resistor with the first three bands red-yellow-black
; will have a base value of 240. The fourth band is red, which means
; that the multiplier is 10^2=100.

; Write a program that translates a resistor's color-coding to a value.

; For example:

; (resistance '(red yellow black red)) 

; ;Value: 24000

;define colors with respected value
(define (color c)
    (cond 
       ((string=? (car c) "black") "0")
       ((string=? (car c) "brown") "1")
       ((string=? (car c) "red") "2")
       ((string=? (car c) "orange") "3")
       ((string=? (car c) "yellow") "4")
       ((string=? (car c) "green") "5")
       ((string=? (car c) "blue") "6")
       ((string=? (car c) "violet") "7")
       ((string=? (car c) "grey") "8")
       ((string=? (car c) "white") "9")
    )
)

;Return first three numbers of the combined form 
;such that red yellow black red -> 240
(define (getFirstThree list)
    (string->number
        (
            let ((x "")) (string-append x 
                            (color (car (firstThreeReverse list)))
                            (color (car (cdr (firstThreeReverse list))))
                            (color (car (cdr (cdr (firstThreeReverse list)))))
                        )
        )
    )
)

;Reverse the list of numbers such that 2402 -> 2042
;This was taken from https://www.scheme.com/tspl3/objects.html#./objects:s46 to reverse the list.
;This was provided to us during the 11/17 class
(define reverse
    (lambda (ls)
        (let rev ((ls ls) (new '()))
            (if (null? ls)
                new
                (rev (cdr ls) (cons (car ls) new))
            )
        )
    )
)

;Returns the first three numbers of the list 
(define (firstThreeReverse list)
    (reverse
       ;cdr -> retrun all but first item in the list
        (cdr (reverse list))
    )

)

;Returns the last number of the list
(define(lastNumber list)
    (string->number 
        (let ((x "")) (string-append x (color (car (reverse list))))
        )
    )
)

;Final computation 
(define (resistance list)
    (* (getFirstThree list) (expt 10 (lastNumber list)))
)

;display with example above ^ 
(display (resistance '(("red") ("yellow") ("black") ("red"))))
(newline)