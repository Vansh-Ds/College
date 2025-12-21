parent(pam,pob).
parent(tom,bob).
parent(tom,liz).
parent(bob,pat).
parent(bob,ann).
parent(pat,jim).
male(tom).
male(bob).
male(jim).
female(liz).
female(pat).
female(ann).
female(pam).

grandparent(X,Z):-
    parent(X,Y),
        parent(Y,Z).

grandfather(X,Y):-
    male(X),
        parent(X,Y),
            parent(Y,Z).

grandmother(X,Y):-
    female(X),
        parent(X,Y),
            parent(Y,Z).

father(X,Y):-
    male(X),
        parent(X,Y).

mother(X,Y):-
    female(X),
        parent(X,Y).

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


