#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* firstchild;
    struct Node* nextchildren;
} Node;

Node* createNode(int value);

void addChild(Node* parent, Node* child);

void printTree(Node* root);

void searchTree(Node* root, int value, int depth);

void freeTree(Node* root);