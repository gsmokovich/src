%Write a set of rules that determines the average of a list of values
% on a list. You may assume that the list only contain numerical data.
%For example:
%?- average([3,14,15,92,6], Av).
%Av = 26.


% write a set of clauses that will compute the average of the elements of a list
% name of clause: average
% arg1: list of numerical values
% arg2: average of list.
% example:
%    average([3,14,15,9,26], 13.4).
%    true.
%

%%%% ADD YOUR CODE BELOW THIS LINE

% arg1:defining a list to find the sum
list([X], X).

% agr2: Adding head of list to the tail for every item. 
sum([H|T], S) :-
    sum(T, X),
    S is H + X. 
 

% Calculate average
average(list, A) :-
    (
    	% length of the list
    	length(list, Length),
    	A is sum(list, S) / length(list, X)
    ).



%%%% ADD YOUR CODE ABOVE THIS LINE

main() :-
    average([3,14,15,9,26], X),
    average([1,2,3,4,5], Y),
    average([-1, -2, 3, 2, 1, -3], Z),
    writeln(X),
    writeln(Y),
    writeln(Z).
    