parent_of(sol, david).
parent_of(fannie, david).
parent_of(meryl, daniel).
parent_of(david, daniel).
parent_of(marina, anna).
parent_of(theodore, anna).
parent_of(daniel, michael).
parent_of(anna, michael).
ancestor_of(X,Y) :- parent_of(X,Y).
ancestor_of(X,Y) :- parent_of(X,Z), ancestor_of(Z,Y).
