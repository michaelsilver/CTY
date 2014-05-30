president(lincoln, gettysburg_adress).
president(lincoln, civil_war).
president(nixon, first_moon_landing).
president(jefferson, lewis_and_clark).
president(kennedy, cuban_missile_crisis).
president(fdr, world_war_II).
before(jefferson, lincoln).
before(lincoln, fdr).
before(fdr, kennedy).
before(kennedy, nixon).
precedes(X,Y) :- before(X,Y).
precedes(X,Y) :- before(X,Z), precedes(Z,Y).
earlier(X,Y) :- president(R,X), president(S,Y), precedes(R,S).

