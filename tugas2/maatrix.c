/** Konsep dasar matriks
 * int mat[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

 */
// ------------------------------------------------------------------------------------------------
 /** Pointer untuk mengakses matriks
  * #include <stdio.h>

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int *ptr = &mat[0][0];  // Pointer ke elemen pertama matriks

    // Menampilkan elemen menggunakan pointer
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(ptr + i * 3 + j)); // Menggunakan aritmatika pointer
        }
        printf("\n");
    }

    return 0;
}

  */
// ------------------------------------------------------------------------------------------------
/** Pointer ke baris matriks
 * #include <stdio.h>

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int (*p)[3] = mat;  // Pointer ke array dengan 3 elemen per baris

    printf("Elemen di baris ke-1, kolom ke-2: %d\n", p[0][1]); // Output: 2

    return 0;
}

 */
// ------------------------------------------------------------------------------------------------
 /** pointer ke pointer
  * #include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 3;
    
    // Alokasi array pointer
    int **mat = (int **)malloc(rows * sizeof(int *));
    
    // Alokasi setiap baris
    for (int i = 0; i < rows; i++) {
        mat[i] = (int *)malloc(cols * sizeof(int));
    }

    // Mengisi matriks
    int count = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = count++;
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
    for (int i = 0; i < rows; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}

  */
// ------------------------------------------------------------------------------------------------
/** Pointer ke matriks parameter fungsi
 * #include <stdio.h>

void printMatrix(int (*mat)[3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
// ------------------------------------------------------------------------------------------------
int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printMatrix(mat, 3);

    return 0;
}

 */