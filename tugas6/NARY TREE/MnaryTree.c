#include "naryTree.h"

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