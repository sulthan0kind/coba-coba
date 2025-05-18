#include "naryTree.h"

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("alokasi memori gagal\n");
        return NULL;
    }
    newNode->data = value;
    newNode->firstchild = NULL;
    newNode->nextchildren = NULL;
    return newNode;
}

void addChild(Node* parent, Node* child) {
    if (parent == NULL) return;

    if (parent->firstchild == NULL) {
        parent->firstchild = child;
    } else {
        Node* temp = parent->firstchild;
        while (temp->nextchildren != NULL) {
            temp = temp->nextchildren;
        }
        temp->nextchildren = child;
    }
}

void printTree(Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    printTree(root->firstchild);
    printTree(root->nextchildren);
}

void searchTree(Node* root, int value, int depth) {
    if (root == NULL) return;

    if (root->data == value) {
        printf("Value %d ditemukan pada depth %d\n", value, depth);
        return;
    }
    searchTree(root->firstchild, value, depth + 1);
    searchTree(root->nextchildren, value, depth);
}

void freeTree(Node* root) {
    if (root == NULL) return;

    freeTree(root->firstchild);
    freeTree(root->nextchildren);
    free(root);
}
