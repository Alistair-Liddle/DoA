#include <stdio.h>

/*
Lecture 15: Dynamic programming Part 3: Warshall and Floyd's algorithm

Transitive closure
Problem: Given a directed graph, determine for every ordered pair of vertices (i,j)

In the transitive closure matrix, a 1 in row i, column j means: "there is a directed path from i to j"

Idea: allow intermediate vertices

func Warshall(A[1->n,1->n])
    for k<-1 to n do
        for i<-1 to n do
            for j<-1 to n do
                A[i,j] <- A[i,j] or (A[i,k] and A[k,j])
    return A

We don't need to check all j's and k's IF A[i,k] is already 0

func Floyd(W[1->n,1->n])
    D <- W
    for
            A[i,j] min(A[i,j] or (A[i,k] + A[k,j]))

Time complexity Theta(n^3) for time Theta(n^2) for space

Floyd's algorithm can handle negative weights as long as there is no negative cycle
*/

int main(int argc, char* argv[]) {
    
    printf("I may have fucked up\n");
    return 0;

}