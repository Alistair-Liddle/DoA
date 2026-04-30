#include <stdio.h>
#include <stdlib.h>

/*
Lecture 14, Tawfiq Islam, 30/04

The knapsack problem
    Given n items (weight, w>0, value, v>0) and a knapsack of capacity W. Find the most valuable subset that fits)

Knapsack Brute force
    Theta(n*2^n)

Knapsack DP formulation
    To describe a knapsack subproblem, we need two pieces of information.
        Which items are allowed? Use only the first i items: {1,...,i}
        What capcity limit are we solving for? Use a smaller capcity limit j 0<=j<=W
    F[i,j] = the maximum value achievable using only items 1-i, with capacity at most j

    Final answer is F[n,W]

func Knapsack
    for i<-0 to n do F[i,0] <- 0
    for j<-0 to W do F[0,j] <- 0
    for i<-1 to n do
        for j<-1 to W do
            if j < wi then
                F[i,j] <- F[i-1,j]
            else
                F[i,j] <- max(F[i-1,j], F[i-1,j-wi] + vi)
    return F[n,w]

theta(nW) space and time

function MFKnapsack(i,j)
    if F[i,j] < 0 then
        if j < wi then
            value <- MFKnapsack(i-1,j)
        else
            a<-MFKnapsack(i-1,j)
            b<-vi+MFKnapsack(i-1,j-wi)
            value<-max(a,b)
        F[i,j]<-value
    return F[i,j]

initial call MFKnapsack(n,W)

Still the same worst case however only SOME values will need to go to nW

As this is nW, this is pseudopolynomial dependent on W
*/

int
main(int argc, char *argv[]) {

    printf("Checked my DBS assignment... I almost screwed up\n");

    return 0;
}