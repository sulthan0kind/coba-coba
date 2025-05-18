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

int main() {
    Node* root = createNode(1);
    Node* node2 = createNode(2);
    Node* node3 = createNode(3);
    Node* node4 = createNode(4);
    Node* node5 = createNode(5);
    Node* node6 = createNode(6);
    Node* node7 = createNode(7);
    Node* node8 = createNode(8);
    Node* node9 = createNode(9);
    Node* node10 = createNode(10);
    Node* node11 = createNode(11);

    addChild(root, node2);
    addChild(root, node3);
    addChild(root, node4);
    addChild(node2, node5);
    addChild(node2, node6);
    addChild(node3, node7);
    addChild(node4, node8);
    addChild(node4, node9);
    addChild(node9, node10);
    addChild(node9, node11);

    printf("Tree n-ary :\n");
    printTree(root);

    printf("\n");
    searchTree(root,8,0);

    freeTree(root);
    return 0;
}