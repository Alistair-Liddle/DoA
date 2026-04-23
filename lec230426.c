#include <stdio.h>
#include <stdlib.h>

/* 
Lecture 12, Hashing, Tawfiq Islam

Dictionaries
    Abstract Data Structure
        A collection of (key,value) pairs
            Keys are unique identifiers
            Values are the associated records - e.g. a student's enrolment data

    Required operations
        Search
            Find the 
        Insert
        Delete

    Time complexities
        Unsorted Array/Linked list
            Search
                Theta(n)
            Insert
                Theta(1)
            Delete
                Theta(n)
        Sorted Array
            Search
                Theta(log n)
            Insert
                Theta(n)
            Delete
                Theta(n)
        Goal of Hash tables is to average case
            Theta(1) for all 3 operations

    Hash tables
        A continuous data structure with m pre-allocated slots (indices 0 to m-1)
        A hash function h maps each key K to a slot index
            i.e. h(K) -> i in [0,m-1]
        A good hash function should:
            Run in Theta(1) time
            Distribute keys uniformaly across slots
        Example - Modular hashing
            With m = 7 H(k) = k mod m
                h(22) = 22 mod 7 = 1, h(35) = 35 mod 7 = 0


    Collisions
        A collision occurs when two distrinct kkeys hash to the same slot:
            H(K1) = H(K2) =/> K1=K2
        Collisions are unavoidable when n > m (pigeonhole principle)
        And likely even when n << m (birthday paradox)
        Two collision-resolution strategies
            Open hashing (seperate chaining)
            Closed hashing (Linear probing and Double Hashing)
        Load factor
            alpha = n/m (n keys stored in a table of size m).
                Practical performance depends heavily on alpha
    
    Seperate chaining
        Each slot holds a linked list of all keys that hash to it
            h(K) = K mod 7, Insert 35, 22, 10, 13, 29
            h(22) = 1, h(29) = 1 <- collision
        Average case cost 
            Successful search 1 + alpha/2
            Unsuccessful search alpha
        Worst case Theta(n) 
            Only with a bad hash function
        Trade off
            Simple and robust but requires extra memory
    
    Linear probing
        On a collision, scan forward for the next free slot (wrapping around).
            Example above h(22), h(29) slot 1 full, probe next slot, next slot open is at 2, insert at 2
        Average case
            Successful"
                1/2 (1 + 1 / (1-alpha))
            Unsuccessful
                1/2 ( 1 + 1 / (1-alpha)^2)
        Trade-off
            No additional memory overhead, but causes clustering and delete is virtually impossible
    
    Double Hashing
        Generalises linear probing: the step size is determined by a second hash function s(K)
        Probe sequence for key K:
            h(K) used, h(K) + s(K) mod m used, h(K) + 2s(K) mod m
        
    Rehashing
        As alpha grows, performing degrades sharply
            For linear probing keep alpha < 0.9
        Rehashing allocations a new table ~2x the size & reinserts all the keys using the new m
        Although rehashing is theta(n) it happens infrequently and complexity remains constant

    Choosing m
        Too small -> too many collisions
        Too large -> wasted memory
        Use a prime m for better uniformity

    Hashing strings
        Map each character to a number
            A = 0, B = 1, ...
        Treat the string as a base 32 number
        h(s) = \sum{|s|-1}{i=0} chr(s_i) * 32 ^ {|s| - i - 1}

        Example with MYKEY and m = 101:
            h(MYKEY) (12 * 32^4) + 24 * 32^3 + 10 * 32^2 + 4 * 32 + 24 mod 101
                = 13379736 mod 101 = 64
        So 64 is the position of string MYKEY in the hash table

    For long strings the intermediate value grows enormously
        Causes integer overflow
    
    Horner's Rule
        Rewrite the polynomial to avoid large powers
        32 * 32^ 10 + 4 * 32^9 + 17 * 32 ^ 8

        (...((21 * 32 + 4) * 32 + 17) * 32 + ...)

        Now utilize these properties of modular arithmetic:
            (x+y) mod m = ((x mod m) + (y mod m)) mod m
            (x*y) mod m = ((x mod m) * (y mod m)) mod m

        So for each sub-expression, it suffices to take values modulo m

        Example
            h(EY) = 4 * 32 + 24 mod m
            =

        
Python dict
    Open addressing with pseudo-random probing
    rehashes at alpha = 2/3

C++ unorderd_map
    Seperate chaining
    rehashes at alpha = 1

Limitiation vs BSTs
    Hash tables ignore key ordering. range quesries such as "all keys between 100 and 200" are efficient
    in a BST but not in a hash table

*/

int main(int argc, char* argv[]) {
    printf("Great Demon King Ganondorf");
    return 0;
}