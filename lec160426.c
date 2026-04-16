#include <stdio.h>
#include <stdlib.h>

/*
Lecture 11: Sorting with Divide and Conquer, Neil Marchant
Last lecture for this section

Merge sort and Quick Sort.

Selection sort is Theta(n^2) which is slow for large databases, now we'll see some divide and conquer solutions
(That are better than Theta(n^2))

Merge sort does most of the work in the combine step
Quick sort does most of the work in the divide step


Merge Sort

TO sort an array or Linked List:
    1. Divide it into two halves.
    2. Sort (conquer) each half recursively
    3. Merge (combine) the sorted results

func MergeSort(A[0,...,n-1])
    if n > 1 then
        copy A[0, n/2 - 1] to B[0, n/2 - 1] // Divide
        copy A[n/2, n-1] to C[0, n/2 - 1]
        mergesort(B) // Conque
        mergesort(C)
        merge(B,C,A) // Combine

func Merge(B[0,p-1], C[0,q-1], A[0,p+q - 1])
    i = j = k = 0
    while i < p, and j < q do
        if B[i] <= C[j] then
            A[k] <- B[i]
            i <- i+1
        else
            A[k] <- C[j]
            j <- j+1
        k <- k+1
    if i = p then copy C[j, q-1] to A[k, p+q-1]
    else copy B[i, p-1] to A[k, p+q-1]

    Theta (n log n)

    Quick sort

    func QuickSort(A[lo, hi])
        if lo<hi then
            s <- Partition(A[lo, hi]) // Divide
            quicksort(A[lo, s-1]) // Conquer
            quicksort(A[s+1, hi])

    No divide step like mergesort

    One standard method is Hoare's two-pointer partitioning:
        Choose a pivot, here the first element
        Scan inward from both ends to find misplaced elements
        Swap them; when the pointers cross, put the pivot into place

    func Partition(A[lo,hi])
        p <- A[lo]; i<- lo, j<-hi+1
        while true do
            repeat i <- j+1 until A[i] >= p or i = hi
            repeat j <- j -1 until A[j] <= p
            if i>=j then break
            swap(A[i],A[j])
        swap(A[lo],A[j])
        return j

    Notice:
        i scans from the left and j scans from the right
        when i<j we swap the misplaced elements
        when i>=j, we stop and place the pivot

Median of three for picking the pivots, as picking the first element leads to time complexity n^2

Problem, recursive calls have overhead. For very small sub-arrays (e.g. < 10 elements), a simple algorithm like insertion sort is actually faster

function sort(A[lo,hi])
    quickalmostsort(A[lo][hi])
    insertionsort(A[lo][hi])

function quickalmostsort(A[lo,hi])
    if lo+10 < hi then
        s<-partition(A[lo][hi])
        quickalmostsort(A[lo,s-1])
        quickalmostsort(A[s+1,hi])

Quicksort is fast in practice

Method of choice for in-memory array sorting due to cache-friendly access and a tight inner loop in Partition

Less suitable for non-random-access structures (e.g.) linked lists

Partition is in place so space required is mainly for the recursion stack:
    Theta(log n) on average Theta(n) in the worst case
                    Best    Worst   Average Stable  Inplace
Selection sort      n^2     n^2     n^2     no      yes
Insertion sort      n       n^2     n62     no      yes
Bubble sort         n       n^2     n^2     yes     yes
Mergesort           n log n n log n n log n yes     no*
Quicksort           n log n n^2     n log n no      yes**

* For the array verstion shown here, merging requires auxillary memory
** Ifnorning recursion stack space

*/


int main(int argc, char *argv[]) {
    printf("Guarantees AUGGHGHGGH\n");
    return 0;
}

int *mergesort(int* A, int n) {
    
    int odd;
    if (n % 2 == 0) {
        odd = 0;
    } else {
        odd = 1;
    }
    int* B = (int*)malloc(sizeof(int) * (n/2) + odd);
    int* C = (int*)malloc(sizeof(int) * n/2);

    int bi = 0, ci = 0;
    for (int i = 0; i < n; i++) {
        if (i < n/2 + odd) {
            B[bi] = A[i];
            bi++;
        } else {
            C[ci] = A[i];
            ci++;
        }

    }

    mergesort(B, bi);
    mergesort(C, ci);

    merge(B, C, A, n);
    
    return A;
}

void merge(int* B, int* C, int* A, int n) {
    int i = 0, j = 0, k = 0;

    for ()


}

