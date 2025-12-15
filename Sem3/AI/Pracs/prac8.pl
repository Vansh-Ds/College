pow(N,0,1).

pow(N,P,A):-
    P>0,
        P1 is P-1,
            pow(N,P1,A1),
                A is N*A1.