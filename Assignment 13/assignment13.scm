;;lang scheme

;; define one or more expressions that can be used to
;; computer the average of a list

;; insert work below

;;compute average 
(define (average alist)
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
    ;;average 
    (/ (sum alist) (count-list alist))
)

;; insert work above

(display (average '(3 14 15 9 62 64 37)))