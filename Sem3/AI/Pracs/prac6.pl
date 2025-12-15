fact(1, 1).

fact(V, F):-
    V1 is V-1,
        fact(V1, F1),
            F is V*F1.