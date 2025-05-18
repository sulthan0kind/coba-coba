#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 3;

    // Alokasi satu blok memori untuk seluruh array
    int (mat)[3] = (int ()[3])malloc(rows * sizeof(int[3]));

    // Mengisi matriks
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = i * cols + j + 1;
        }
    }

    // Menampilkan matriks
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Dealokasi memori
    free(mat);

    return 0;
}
