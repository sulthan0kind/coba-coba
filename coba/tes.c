#include <stdio.h>
#include <stdlib.h>  // Untuk malloc() dan free()

int main() {
    int *arr;
    int size = 5;  // Ukuran array

    // Alokasi memori sebesar 'size' elemen
    arr = (int*)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Alokasi gagal!\n");
        return 1;
    }

    // Mengisi nilai ke dalam array
    for (int i = 0; i < size; i++) {
        *(arr + i) = i + 1;  // Mengisi nilai 1, 2, 3, 4, 5
    }

    // Menampilkan nilai
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }

    free(arr);  // Bebaskan memori setelah digunakan

    return 0;
}
