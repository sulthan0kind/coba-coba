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

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Alokasi memori gagal\n");
        return NULL;
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void insertBinaryTree(Node** root, int value) {
    if (*root == NULL) {
        *root = createNode(value);
        return;
    }

    if ((*root)->left == NULL) {
        (*root)->left = createNode(value);
    } else if ((*root)->right == NULL) {
        (*root)->right = createNode(value);
    } else {

        insertBinaryTree(&((*root)->left), value);
    }
}

void printTree(Node* root, int level) {
    if (root == NULL) return;

    for (int i = 0; i < level; i++) {
        printf("   ");
    }
    printf("|-- %d\n", root->data);

    printTree(root->left, level + 1);
    printTree(root->right, level + 1);
}

int searchTree(Node* root, int value, int depth) {
    if (root == NULL) return 0;

    if (root->data == value) {
        printf("Value %d ditemukan pada depth %d\n", value, depth);
        return 1;
    }

    if (searchTree(root->left, value, depth + 1)) return 1;
    return searchTree(root->right, value, depth + 1);
}

void freeTree(Node* root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int main() {
    Node* root = NULL;

    int values[] = {42, 17, 88, 23, 8, 91, 56, 39, 75, 60};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; i++) {
        insertBinaryTree(&root, values[i]);
    }

    printf("Binary Tree :\n");
    printTree(root, 0);

    int searchVal = 8;
    printf("\nMencari value %d dalam tree:\n", searchVal);
    if (!searchTree(root, searchVal, 0)) {
        printf("Value %d tidak ditemukan dalam tree.\n", searchVal);
    }

    freeTree(root);
    return 0;
}
