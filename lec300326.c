#include <stdio.h>
#include <stdlib.h>

/*
Lecture 8, Prim's and Dijkstra's Algorithms

Neil Marchant, 

A quick correction

function BFS(G,v)
    mark[v] <- 1
    Enqueue(q,v)
    while q is non-empty do
        u <- deqeue(q)
        mark[u] <- 1
        for each out-neighbour ...


If there are any multiple directions to one node that node would be enqueued multiple times, wasting space
and time

In lecture 5b we introduced greedy algorithms

    Greedy Strategy: Build a solution piece by piece. At each step, make the locally optimal choice (whatever looks best right now)

    Catch: For many problems (e.g., Knapsack), short-sighted greedy choices trap you in a sub-optimal solution.

    Today's algorithms are guaranteed to find globally optimal solutions

Last lecture, we saw BFS and DFS: algorithsm for traversing unweighted graphs to solve problems.

Prim's algorithm: greedily builds a minimum spanning tree (MST).
Dijkstra's algorithm: greedily builds a single-source shortest paths

Spanning trees

    Recall that a tree is a connected acyclic graph
    A spanning tree of an undirected graph G= <V,E> is a tree that includes all vertices of G and a subset of its edges

    To efficiently find the minimum-weight edge, we organise the vertices not yet in three using a priority queue

function Prim(<V,E>)
    set v_0 to anu vertex in V; initialise priority queue Q
    for v in V do
        cost[v] <- 0 if v = v_0 else infty
        prev[v] <- null; in_tree[v] <- false
        Insert (Q,v,cost[v])
    while not IsEmpty(Q) do
        u <- EjectMin(Q)
        in_tree[u] <- true
        for each w adjacent to u do
            if no in_tree[w] and weight(u,w) < cost [w] then
                cost[w] <- weight(u,w); prev[w] <- u
                DecreaseKey(Q,w,cost[w])

We track progress using the cost, previous and if the v is in the tree

Unsorted array is O(|V|) for ejectmin, O(1) for decrease key
The min-heap is O(log|V|) for eject min and O(log|V|) for decrease key

Thus o(|V|^2) with an array-based priority queue
O(|E|log|V|) with a min-heap-based priority queue

Dijkstra's algorithm: Same structure as Prim's, except it minimizes the cumulative distance from v_0 to each vertex, rather than the weight of the next edge

Complexity: O(|E|log|V|) with a binary heap + adjacency list, same as prim's

function Dijkstra(<V,E>, v_0)
    initialise priority queue Q
    for v in V do
        dist[v] <- 0 if v = v_0 else infty
        prev[v] <- null; in_tree[v] <- false
        Insert (Q,v,cost[v])
    while not IsEmpty(Q) do
        u <- EjectMin(Q)
        in_tree[u] <- true
        for each w adjacent to u do
            if no in_tree[w] and dist[u] + weight(u,w) < dist[w] then
                dist[w] <- weight(u,w) + dist[u] 
                prev[w] <- u
                DecreaseKey(Q,w,dist[w])


*/

int
main(int argc, char *argv[]) {

}