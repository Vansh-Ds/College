delete(1, [_|L], L):-
    !.

delete(N, [H|T], [H|R]) :-
    N > 1,
        N1 is N - 1,
            delete(N1, T, R).