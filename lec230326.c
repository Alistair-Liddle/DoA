#include <stdio.h>
#include <stdlib.h>

/*
Lecture 6, Graphs and Graph Concepts

Neil Marchant

First assignment releases today, 2 coding tasks in C, will be submitted on Ed, Oral Assessment details tba
Due monday week 6

Head Tutor Zoom Consultation 2-3pm Tuesdays
More sessions in the lead up to Project 1 deadline

Hraphs model relationships and structure in many real-world problems:
    Connectivity: social networks communication networks
    Routing: road navigation, internet packet routing
    Scheduling and Allocation: project dependencies task scheduling, resource matching

    We won't be covering content needed for task 2 until thursday of this week

Defining graphs mathematically
    We define a graph as a tuple, G = (V,E) where V is the set of vertices and E which is the set of edges
    edges is a subset of the square of the vertices (E $\subseteq$ V*V)
    
i.e. V = {a,b,c}, E = {(a,b),(b,a),(a,c),(c,a),(b,c),(c,b)}

Directed vs undirected, undirected has each path can be back or forth while directed has to follow a set direction

If (u,v) $\in$ E then vertices u and v are said to be adjacent.

An edge (u,v) is said to connect u and v and to be incident to them.

The degree of vertex V is the number of edges incident to V

In a directed graph, we distinguish the in-degree(number of incoming edges) and the out degree(number of outgoing edges)

A path is a sequence of vertices which are connected by edges

A simple path has no repeated vertices
A cycle is a simple path, except that v_0=v_k, that is, the last vertex is the same as the first vertex

Graphs can be weighted or unweighted, unweighted graphs have edges that have a numeric value, could represent cost, capacity, distance, etc.
Unweighted graphs have all edges treated equally (does not necessarily mean that there is no numerica value associated to the edges, just they are all the same)

Sparse vs Dense
Sparse
    Few edges (|E| << |V^2|)
    Examples: Social netowrks, road networks, trees

Dense
    Many edges (|E| ~=~ |V^2|)
    Examples: complete graphs, biology networks

Connected graphs

A graph is connected if there is a path between every pair of vertices.

A connected component is a maximal set of vertices where every pair is connected by a path.

If a graph can not have any cycles created it is called "Acyclic"

Directed acyclic graphs are directed graphs with NO directed cycles
A (free) tree is a connected acyclic graph.

A rooted tree is a tree with one node indentified as the root. every other node is reachable from the root

Rooted trees appear everywhere: file systems, DOM trees (HTML), family tree.

Layout conventions: "parents" sit higher than "children"

If a tree has n vertices <=> Tree has n-1 edges
Trees are acyclic connected.

Modelling with graphs
Graph algorithms are of great importance beause so many different problem types can be abstracted to graph froblems
Example building a house
                   ^-> Doors  >-v
Foundation -> Walls -> Windows -> Painting
                   v-> Roof   >-^

Problem:
    Seat dinner guests at k tables so that no enemies share a table.

Graph Model
    Vertex represents a fuest, edge represents a confliv, coulour of vertex represents assigned table

Solution
    Reduces to the graph k-colouring problem. Assign each vertex one of k colours such that adjacent vertices have different colours

K-colouring problem is np hard

Adjacency matrix representation

  A B C
A 1 0 1
B 0 0 1
C 0 1 0

asymptotics
Space: O(|V^2|)
Check if (u,v) in E: O(1)
Find all neighbours of v: O(|V|)

Adjacency list is another way of displaying the list

A -> A, C
B -> C
C -> B

For undirected graphs each edge appears in two lists.

Space: O(|V| + |E|)
Check if (u,v) in E: O(out-deg(u))
Find all neighbours of v: O(out-deg(v))

next up
    Graph traversal, in which we get down to the nitty-gritty details of graph algorithms
*/

int
main(int argc, char *argv[]) {
    printf("Woe frogdog be upon ye\n");
    return 0;
}