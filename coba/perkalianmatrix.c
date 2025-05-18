#include <stdio.h>

#define ukuran 3  // Ukuran matriks

// Fungsi untuk mengalikan dua matriks menggunakan pointer
void perkalian(int (*a)[ukuran], int (*b)[ukuran], int (*result)[ukuran]) {
    for (int i = 0; i < ukuran; i++) {
        for (int j = 0; j < ukuran; j++) {
            result[i][j] = 0;  // Inisialisasi elemen hasil
            for (int k = 0; k < ukuran; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int A[ukuran][ukuran] = {{5, 7, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[ukuran][ukuran] = {{7, 2, 4}, {6, 5, 4}, {6, 5, 4}};
    int C[ukuran][ukuran]; // Matriks hasil

    // Memanggil fungsi perkalian matriks
    perkalian(A, B, C);

    // Menampilkan hasil
    printf("Hasil perkalian matriks:\n");
    for (int i = 0; i < ukuran; i++) {
        for (int j = 0; j < ukuran; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
