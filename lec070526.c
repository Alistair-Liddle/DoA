#include <stdio.h>

/*
Lecture 16 Sorting with Transofrm-and-Conquer (Heapsort)

Selection Sort brute force Theta(n^2)

Mergesort: divide and conquer Theta(nlogn), extra O(n) memory

Quicksort: divide and conquer - Average Theta(n log n) worst case n^2

A heap is a binary tree with three properties
    1. Binary - at most two children per node
    2. Complete - Every level is full except possible the last, where missing nodes are on the right
    3. Parental dominance (max-heap) - every parent's key is >= each child's key

Min-heap variant
    Min hepas reverse parental dominance

Heap as array (level order)
    Because the heap is complete we can store it level by level in an array
    Indexing rules
        Parent of i: [floor(i/2)]
        Children of i: 2i and 2i+1

Heap properties 1 indexed
    Maximum is at the root
    Tree height is log 2 n
    Last parent sits at n/2
    Subtree property
        Any node together with all its descendants is itself a heap

Heapsort: The plan
    func Heapsort(A[])
        HeapBottomUp(A[]) - Step 1: heapify (construct a heap)
        for i<-n downto 2 do
            EJECT(A[]) - Step 2: n-1 ejects

Heapify two approaches
    Top down
        Insert each new key in the next available leaf position
        then move it upward while it is larger than its parent
        One insertion may move up several levels, possible all the way to the root
        Since a heap as heigh log 2 n, one insertion can take O(log n) time
        Repeating this for all n keys gives O(n log n) time
            For [2,7,8,5,3,9]
            [2], [2,7], [7,2], [7,2,8] [8,2,7], [8,2,7,5], [8,5,7,2], [8,5,7,2,3], [8,5,7,2,3,9]
            [8,5,9,2,3,7], [9,5,8,2,3,7]
    Bottom up
        Leaves are already valid 1-node heaps, so we do not need to process them.
        The last parent is at index [n/2]
        Process the parents from [n/2] down to 1
        At each parent, move its key down until the subtree becomes a heap
            For [2,7,8,5,3,9]
            [2,7,9,5,3,8], [9,7,2,5,3,8] [9,7,8,5,3,2]
        func BottomUp(A[])
            for i <- [n/2] down to 1 do
                k<-i,v<-A[k]    
                heap<-false
                while not heap and 2k<=n do
                    j<-2k
                    if j<n then
                        A[j]<A[j+1] then j<j+1
                    if v>=A[j]
                        heap<-True
                    else
                        A[k]<-A[j]; k<-j
                A[k] <- v
        It is O(n) time as work is concentrated near the top

Eject
    [] [9,7,8,5,3,2], [9] [8,7,2,5,3], [9,8] [7,5,2,3], [9,8,7] [5,3,2], [9,8,7,5] [3,2], [9,8,7,5,3] [2], [9,8,7,5,3,2], []

Heapsort cost O(n) + O(n log n) on average O(n log n)

Heapsort properties
    Not stable

*/

typedef struct {
    int* A;
    int n;
} intA_t;

void heapsort(intA_t* A);

int main(int argc, char** argv) {
    printf("I fucked the MST but I didn't fuck the project :3\n");
    printf("Enter\n");
    return 0;
}

void heapsort(intA_t* A) {

}