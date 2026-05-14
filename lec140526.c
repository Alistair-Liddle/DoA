#include <stdio.h>
#include <stdlib.h>

/*
Binary search trees and AVL trees

Computing height in theta(n) time
preorder, postorder, inorder traversal
level order traversal using a queue

Dictionary implementations

The main operations are:
    search
    insert
    delete

A binary search tree is a binary tree where for ever node v
    all keys in the left subtree are less than v
    all keys in the right subtree are greater than v
This property must hold recursively in every subtree.

for tree [10, 5, 20, 3, 7, 12, 25]

Preorder: root, left, right
    10 5 3 7 20 12 25
Inorder: left, root, right
    3 5 7 10 12 20 25
Postorder: left, right, root
    3 7 5 12 25 20 10

While inorder sorts, post and pre order still have a use
Preorder is useful when copying or serialising a tree
Postorder is useful for deleting or freeing a tree

Search runtime is Theta(h) where h is the height which in a good tree will be log n
Insertion is the same has searching except once the last node on the path is found we insert it at either the left or right node

Deletion:
    Leaf
        Delete the node itself
        Only the pointer to the leaf needs to be edited
    1 Child
        Move the child up, the parent of the 1 child node now points to the child
    2 Children
        Replace its key with the inorder successor, then delete the old successor
        The successor will always be either a leaf case or a 1 child case

Balanced tree, height in Theta(log n)
Degenerate tree, height in Theta(n)

How can we avoid degeneracy
Self balancing trees
    Keep the bst ordering rule, but repair the shape after updates
    AVL trees
    red-black trees
    splay trees
Change the representation
    Use nodes that can hold multiple keys or have multiple children
    2,3 trees
    2,3,4 trees

An AVL tree is a BST with a strict local height-balance rule.
    AVL balance condition
        For every node v, the height of its left and right subtrees differ by at most one
        |height(v.left)-height(v.right)| <= 1

    Leaves have a balance factor of 0

AVL updates

AVL search is exactly the same as BST search
Insertion and deletion also begin as orderinary BST updates:
    1. Search for the key position using the BST ordering rule.
    2. Perform the usual BST update:
        Insertion: add the new key where the search stops
        Deletion: use the usual leaf, one child, two child BST case
    3. Walk back up the search path and recompute heights and balance factors

Repairing an AVL tree
    Rotations to fix
    LL tree -> Right (R) rotation
    RR tree -> Left (L) rotation
    LR tree -> L rotation at child, then R rotation at root
    RL tree -> R rotation at child, then L rotation at root

*/


int main(int argc, char* argv[]) {

    if (argc < 2) {
        printf("Put a number in the cli idiot\n");
        exit(EXIT_FAILURE);
    }

    int n = atoi(argv[1]);

    if (n<=0) {
        printf("Ask for a real delivery next time\n");
        exit(EXIT_FAILURE);
    }
    
    for (int i = 0; i<n; i++) {
        printf(":3\n");
    }
    printf("There's the %d :3's you asked for, for some reason\n", n);
    return 0;
}