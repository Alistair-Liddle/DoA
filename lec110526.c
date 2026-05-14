#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/*
Lecture 17, Sorting by Counting

Tawfiq Islam

Counting sort

Comparison sorting algorithms only learn by asking questions, such as
    is A[i] < A[j]
If keys are drawn from a known and relatively small integer range, their values can be used
directly to

Suppose the keys are integers from a known range, but not ever possible key appears in the input
We can create an auxiliary array indexed by key value.
Scan the auxiliary array from left to right outputting only keys marked as present

Direct placement appears linear, but  this relies on strong assumptions about th einput:
    The keys are integer
    The smallest possible key l and the largest possible key u are known in advance
    The key range is relatively small, so the auxiliary array is feasible
    Each key appears at most once, so a key value identifies at most one output item.

The running time is Theta(n+k) where the key range has size k
This is useful when k is not too large compared with n

Direct placement no longer works when multiple items have the same key.
Problem
    The key value identifies the correct group in the sorted output, but not the exact position of each repeated item.

Distribution sort
    First count how many times each key appears. From these counts, we can work out where each group of equal keys shoul appear in the sorted output
    This does not compare the keys themselves but only the size of the output groups
    The distribution for a key is the number of inputs items less than or to that key.
    For example
    11 12 12 12 13 13
    The distribution for 12 is 4 because fore items are at most 12

    If the distribution for key 12 is 4, then the next 12 should be placed at position 4-1=3
        After placing it, the next 12 goes on position earlier

From distributions to array indices
We now connect the idea to the array notations used in the algorithm
Our input array is
    A[5] = [13, 11, 12, 13, 12, 12]


Attach labels to equal keys so that we can track their original order

Radix sort idea

Sort the numbers one digit at a time
*/

typedef struct {
    int* dp;
    int* prev;
} dp_t;

void init_dp_array(dp_t* A, int n);
void free_dp_array(dp_t* A);

int main(int argc, char* argv[]) {
    printf("A ghoul ");
    dp_t A;
    init_dp_array(&A,5);
    
    A.dp[1] = 5;
    printf("%d\n", A.dp[1]);
    free_dp_array(&A);
    return 0;
}

void init_dp_array(dp_t* A, int n) {
    A->dp = (int*)malloc(sizeof(int)*n);
    assert(A->dp);
    A->prev = (int*)malloc(sizeof(int)*n);
    assert(A->prev);
}

void free_dp_array(dp_t* A) {
    free(A->dp);
    A->dp=NULL;
    free(A->prev);
    A->prev=NULL;
}