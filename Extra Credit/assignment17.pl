% Write a set of rules that determines the sum of values on a list. You may assume that the list only contains numerical data.
% For example:

% ?- sum([3,14,15,92], Sum).
% Sum = 124 .

% define one or more clauses for "sum". The clause must add all elements
% on a list of values.
%
% The clause must take two arguments:
%    arg1 = a list containing numerical values
%    arg2 = the sum of the list
% example:
%    sum( [1,2,3,4], 10 ).
%    true.
% Define below here

% arg1:defining a list to find the sum
sum([X], X).

% agr2: Adding head of list to the tail for every item. 
sum([H|T], S) :-
    sum(T, X),
    S is H + X. 

% Define above here


% leave the main clause in place. This is used to evaluate 
% your work.
main() :-
    findall(X, sum([3,14,15,9,26], X), L),
    write(L).