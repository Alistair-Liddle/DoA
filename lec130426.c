#include <stdio.h>
#include <stdlib.h>

/*
Lecture 10, 11am Neil Marchant
Master Theorem and Recursion trees
Proj 1 due 11:59 today,

Midsemester this time next week
    Covers lectures 1-9

How to solve recurrence time complexities
    Can also use backwards substitution, these are easy

Goal: Determine divide adn conquer algorithms asymptotic time complexity
    Recursion trees: A visual tool to build intuition. We map out and sum the work done across all levels of recursion
    The Master Theorem: A mathematical shortcut

General Recurrence form

    T(n) = aT(n/b) + f(n)

a = Number of sub problems
b relates to the size of each sub problem
f(n) is the non recursive work, time spent dividing problem and combining results

assumption: Base cases take constant time: T(1) = Theta(1)

Example: T(n) = 2T(n/2) + Theta(n)

T(n) = 2T(n/2) + n^2

            n^2                 Total: n^2
        (n/2)^2 (n/2)^2         Total: (n^2)/2
(n/4)^2 (n/4)^2 (n/4)^2 (n/4)^2 Total: (n^2)/4

Root heavy tree

Terminates at depth L = log2n

T(n)=n^2+n^2/2+n^2/4+...+n^2/2^log2n)
< n^2(1+1/2+1/4+...)=2n^2
Total runtime is Theta(n^2)

Assume f(n) in Theta(n^d) when evaluating a recursion tree, the distribution of work depends on
    Branching factor a: Rate at which sub problems multiply
    Shrinkage factor b^d: Rate at which work per sub-problem decreases

a<b^d: Root heavy, root dominates the work done
a=b^d: Balanced, Branching and shrinkage offset perfectly, every tree contributes equally
a>b^d: Leaf heavy, leaves dominate the work done

Master THeorem:
    T(n)=aT(n/b)+Theta(n^d)
            Theta(n^d): if a < b^d    (Root heavy)
    T(n)= { Theta(n^dlogn) if a=b^d   (balanced)
            Thata(n^logba) if a > b^d (leaf heavy)

a>=1, b > 1, d >= 0 (not necessarily an int)
Will be included in the formula sheet, won't be necessary to memorise
Need to know how to apply

Example T(n) = 2T(n/2)+n

Applying the master theorem:
    a=2,b=2,d=1, since a = b^d (2=2^1) this is balanced
    The total cost is Theta(nlogn)

Example T(n) = T(n/2)+n

    a=1,b=2,d=1, 1<2, root heavy
    Theta(n)

T(n) = 4T(n/2) + n -> T(n) = 4T(n/2) + 1

a > b^1, Leaf Heavy, Theta(n^2) in the first one
a > b^0, Leaf Heavy, Theta(n^2) in the second one

Master Theorem applications

T(n) follows general form

Can't work when there are uneven splits

T(n) = T(n/3) + T(n/4) + n

There are non f(n) in Theta(n^d)

T(n) = 2T(n/2) + 2^n

Only applies when sub-problem sizes are exact fractions and the cost function is polynomial

It cannot solve reucrrences where: 
    f(n) grows faster than any polynomial
    There are uneven splits

For complex cases, try recursion trees o rthe substitution method (make a guess and prove via induction)

BEYOND THIS SUBJECT (NOT EXAMINABLE)
    The Akra-Bazzi Theorem is a generalisation of the Master Theorem that handles uneven splits

Application: Strassen's Matrix Multiplication

Goal, Compute C = AB, where A and B are nxn matrices

We previously saw this could be done naively as a standard nested loop in Theta(n^3)

Naive divide and conquer

We can split A and B into four (n/2)x(n/2) blocks. Computing C requires 8 recursive multiplications of these blocks
PLUS Theta(n^2) time to add them together

8>2^2, as such it is leaf heavy thus Theta(n^log_2(8)) = Theta(n^3)

Volker Strassen Discovered that you can use 7 recursive multiplications instead of 8

The final blocks of C are formed by simple addition and subtraction of the 7 products

C11 = M1 + M4 - M5 + m7
C12 = M3 + M5
C21 = M2 + M4
C22 = M1 - M2 + M3 + M6

T(n) = 7T(n/2) + Theta(n^2)

7>2^2 still Leaf heavy however Theta(n^log_2(7)) ~ Theta(n^2.807)

Next up, analysing mergesort and quick sort, Neil's last lecture

*/

int main(int argc, char *argv[]) {

    printf("Frog\n");
    return 0;
}