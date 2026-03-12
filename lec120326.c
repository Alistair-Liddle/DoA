#include <stdio.h>
#include <stdlib.h>

/*
Lecture 3, Growth rate and Algorithm Efficiency
Neil Marchant, 11am

WE evaludate algorithms based on the resources they consume:
    running time or number of operations as a proxy
    space in RAM or on disk
Can assess how resource usage scales with input size (n) by:
    theoretical analysis
    empirical analysis (i.e., benchmarking implementations)
A programs running time depends on:
    Algorithms (specific sequence of operations)
    Input
    Hardware (CPU, memory architecture)
    Software environment (language, compiler, OS)

    Our goal is to compare algorithms and not implementations:
        As such we will ignore 3 and 4 by using a simiplified model of computation
        count theoretical operations instead of nanoseconds
        make assumptions about the input

The word RAM Model approcimates how real computers work
    Memory: An infinite array of words (cells), each capable of holding an integer
    Word size: Typically w = 64 bits for current hardware
    Unit cost Operations:
        Reading/writing any memory address M[i] takes constant time
        Arithmetic operations +,-,x,/, comparisons, and bitwise operations on words take constant time

Limit on input size, Words must be large enough to store input size n (i.e. w >= log 2 n), allowing us to index arrays

We identify the input size and basic operation executed most frequently (usually in innermost loop):
    Problem, Size measure, Basic Operation.
    Search for item in list, List Length n, key comparison
    multiply float matrices, matrix dims nxn, float multiplication
    graph traversal, vertices |V| + edges |E|, traversing an edge
If c is the running time of the basic...

For a fixed input size n, the runng time t(n) can vary depending on assumptions made about the input:
    Worst case
        Provides a guaranteed upper bound on time
        Input that maximises running time
    Best-case
        Often trivial
        Input that minimizes running time
    Average case
        Assume inputs follow a distribution and compute the expected running time
    Amortised
        Consider a worst-case sequence of inputs and average over them

An algorithm has a best-case time n and worst case time n^2 whats the average case time
    closer to n
    around (n + n^2)/2
    closer to n^2
    could be any of the above (prevailing answer)

function SequentialSearch(A[0..n-1],k)
    i<-0
    while i<n and A[i]=/=k do
        i <- i + 1
    if i < n then
        return i
    else
        return -1
    
Assuming that A[i] are uniformly random
Prob p that K is in A
Expected # of comparisons | K is in A
    Sum(n-1)(i=0) (i+1) * 1/n (probability K is at any array) = (n+1)/2

Expected # of comparisons
    (n+1)/2 * p + n * (1-p) (k is in, k is not in)
    =(p*(n+1))/2 + n * (1-p)



Asymptotic analysis
Example greates Common Divisor
Consider (GCD(m,n)) where m,n are 64 bit integers
Algorithm A: Euclid
while n =/= 0 do
    r <- m mod n
    m <- n, n <- r
return m
Fast: Approx 60 ops

Algorithm B, Trial Division
t <- min(m,n)
while m mod t =/= 0 do
    t <- t-1
return t
Slow: approx. 10^18 ops

Algorithm A runs in 10^10 * n time and Algorithm B runs in n^2 time for processing n = 1 million items, which is faster?
    A (10^10 * 10 ^ 6) = 10^16
    B (10^(6*2)) = 10 ^ 12 [Therefore B]
    About the same

Tyranny of growth rate
n = 100
log 2 n, 7
n, 10^2
n log 2 n, 7*10^2
n^2, 10^4
n^3, 10^6
2^n, 10^30
n!, TOO BIG

1 is constant
    Runnging time independent of input
log n is logarithmic
    Typical for divide and conquer solutions, i.e. balanced search tree
n is linear
    Each input element is processed once
n log n is log linear
    Each input element is processed once and processing involves other elements too, e.g. heap sort
n^2 is quadratic
    Processing all pairs
n^3 is cubic
    Processing all triples
2^n is exponential

O(g(n)) is the set of functions bounded above by g asymptotically
We write t(n) in O (g(n)) iff there exists c > 0 and n_0 such that t(n) <= c * g(n) for all n >= n_0
iff == if and only if

Big O pitfalls
Notation abuse
We sometimes write t(n)=O(n) instead of t(n) in O(n^2). It is a one way membership, not an equality
Big O is an upper bound,
    It is technically correct to say 3n in O(n^2) However we usually only care about the tightest useful bound
    3n in O(n)
Constant can matter
An algorithm with 10^10 * n operations is O (n), but may be slower than O(n^2) algorithm for realistic inputs.

Omega(g(n)) is the set of functions bounded below by g asymptotitcally
We write t(n) in Omega (g(n)) iff there exists c>0 and n_0 such that T(n) >= c * g(n)

Theta(g(n) is the set of founctions bounded both above and below by g asymptotically
iff t(n) in O(g(n)) AND t(n) in Omega(g(n))

Exercise
1+2+3+...+n in O(n^2)
The infinite sum is equal to (n(n+1))/2 = n^2/2 + n/2
<= n^2/2 + n^2/2 <= n^2 <= 1 * n^2

Also show that 17n^2 + 85n + 1024 in O(n^2)
17n^2+85n+1024<=17n^2+85n^2+1024n^2 for n>=1
1126n^2<=c*n^2

next up we go through some examples of time complexity analyssi for specfific algorithms
*/

int
main(int argc, char *argv[]) {

    printf("Schmorgoofol\n");

    return 0;
}