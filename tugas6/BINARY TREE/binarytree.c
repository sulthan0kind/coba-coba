#include "binarytree.h"

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
