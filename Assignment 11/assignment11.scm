
;;Exercise 2.2.1 --- Convert the following arithmetric expression
;;                   into Scheme expressions and evaluate them.

;;a. 1.2 * (2 - 1/3) + -8.7
(display (+ -8.7(* 1.2 (- 2 (/ 1 3)))))
(newline)

;;b. (2/3 + 4/9) / (5/11 - 4/3)
(display (/ (+ (/ 2 3) (/ 4 9)) (- (/ 5 11) (/ 4 3))))
(newline)

;;c. 1 + 1 / (2 + 1 / (1 + 1/2)))
(display (+ 1 (/ 1 (+ 2 (/ 1 (+ 1 (/ 1 2)))))))
(newline)

;;d. 1 * -2 * 3 * -4 * 5 * -6 * 7
(display (* 1 (* -2 (* 3 (* -4 (* 5 (* -6 (* 7))))))))
(newline)


;;Exercise 2.2.3 --- Determine the values of the following 
;;                   expressions. Using your Scheme system 
;;                   to verify your answers.

;;a. (cons 'car 'cdr)
(display (cons 'car 'cdr))
(newline)

;;b. (list 'this '(is silly))
(display (list 'this '(is silly)))
(newline)

;;c. (cons 'is '(this silly?))
(display (cons 'is '(this silly?)))
(newline)

;;d. (quote (+ 2 3))
(display (quote (+ 2 3)))
(newline)

;;e. (cons '+ '(2 3))
(display (cons '+ '(2 3)))
(newline)

;;f. (car '(+ 2 3))
(display (car '(+ 2 3)))
(newline)

;;g. (cdr '(+ 2 3))
(display (cdr '(+ 2 3)))
(newline)

;;h. cons
(display cons)
(newline)

;;i. (quote cons)
(display (quote cons))
(newline)

;;j. (quote (quote cons))
(display (quote (quote cons)))
(newline)

;;k. (car (quote (quote cons)))
(display (car (quote (quote cons))))
(newline)

;;l. (+ 2 3)
(display (+ 2 3))
(newline)

;;m. (+ '2 '3)
(display (+ '2 '3))
(newline)

;;n. (+ (car '(2 3)) (car (cdr '(2 3))))
(display (+ (car '(2 3)) (car (cdr '(2 3)))))
(newline)

;;o. ((car (list + - * /)) 2 3)
(display ((car (list + - * /)) 2 3))
(newline)


;;Exercise 2.2.4

;;(car (car '((a b)(c d)))) yields 
;;a. Determine which compositions 
;;of car and cdr applied to ((a,b) (c d)) 
;;yield b, c, and d.


;;To yield b
(display (car (cdr (car '((a b)(c d))))))
(newline)

;;To yield c
(display (car (car (cdr '((a b)(c d))))))
(newline)

;;To yield d
(display (cdr (car (cdr '((a b)(c d))))))
(newline)

(exit)