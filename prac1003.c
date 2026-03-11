
/*
Memory Pools
Static: Where gloval variables live, stable throughout run
stack, where local variables live, contiguoulosly allocated

Memory pools caveats
    C grants programmers the power of governing memory

    Overrstepping memory boundaries with consequences from throwing an error

Array times
Unsorted 
O(1)
O(n)
O(1)
O(n) the time to delete it takes O(1)
Insert an element to a specified point O(1)
Sorted
O(n + log n)
O(log n)
O(1)
O(n + log n)

Linked lists times
Singly sorted (head, data next, tail)
O(1)
O(1)
O(1)
O(n)
Doulby sorted (head, prev data next, tail)
O(1)
O(1)
O(1)
O(1)

Stacks (LIFO)
Unsorted array 
Push O(1), push to the end
Pop O(1), pop from the end

Singly Linked List
Push O(1) push to the head
Pop O(1) pop from the head

Queues (FIFO)
Unsorted array
Enqueue O(1), add to the end

Singly linked List
Enqueue O(1), add to the tail
Dequeue O(1), take the head
*/