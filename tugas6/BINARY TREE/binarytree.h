#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value);
void insertBinaryTree(Node** root, int value);
void printTree(Node* root, int level);
int searchTree(Node* root, int value, int depth);
void freeTree(Node* root);

#endif