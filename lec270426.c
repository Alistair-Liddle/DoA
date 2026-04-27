#include <stdio.h>
#include <stdlib.h>

/*
Lecture 13: Dynamic Programming Part 1: Foundations

Tawfiq Islam

Storing intermediate solutions

For fibonacci it only depends on the last 2 numbers to calculate the final one

Complexity for linear fibonacci
Time theta(n)
Space theta(n) or theta(1) if you store only the last 2 numbers

Key Ideas for Dynamic programm

    Optimal substrcture:
        The optimal solution to a problem can be built from optimal solutions to smaller subproblems

    Overlapping subproblems:
        The same subproblem is needed by multiple larger problems - so we store results instead of recomputing them.
    Bottom up filling:
        Solve the smaller subproblems first (base cases), then build upward toward the full solution

    Dynamic programming (DP) requires overlapping subproblems. If subproblems are disjoint, sotring results gives no benefit

For example mergesort:
    The halves of an array are independent they never share a subproblem

For example fibonacci
    For F(5) we need F(4) and F(3) but for F(4) we need F(3) again

DP Workflow
    1. Define the subproblem: for an index i (or i,j), what does the table entry F[i] or F[i,j] mean
    2. Write a recurrence relating F[i] or F[i,j] to smaller subproblems
    3. Identify the base cases
    4. Fill the table bottom-up (base cases first, then larger subproblems)
    5. Read the answer from the table usually F[n] or F[n,m]
    6. (OPTIONAL) trace back through the table to reconstruct the actual solution, not just its value

Note:
    DP is most commonly applied to omtimisation problems, but it also applies whenever subproblems overlap

The coin row problem

    Given a row of n coins with positive values c1 to cn
    Goal: Select coins to maximise the total collected
    Constraint: Cannot pick two adjacent coins

    Greedy fails in cases like 5 6 5, choose 6, can't pick the two 5's, pick the two 5's 10, higher, therefore greedy isn't optimal

    Greedy CAN give the optimal solution, however it won't always, as such we need DP

    Coin row DP: Reucrrence
        Let F(i) = maximum amount collectible from coins
                0                           i=0
        F(i) = {c1                          i=1
                max(ci + F(i-2), F(i-1))    i>1

    func CoinRowDP(C[1,...,n])
        F[0] <- 0, F[1] <- C[1]
        for i <- 2 to n do
            F[i] <- max(C[i] + F[i-2], F[i-1])
        return F[n]
    
    complexity time Theta(n) Space Theta(n)

    The change making problem

    func ChangeMakingDP(D[1,m],n)
        F[0] <- 0
        for i <- 1 to n do
            best <- infty
            for j <- 1 to m do
                if D[j] <= i then
                    best <- min(best, F[i-D[j]])
            F[i] <- best + 1
        return F[n]
*/


int main(int argc, char *argv[]) {
    printf("Board riding\n");
    return 0;
}

