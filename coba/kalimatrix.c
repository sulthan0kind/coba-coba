#include <stdio.h>

#define N 3  // Ukuran matriks

void kaliMatriks(int a[N][N], int b[N][N], int hasil[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < N; k++)
                hasil[i][j] += a[i][k] * b[k][j];
        }
}

void cetakMatriks(int m[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

int main() {
    int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[N][N];

    kaliMatriks(A, B, C);
    printf("Hasil perkalian matriks:\n");
    cetakMatriks(C);

    return 0;
}
