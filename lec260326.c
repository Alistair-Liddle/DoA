#include <stdio.h>

/*
Lecture 7, graph traversal

Algorithms to explore graphs, Depth-first search (DFS), Breadth first search (BFS)

DFS
    go deep then backtrack

BFS
    Explore all neighbors at distance k before distance k+1

DFS adn BFS rely on marking vertices as they are visited, so we can avoid revisiting them.

To keep track, we main an array mark indexed by V

    mark[v]=1 means vertex v has been visited
    mark[v]=0 means vertex v has not been visited

Can alternatively store an integer in mark[v] that represent the visit order i.e. 1st 2nd 3rd, good to debug the traversal

DFS follows a stack based discipline for the exploration

Problem: Check whether an undirected graph is connected-i.e., whether there exists a path between every pair of vertices

function DFSComplete(G=[V,E])
    set mark[v]=0 for all v in V
    for v in V do
        if mark[v]=0 then
            DFS(G,v)

complexity of Theta(|V|+|E|) with adjacency list representation.
    Why? because each vertex is marked once, and each adjacency-list edge is scanned once (directed graph)
    or twive (undirected graph)

A useful tool for depicted a DFS traversal is the DFS forest.
    Tree edge: traversed in DFS
    Back edge: in the original graph but not in the forest (point to ancestors)

Problem:
    Does a graph contain a cycle

    Key insight: A cycle exists iff the DFS forest contains a back edge. A back edge is an edge (u,v) where v is an ancestor of u in the DFS tree. this creates a cycle v->...->u->v

    DFS Algorithm
        Run DFS tracking ancestors (vertices currently on the call stack)
        When exploring an edge (u,v): if v is marked and is ana ancestor of u, report a cycle
            NOTE: for undirected graphs, you must ignore the edge leading back to the immediate parent!
    
Problem:
    Find a linear ordering of a graph's vertices v1,v2,...,vn
    Applications: Task scheduling, resolving dependencies, course planning etc,
    Note: The pgrah must be a DAG
    Can solve this problem using DFS! Project 1 provides another algorithm

    Algorithm
        Run DFS on the graph
        Track when vertices finish (when DFS returns from them after exploring all out-neighbours)
        Output in reverse finish order

    Why this works?
        For any edge (u,v): v must finish before u
        Reversing puts u before v
    
    Complexity: Theta(|V|+|E|) with adjacency list

    Idea: Process all vertices at distance k from the start before processing vertives at distance k+1

BFS follows a queue discipline

function BFS(G,v)
    mark[v] <- 1
    enqueue(q,v)
    while q is non-empty do
        u <- dequeue(q)
        for each out-neighbour w of u do
            if mark[w] = 0 then
                mark[w] <- 1
                Enqueue(q,w)

Note: We mark vertices when we discover them (enqueue), not when we process them (dequeue)

If we changed the algorithm to mark then when we dequeue them then we'll get multiple additions of the same vertex
It would still visit every node and behave like a BFS. It would not get stuck on any DAG's

function BFSComplete(G=[V,E])
    mark[v] <- 0 for all v in V
    initialise queue q to empty
    for v in V do
        if mark[v]=0 then
            BFS(G,v)

complexity Theta(|V|+|E|) with adjacency list, same reasoning as DFS

The BFS Forest
    Shows parent-child relationships discovered by BFS
    Tree edge:
        Edges used to discover new vertices
    Non-tree edges:
        All other edges (both endpoints are already marked)
    Tree edges form a shortest-path tree:
        the path from root to any vertex via tree edges is a shortest path

We've now covered graph traversal. Next, we explore shortest-path algorithms and minimum spanning trees.
*/

int
main(int argc, char *argv[]) {

    printf("My assignment is working well I hope\n");

    return 0;
}