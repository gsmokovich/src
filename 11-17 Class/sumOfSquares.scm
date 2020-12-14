;;function in function

;;x^2 + y^2
(define (sum-of-squares x y) (sum (square x) (square y)))

(define (sum-of-squares x y)
        (define (square a) (* a a))
        (define (sum b c) (+ b c))
        (sum (square x) (square y)))

;;let x = 1 and y = 3 so output is 10
(display(sum-of-squares 1 3))

(exit)