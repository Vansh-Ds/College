rev(L, R):-
    rev(L, [], R).
rev([], X, X).
rev([H|T], X, R):-
    rev(T, [H|X], R).