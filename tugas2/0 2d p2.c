#include <stdio.h>
#include <stdlib.h>

int main() {
    int baris = 2, kolom = 3;
    int **matriks;

    // Alokasi memori untuk baris
    matriks = (int**) malloc(baris * sizeof(int*));

    // Alokasi memori untuk kolom di setiap baris
    for (int i = 0; i < baris; i++) {
        matriks[i] = (int*) malloc(kolom * sizeof(int));
    }

    // Mengisi array
    int count = 1;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            matriks[i][j] = count++;
        }
    }

    // Menampilkan array
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }

    // Membebaskan memori
    for (int i = 0; i < baris; i++) {
        free(matriks[i]);
    }
    free(matriks);

    return 0;
}
