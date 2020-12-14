(display (sqrt
             (+
                 (* (- 3 5) (- 3 5))
                 (* (- 1 7) (- 1 7))
                 
            )
        )
)

//define distance formula
(define ( dis x1 x2 y1 y1)
     (sqrt
        (+
             (* (- x2 x1) (- x2 x1))
             (* (- y2 y1) (- y2 y1))
                 
         )
    )
)

//use the newly defined distance formula 
//to calculate the distance between (3,1) and  ( 1,7)
(dis 3 1 5 7)