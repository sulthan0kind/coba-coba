#include <stdio.h>  
#include <stdlib.h> 

// 1️⃣ Struktur Node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// 2️⃣ Fungsi buat node baru
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
    newNode->data = value;
    newNode->left = NULL;  
    newNode->right = NULL; 
    return newNode;
}

int main() {
    // 3️⃣ Buat Pohon
    struct Node* root = createNode(1);   

    // 4️⃣ Tambah cabang ke root
    root->left = createNode(2);          
    root->right = createNode(3);         

    // 5️⃣ Tambah cabang ke node 2
    root->left->left = createNode(4);    
    root->left->right = createNode(5);   

    // 6️⃣ Tambah cabang ke node 3
    root->right->left = createNode(6);   
    root->right->right = createNode(7);  

    root->left->left->left = createNode(8);

    // 7️⃣ Cetak hasilnya
    printf("Akar: %d\n", root->data);
    printf("Anak kiri dari 1: %d\n", root->left->data);
    printf("Anak kanan dari 1: %d\n", root->right->data);
    printf("Anak kiri dari 2: %d\n", root->left->left->data);
    printf("Anak kanan dari 2: %d\n", root->left->right->data);
    printf("Anak kiri dari 3: %d\n", root->right->left->data);
    printf("Anak kanan dari 3: %d\n", root->right->right->data);

    if (root->left->left->left != NULL)
        printf("Anak kiri dari 4: %d\n", root->left->left->left->data);
    else
        printf("Anak kiri dari 4 kosong\n");

    if (root->left->left->right == NULL)
    printf("Anak kanan dari 4 : kosong (NULL)\n");
else
    printf("Anak kanan dari 4: %d\n", root->left->left->right->data);


    return 0;
}
