#include <stdio.h>

/*
Oral

Asked two questions, state and management of code
Memory allocation
Questions shouldn't be too difficult
Questions to ensure you understand your own code

Lecture 9, Divide and Conquer Algorithms

For the rest of Neil Marchant's sections we'll be doing divide and conquer paradigm

Closely related to recursion
    Divide: The problem into smaller sub-problems
    Conquer: Solve the small sub-problems recursively
    Combine: The solutions to sub-problems to form a solution

Tree height via divide and conquer

function Height(T)
    if T is empty then
        return -1
    else 
        hleft <- Height(Tleft)
        hright <- Height(Tright)
        return max(hleft,hright)+1

Binary tree traversal

We often want a systematic precudure to visit each node exactlty once
Pre-order: Root, Left, Right
In-order: Left, Root, RIght
Post-order: Left, Right, Root

function PreTraverse
    If T is non-empty then
        visit T_root
        PreTraverse(Tleft)
        PreTraverse(Tright)

function inTraverse
    if T is non-empty then
        inTraverse(Tleft)
        visit Troot
        inTraverse(Tright)

function postTraverse
    if T is non-empty then
        postTraverse(Tright)
        postTraverse(Tleft)
        visit Troot

Useful for deleting a tree from memory as it visits all leaves and then the root

init stack S
if T is non-empty then
    Push(S,T)
while S is non-empty do 
    T <- Pos(S)
    visit Troot
    if Tleft is non-empty
        ...

Lecel-order traversal results if we replace the stack with a queue

init queue Q
if T is non-empty then
    enqueue(Q,T)
while Q is non-empty do
    T <- dequeue Q
    visit Troot
    if Tleft is non-empty then
        Enqueue(Q,Tleft)
    if Tright is non-empty then
        Enqueue(Q,Tright)

Closest Pair Problem: Divide and Conquer

Given points P in the cartesian plane, find the minimum distance between any two points in Theta(n log n) time.

Sort points P by x-coordinate into array P_x
Sort points P by y coordinate into array P_y

Divide by the x-median, splits points into

function ClosestPair(Px,Py)
    n <- abs(Px)
    if n<=3 then
        Find the closest distance d by brute force
        return d
    m <- Px[[n/2]-1].x // x median
    Copy the first [n/2] points of Px into PLx and remainder into PRx
    Apply the same split to Py to get PLy and PRy
    dL <- ClosestPair(PLx,PLy)
    dR <- ClosestPair(PRx,PRy)
    d <- min(dL,dR)
    dC <- ClosestCrossPair(Py,m,d)
    return min(d,Dc)

function ClosestCrossPair(Py,m,d)
    Filter points p in Py that satisfy abs(p.x-m) < d into S
    min_sq <- d**2, k <- |S|
    for i <- 0 to k-2 do
        j <- i+1
        while j <k and (S[j].y-S[i].y)^2 < min_sq do
            curr_sq <- (S[i].x-S[j].x)^2 + (S[i].y-S[j].y)^2
            min_sq <- min(curr_sq,min_sq)
            j <- j+1

*/

int
main(int argc, char *argv[]) {

    printf("Why the fuck did they change the colour scheme like holy ass\n");
    printf("Like I was getting used to having a bit more of an empty one but this new one is striaght ass\n");
    printf("I think writing personal opinions for people to see through compiling is worth the main function lmao\n");
    return 0;
}