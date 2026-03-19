#include <stdio.h>
#include <stdlib.h>

/*
Lecture 5, Brute Force Methods, Neil Marchant

READ LECTURE 5B, COVERS GREEDY ALGORITHMS WHICH ARE ON PROJECT 1!!!!!!!

Brute force algorithms
    Solve the problem directly based on the statement
    "Just do it" approach, that often involves checking every possiblity

Examples
    Selection sort
    String matching
    CLosest pair
    Combinatorial: TSP (Travelling Sales Person), Knapsack
    Graph traversal

When to use?
    When input size is small, or when we need a simple prototype
    Can occur by breaking up a large problem into many small ones and bruteforcing those

Iterative Brute Force

Example Selection sort
    function SelSort(*A)
        for i <- 0 to n-2 do
            min <- i
            for j <- i+1 to n-1 do
                if A[j] < A[min] then
                    min <- j
            swap A[i] and A[min]

Complexity is Theta(n^2)
It only makes Theta(n) swaps, which is beneficial if writing to memory is expensive.

Properties of a sorting algorithm
    In-place: If it doesn't require additional memory except, perfaps a few units.
    Stable if it preserves the relative order of elements that have identical keys.
    Input-insensitive if its running time is fairly independent of input proerties other than size.

Selection sort
    Inplace?
        True, it only swaps elements, not copying arrays
    Stable?
        False, Because IT SWAPS, elements will end up losing their location
        Alice 80, Bob 80, Clair 70, -> Clair 70, Bob 80, Alice 80 (sorted but not stable)
        Might be ways to make it stable but not with this definition
    Input insensitive?
        True, will always terminate both inner loops
    Minimises number of comparisons?
        False, there are other sorting algorithms with better complexity, such as merge and heap sort

Example: String matching

Problem: Find pattern p (m characters) inside text (n characters)

Algorithm: Align p with t at every possible shift i in {0, n-m}

for i <- 0 to n-m do
    j <- 0
    while j < m and p[j] = t[i+j] do
        j <- j + 1
    if j = m then
        return i
return -1

In the worst case the complexity is O(nm) 

Averace case is O(n)

Exmaple: Closest pair

Given n points, dinf the pair with minimal eclidean distance

Algorithm: Calculate the distance between every pair, keeping track of the minimum.
    By symmertry, we only need to check pairs (i,j) in which i<j

min <- infty
for i <-0 to n-2 do
    for j <- i+1 to n-1 do
        d <- (DISTANCE FORMULA)
        if d < min then
            min <- d
            p1 <- i
            p2 <- j
return (p1, p2)

Complexity is Theta(n^2)
Optimisation: Do we need the squeare root?
Can we do better?
    Later we'll see a divide-and-conquer approach that achieves Theta(n log n)

Example: Exhaustive search
    A form of brute force applied to combinatorial problems. 
    Typically search over the solution space, rather than the input.

Algorithm
    Construct every possible solution (e.g., all permutations, all subsets)
    Keep track of which is valid/optimal
    When all possibilities have been checked, return the best one

Complexity
    Typically exponential or factorial growth, which may be intractable even for "small" inputs (say n=50)
    2^50 = 10^15 subsets, even at a billion searches a second, it WOULD TAKE 4 MONTHS to complete this

Example: Travelling Sales Person

    Problem: Shortest tour visiting every location exactly once, before returning to the starting location.

    Complexity There are (n-1)!/2 unique tours
    For n-20, this is ~= 6*10^16 tours

Example: The Knapsack Problem
    Problem: Fiven n items, (with weight > 0 value > 0) and a Knapsack with Capacity W (of weight)
    Find the most VALUABLE subset that fits.

    Bruteforce algorithm: Try every subset of items, calculate total weight and volume, and pick the best that fits.
    Complexity O(n2^n), which is INFEASIBLE for large n
    
    We will see a faster algorithm later in the subject using Dynamic Programming
        O(n*W) complexity where W is the capacity of the Knapsack
            Sudo polynomial time, for VERY large capacities it can be nigh identical to brute force

The tale of Two Tours

Example: Graph Traversal
    Given an undirected graph(V,E), does there exist a tour that
        Visits each edge, e in E exactly once? (Eulerian tour)
        Visits each vertex v in V exactly once? (Hamiltonian tour)

    Eulerian tour (EASY) solvable in O(|E| + |V|)
        Check if vertex degrees are even and belong to a single connected component
    Hamiltonian tour (HARD)
        Solvable in O(|V|!) by brute force
        NP-Complete: No known polynomial-time algorithm, and unlikely to exist
            NP-Complete = No Polynomial Complete

Tractable Vs Intractable Problems
    Tractable:  We have efficient algorithms, often faster than brute force
        Sorting O(n log n)
        String Matching O(n)
        Eulerian tour O(|E| + |V|)
        Closest Pair O(n log n)

    Intractable:    No fast algorithms known for the worst-case. Brute force or approximations often required
        TSP
        Hamiltonian tour

    Knapsack difficulty is a middle ground due to large W's being almost indifferent to Brute Force.

    Looking ahead
    Can we be smarter than brute force?
    Divide and conquer, dynamic programming, greedy solutions.
*/


int
main(int argc, char *argv[]) {
    
    printf("rAbbit hOle\n");

    return 0;
}