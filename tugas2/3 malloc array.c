#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5, i;

    // Alokasi memori untuk array 5 elemen
    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Alokasi memori gagal!\n");
        return 1;
    }

    // Mengisi array dengan nilai
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Menampilkan isi array
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Melepaskan memori setelah digunakan
    return 0;
}
