#include <stdio.h>
#include <stdlib.h>

// Lecture 1 COMP20007, 2nd of March 2026, Neil Marchant PAR149, Room 122.

/* 
Neil will be taking the first 6 weeks of lectures
Tawfiq Islam will take over after that
Email both Tawfiq and Neil for private matters, use ed for subject questions and discussion

Head tutor Thomas Minuzzo
Will run weekly consultations, time and venue : TBA
Ed: For all materials, announcements and any Q&A

Canvas is only for lecture recordings

Workshops start Week 1

AI is allowed but should not be relied on

AI must be attributed if used

An oral will be used to check your understanding

Assumed Knowledge
    Discrete math: sets, functions, induction, proofs
    Data structures: arrays, linked lists, sets
    Recursion and recurrence relations (see Levitin, Appendix B)
    C proframming pointers, structs, memory management, basic I/O

Cokmplete Week 0
*/

/* 
What is an algorithmic problem?
A problem is a mapping f: X->Y from instance x in X and y in Y

Limits of computation

Computability: Does an algorithm exist for ever f? No, (Halting problem)
    Halting problem is proposed by alan turing and suggests you can't write an algorithm to determine
    if another algorithm will run infinitely
Intractability: Does an efficient algorithm exist for every computable problem? Probably not.
(Travelling Salesperson)
    Travelling salesperson is a problem where you need to determine the best path for a salesperson to travel

algorithms are a sequence of instractions with the properties
    Unambiguous: Each step is precisely defined.
    Finiteness: Terminates in a finite number of steps.
    Correctness: Produces the intended output for all well-formed inputs.
*/

/*
Euclid's algorithm for computing the Greatest Common Divisor

Input: integers m, and n where at least one is non 0

output greatest common divisor of m and n (a positive integer)

while n =/= 0 do
    r <- m mod n
    (m, n) <- (n,r)
return |m|

Consider (m,n) = (24,60)

*/

/* 
First step understand the problem, i/o, constraints, edge cases
Strategy: burte force, greed divide and conquer?
Design: data structures and control flow
Prove correctness does it work for all inputs?
Analyze: time & space complexity, (worst vs average case).
Implement and test: empirical evaluation.
*/

int
main(int argc, char *argv[]) {
    printf("Schmorgoofol\n");
    return 0;
}