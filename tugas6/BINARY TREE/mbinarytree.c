#include "binarytree.h"

int main() {
    Node* root = NULL;

    int values[] = {42, 17, 88, 23, 8, 91, 56, 39, 75, 60};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; i++) {
        insertBinaryTree(&root, values[i]);
    }

    printf("Binary Tree:\n");
    printTree(root, 0);

    int searchVal = 8;
    printf("\nMencari value %d dalam tree:\n", searchVal);
    if (!searchTree(root, searchVal, 0)) {
        printf("Value %d tidak ditemukan dalam tree.\n", searchVal);
    }

    freeTree(root);
    return 0;
}
