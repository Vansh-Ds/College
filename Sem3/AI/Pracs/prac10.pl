member(A, [A|_]):-
    !.

member(A, [H|T]):-
    member(A, T).