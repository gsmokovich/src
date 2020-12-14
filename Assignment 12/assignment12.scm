;;lang scheme
;; define one or more expressions that can be used to
;; count the number of items on a list without using 
;; the length operator

;; insert work below
(define (count-list alist)
    (if (null? alist) 0
    (+ 1 (count-list (cdr alist))))
)

;; insert work above

(display (count-list '(3 14 15 9 62 64 37)))