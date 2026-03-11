#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
Lecture 2: Data Structures, Comp20007 Neil Marchant Old Arts, 05/03 11am

Algorithms: for solving problems, transforming data

Data structures for storing dta, arranging in a way that suits an algorithm

Computers have linear memory (RAM). to build any data structure, we ultimately rely on two fundamental ways of storing items:
    Contiguous (Array), Items stored side-by-side, identified by index
    Linked (Pointer), Items scattered in memory, Connected by addresses

Arrays are of a fixed size, they have random access, able to jump to index i instantly.

Linked lists
    A sequence of nodes where each node contains data a pointer to the next node
    No random access: to find item i, must walk from the head
    size: can easily grow/shrink at head or tail (with tail pointer)
    Extra memory for pointers (overhead)

Iterative process finding an item:
Walk through the array or linked list using a for or while loop

Recursive processing
Solve the problem on a smaller array/linked list and use that solution to solve on the full array
or linked list

ADTs (Abstract Data Types)
    An adt is a theoretical model for a data collection defined by its behavious:
        the operations it supports and their outcomes
    The two we will talk about are the stack and the queue
    Stacks
        Operates on a Last In, First Out (LIFO) principle. Think of a stack of plates.
        Operations
            Push(x) add item x to top
            pop(): remove and return top item
            peek(): return top item
            is_empty(): is stack empty
            Operations take constant time
        [A, B] -> push(x) -> [A, B, x]
        No right or wrong answer to the stack, dynamic arrays might be the best
    
    Queue
        Operates on a First-in, First-Out (FIFO) principle. This of a queue for coffee.
        Operations
            enqueue(x): Add item x to back
            dequeue(): remove and return fron item
            head(): return front item
            is_empty(): Is queue empty?
            Operations should take constant time


We will cover other ADTs including: priorirty queues, various types of trees, graphs
*/

int
main(int argc, char *argv[]) {

    printf("Schmorgoofol\n");

    return 0;
}
