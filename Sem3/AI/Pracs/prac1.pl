parent(himadri, bob).
parent(vansh, rishabh).
parent(vansh, tanishka).
parent(rishabh, tisha).
parent(rishabh, vrinda).
parent(tisha, parth).
parent(tanishka,rahul).

male(rishabh).
male(vansh).
male(parth).
male(rahul).
female(tisha).
female(himadri).
female(tanishka).
female(vrinda).

grandfather(X,Z):-
    male(X),
        parent(X,Y),
            parent(Y,Z).

grandmother(X,Z):-
    female(X),
        parent(X,Y),
            parent(Y,Z).

father(X,Y):-
    male(X),
        parent(X,Y).

mother(X,Y):-
    female(X), 
        parent(X,Y).

sibling(X,Y):-
    parent(Z,X),
        parent(Z,Y).

brother(X,Y):-
    male(X),
        sibling(X,Y).

sister(X,Y):-
    female(X),
        sibling(X,Y).

uncle(X,Y):-
    brother(X,Z),
        parent(Z,Y).

aunt(X,Y):-
    sister(X,Z),
        parent(Z,Y).
