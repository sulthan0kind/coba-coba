#include <stdio.h>

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Mengakses elemen matriks langsung dengan indeks
    printf("%d\n", mat[1][2]);  // Output: 6

    return 0;
}
