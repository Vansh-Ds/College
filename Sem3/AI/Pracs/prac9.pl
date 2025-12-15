multiply(N1, 1, N1):-
    !.

multiply(N1, N2, R):-
    X is N2 - 1,
        multiply(N1, X, R1),
            R is R1 + N1.
