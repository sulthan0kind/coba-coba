#include <stdio.h>
#include <stdlib.h> // Diperlukan untuk malloc

int main() {
    int *ptr;  // Pointer untuk menyimpan alamat memori yang dialokasikan

    // Mengalokasikan memori sebesar 1 integer
    ptr = (int*) malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Alokasi memori gagal!\n");
        return 1;
    }

    *ptr = 42; // Mengisi nilai ke memori yang dialokasikan
    printf("Nilai yang disimpan: %d\n", *ptr);

    free(ptr); // Melepaskan memori yang telah dialokasikan
    return 0;
}