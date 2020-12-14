;;Write a program in Scheme that will compute
;; the population standard deviation of a list of numbers.
;; Standard deviation is calculated by computing
;; the square root of the sum of the squares of the
;; difference between each number and the average, 
;; divided by the number of numbers on the list. 

;;Hint: write two separate expressions:
;; one to compute the sum of the squares of the
;; difference between each number and the population average
;; and one to use that number to calculate the standard deviation.
;; Your first program can use the map function.

;;calculate population standard deviation
(define (standard-deviation alist)
    ;;define sum of squares
    (define (sum-of-squares x y)
            (define (square a) (* a a))
            (define (sum b c) (- b c))
            (sum (square x) (square y))
    )
    ;;count how many items are in the list
    (define (count-list alist)
        (if (null? alist) 0
            (+ 1 (count-list (cdr alist )))
        )
    )
    ;;sum of all of the items in the list
    (define (sum alist)
        (if (null? alist) 0
            (+ (car alist) (sum (cdr alist)))
        )
    )
    ;;define average
    (define (average alist)
        ;;average 
        (/ (sum alist) (count-list alist))
    )
    ;;define square difference 
    (define (square-difference alist average)
        (if (null? alist) 0
        (+ (sum-of-squares (car alist) average) 
        (square-difference (cdr alist) average))
        )
    )
    ;;population standard deviation = sqrt((sum-of-squares (car alist) (average)) / count-list)
    (sqrt(* (/ 1 (count-list alist)) (square-difference alist (average alist))))
)

;input: (3 14 15 9 62 64 37) 
;output: 23.527665001188776

(display (standard-deviation '(3 14 15 9 62 64 37)))

(newline)

(exit)