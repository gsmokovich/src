;;updated program of distance.scm

(define (dis x1 y1 x2 y2)
        (sqrt 
        (+ (* (- x2 x1) (- x2 x1)) (* (- y2 y1) (- y2 y1)))))

;;calculate for the points (3, 1) and (5, 7)
(display (dis 3 1 5 7))
(exit)