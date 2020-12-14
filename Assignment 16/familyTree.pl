% Uses swish to compile. 


% facts
male(george).
male(william).
male(harry).
male(charles).
male(philip).
male(edward).
male(andrew).
male(mark).
male(peter).
male(james).

female(charlotte).
female(kate).
female(diana).
female(elizabeth).
female(anne).
female(zara).
female(sarah).
female(eugenie).
female(beatrice).
female(sophie).
female(louise).

parent(elizabeth,charles).
parent(elizabeth,anne).
parent(elizabeth,andrew).
parent(elizabeth,edward).
parent(philip,charles).
parent(philip,anne).
parent(philip,andrew).
parent(philip,edward).

parent(diana,william).
parent(diana,harry).
parent(charles,william).
parent(charles,harry).

parent(anne,peter).
parent(anne,zara).
parent(mark,peter).
parent(mark,zara).

parent(andrew,beatrice).
parent(andrew,eugenie).
parent(sarah,beatrice).
parent(sarah,eugenie).

parent(edward,louise).
parent(edward,james).
parent(sophie,louise).
parent(sophie,james).

parent(kate,george).
parent(kate,charlotte).
parent(william,george).
parent(william,charlotte).



%Given the three basic propositions: 
%male(M), female(F), and parent(P,C), 
%and the associated facts in this database,
% write a ruleset that can calculate the 
%following familial relations:

%father(F, C)      % F is the father of a child C
father(F, C):-
    (
        male(F),
        parent(F, C)
    ).
% mother(M, C)      % M is the mother of a child C
mother(M, C):-
    (
        female(M),
        parent(M, C)
    ).
% son(S, P)         % S is the son of parent P
son(S, P):-
    (
        male(S),
        parent(P, S)
    ).
% daughter(D, P)    % D is the daughter of parent P
daughter(D, P):-
    (
        female(D),
        parent(P, D)
    ).
% sibling(A,B)      % A and B are siblings
sibling(A, B):-
	(
    	parent(Z, B),
        parent(Z, A)
    ). 
% grandparent(G, C) % G is a grandparent of C
grandparent(G, C):-
    ( 
    	parent(Z, C),
        parent(G, Z)
    ).
% grandfather(G, C) % G is a grandfather of C
grandfather(G, C):-
    ( 
    	male(G),
		grandparent(G, C)
    ).
% grandmother(G, C) % G is a grandmother of C
grandmother(G, C):-
    ( 
    	female(G),
		grandparent(G, C)	
    ).
% descendant(D, A)  % D is the descendant of A
descendant(D, A):-
    (   
    	grandparent(A, D)    
    ).
% ancestor(A, D)    % A is the ancestor of D
ancestor(A, D):-
    (   
    	grandparent(A, D)
    ).
% uncle(U, N)       % U is the uncle of N
uncle(U, N):-
    (  
    	male(U),
        parent(Z, N), 
    	sibling(Z, U), 
    	not(parent(U, N))
    ).
% aunt(A, N)        % A is the aunt of N
aunt(A, N):-
    (  
    	female(A),
        parent(Z, N), 
    	sibling(Z, A),
        not(parent(A, N))
    ).
% niece(N, A)       % N is the niece of A
niece(N, A):-
    (  
    	female(N),
        parent(Z, N),
        sibling(Z, A), 
    	not(parent(A, N))
    ).
% nephew(N, A)      % N is the nephew of A
nephew(N, A):-
    (  
    	male(N),
        parent(Z, N),
        sibling(Z, A), 
    	not(parent(A, N)) 
    ).
% cousin(A, B)      % A and B are cousins
cousin(A, B):-
    ( 
    	parent(Z, A),
        parent(X, B),
        sibling(Z, X), 
    	not(sibling(A, B)) 
    ).

%Use the knowledge-base to answer the following questions:

%1. Who are the grandchildren of Elizabeth, Queen of England
%   William, Harry, Peter, Zara, Beatrice, Eugeniem Louise, James

%2. Is Harry the uncle of Charlotte?
%   True

%3. Does Anne have any siblings?
%   Yes, Charles, Andrew, and Edward.

%4. Who are the nephews of Harry, Prince of Wales?
%   George

%5. Who is Eugenie's grandfather?
%   Philip

%6. Who are William's cousins?
%   Peter, Zara, Beatrice, Eugenien, Louise, James
