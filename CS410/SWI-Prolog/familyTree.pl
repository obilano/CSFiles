male(tano).
male(remy).
male(papa).
male(whitey).
male(may).
male(andy).
male(kip).
male(trey).
male(echoes).
male(oberon).
male(barrett).
male(noble).
male(fox).
male(thorin).

female(pita).
female(nene).
female(meme).
female(nana).
female(lilian).
female(melissa).
female(jennifer).
female(terry).
female(chezley).
female(haley).
female(laurian).
female(corde).

parentOf(pita, may).
parentOf(pita, andy).
parentOf(tano, may).
parentOf(tano, andy).
parentOf(nene, lilian).
parentOf(remy, lilian).
parentOf(meme, kip).
parentOf(meme, melissa).
parentOf(papa, kip).
parentOf(papa, melissa).
parentOf(whitey, trey).
parentOf(whitey, jennifer).
parentOf(whitey, terry).
parentOf(nana, trey).
parentOf(nana, jennifer).
parentOf(nana, terry).
parentOf(andy, echoes).
parentOf(andy, oberon).
parentOf(lilian, echoes).
parentOf(lilian, oberon).
parentOf(melissa, chezley).
parentOf(melissa, barrett).
parentOf(trey, chezley).
parentOf(trey, barrett).
parentOf(echoes, laurian).
parentOf(oberon, noble).
parentOf(oberon, fox).
parentOf(chezley, noble).
parentOf(chezley, fox).
parentOf(barrett, thorin).
parentOf(barrett, corde).
parentOf(haley, thorin).
parentOf(haley, corde).

marriedTo(pita, tano).
marriedTo(nene, remy).
marriedTo(meme, papa).
marriedTo(nana, whitey).
marriedTo(lilian, andy).
marriedTo(melissa, trey).
marriedTo(chezley, oberon).
marriedTo(barrett, haley).

motherOf(Mom, Child) :- female(Mom), parentOf(Mom, Child), Mom\=Child.
fatherOf(Dad, Child) :- male(Dad), parentOf(Dad, Child), Dad\=Child.
daughterOf(C, P) :- female(C), motherOf(P, C), C\=P; female(C), fatherOf(P, C), C\=P.
sonOf(C, P) :- male(C), motherOf(P, C), C\=P; male(C), fatherOf(P, C), C\=P.
brotherOf(X, Y) :- male(X), parentOf(P, X), parentOf(P, Y), marriedTo(P, _), X\=Y.
sisterOf(X, Y) :- female(X), parentOf(P, X), parentOf(P, Y), marriedTo(P, _), X\=Y.
siblingOf(X, Y) :- parentOf(P, X), parentOf(P, Y), marriedTo(P, _), X\=Y.
grandchildOf(GC, GP) :- parentOf(P, GC), parentOf(GP, P), GC\=GP.
grandparentOf(GP, GC) :-  parentOf(P, GC), parentOf(GP, P), GP\=GC.
auntOf(A, C) :- female(A), parentOf(P, C), sisterOf(A, P), A\=C.
uncleOf(U, C) :- male(U), parentOf(P, C), brotherOf(U, P), U\=C.
nieceOf(N, A) :- female(N), parentOf(P, N), siblingOf(A, P), N\=A.
nephewOf(N, A) :- male(N), parentOf(P, N), siblingOf(A, P), N\=A.
ancestorOf(A, I) :- parentOf(A, I), A\=I.
ancestorOf(A, I) :- parentOf(A, P), ancestorOf(P, I), A\=I.

grandsonOf(GC, GP) :- male(GC), parentOf(P, GC), parentOf(GP, P), GC\=GP.
granddaughterOf(GC, GP) :- female(GC), parentOf(P, GC), parentOf(GP, P), GC\=GP.
grandfatherOf(GP, GC) :-  male(GP), parentOf(P, GC), parentOf(GP, P), GP\=GC.
grandmotherOf(GP, GC) :-  female(GP), parentOf(P, GC), parentOf(GP, P), GP\=GC.
cousinOf(C0, C1) :- parentOf(P0, C0), parentOf(P1, C1), siblingOf(P0, P1), C0\=C1.
soninlawOf(H, I) :- male(H), marriedTo(W, H), parentOf(I, W).
daughterinlawOf(W, I) :- female(W), marriedTo(W, H), parentOf(I, H); female(W), marriedTo(H, W), parentOf(I, H).
motherinlawOf(M, I) :- female(M), parentOf(M, S), marriedTo(S, I); female(M), parentOf(M, S), marriedTo(I, S).
fatherinlawOf(M, I) :- male(M), parentOf(M, S), marriedTo(S, I); male(M), parentOf(M, S), marriedTo(I, S).
