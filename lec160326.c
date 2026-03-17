#include <stdio.h>
#include <stdlib.h>

/*
Lecture 4, 16th of March 2026, 11am, Neil Marchant

Analysis of algorithms

Solving recurrence relations

Annother approach using the limit L=lim n-> infty (t(n)/g(n))

You encounter three cases, 
L=0, therefore t(n) in O(g(n)), 
L in (0,infty), t(n) in Theta(g(n)), t and g have the the same asymptotic growth
L = infty, t(n) in Omega(g(n)), t is grows asymptotically faster than g

For t(n) = n(2+sin(n)) and g(n) = n,
1 <= L <= 3, as such c = 3 will upper bound the operation

You can use L'Hopital's rule, if 0/0 or infty/infty then you can use the limit of the derivatives
lim t(n)/g(n) = lim t`(n)/g`(n)

log2n vs sqrt(n), log2n=log2(e)loge(n)

function MaxElement(*A)
    max <- A[0]
    for i <- 1 to n-1 do
        if A[i] > max then
            max <- A[i]
    return max

the basic operation is (If A[i] > max then)

C(n) = Sigma(n-1)(i=1) 1 = n-1 in Theta(n)

function SelSort(*A)
    for i <- 0 to n-2 do
        min <- i
        for j <- i+1 to n-1 do
            if A[j] < A[min] then
                min <- j
        swap A[i] and A[min]

The basic operation is (if A[j] < A[min] then)

c(n) = Sigma (n-2)(i=0) Sigma (n-1)(j=i+1) 1 
= Sigma(n-2)(i=0) (n-1-(i+1)-1) = Sigma (n-2)(i=0) (n-1-i)
= Sigma(n-2)(i=0) (n-1) - Sigma(n-2)(i=0)i
= ((n-1)(n-1))/2 - Sigma(n-2)(i=0)i
= 

= n(n-1)/2 in Theta(n^2)

General Rule Sigma(k)

function MatrixMult(*A,*B)
    for i<-0 to n-1 do
        for j<-0 to n-1 do
            C[i,j] <- 0.0
            for k <- 0 to n-1 do
                C[i,j] <- C[i,j] + A[i,k] * B[k,j]
    return C

the basic operation is (A[i,k]*B[k,j])

C(n) = sigma(n-1)(i=0)sigma(n-1)(i=0)sigma(n-1)(i=0) 1
in Theta(n^3)

Efficiency of Recursive algorithms

The strategy is to setup and solve a recurrence relation for the cost.

Start with a simple example
function F(n)
    if n=0 then return 1
    else return F(n-1)*n

The basic operation is multiplication
We can express the recursive cost recursively as:

    C(0)=0                 } 
    C(n)=C(n-1)+1, for n>0 } Recurrence Relation

To find a closed form solution we try telescoping or backward substitution

Telescoping

Keep substituting the recurrence relation into itself
C(n-1)=C(n-2)+1
=...
=C(0)+1+...+1+1=n
Hence C(n) in Theta(n)

*A is sorted

function BinSearch(*A,lo,hi,key)
    if lo>hi then return-1
    mid <- lo + (hi-lo)/2
    if A[mid]=key then return mid
    else
        if A[mid] > key then
            return BinSearch(A,lo,mid-1,key)
        else return BinSearch(A,mid+1,hi,key)

The cost recursively in the worst case is

C(0)=0
C(n)=C(n/2)+1

A smoothness rule (SEE LEVITIN) allows us to assume that n is a power of 2.

C(n/2)=C(n/4)+1
C(n/4)=C(n/8)+1
...
C(n)=C(0)+1+1+1+1+...+1
at 1+log2n times <- MIGHT BE A PROBLEM WITH THE PLUS 1
Hence C(n) in Theta(logn)


Useful formulas and rules

Asymptotic growth heirarchy
f(n)<g(n) iff lim(n-infty)f(n)/g(n)=0

For 0<epsilon<1<c

1<logn<n^epsilon<n^c<n^logn<c^n<n^n

Little O-notation not examinable
    It is essentially the same as f(n) in o(g(n))

Logarithms have the same asymptotic rate of 
loga(n) = loga(b)*logb(n)

O(f(n))+O(g(n))=O(max{f(n),g(n)})
c*O(f(n))=O(f(n))
O(f(n))*O(g(n))=O(f(n)*g(n))

Multiplication is useful for nested for loops

n! = O(n^(n+1/2))

some useful sums (Levitin Appendix A, Appendix B goes over recurrence relations)
Sigma(n)(i=0)i^2 = (n/3)(n+1/2)(n+1)
Sigma(n)(i=0)(2i+1)=(n+1)^2 (sum of odd numbers)
Sigma(n)(i=0)1/i=O(logn)
Sigma(n)(k=0)x^k = (x^(n+1)-1)/(x-1)

The road ahead
Become familiar with asymptotic analysis as we use it on algorithms
We begin to study algorithms by looking at brute force algorithsm
*/ 

int
main(int argc, char *argv[]) {

    printf("Schmorgoofol");

    return 0;
}