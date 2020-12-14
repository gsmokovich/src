;;input: List[4] = {7, 8, 15, 14}

;;output: Length = 4

(define (count-list alist)
    (if (null? alist) 0
    (+ 1 (count-list (cdr alist))))
)

(display (count-list '(7 8 15 14)))