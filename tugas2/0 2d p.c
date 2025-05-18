#include <stdio.h>

int main() {
    int matriks[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int (*ptr)[3] = matriks;  // Pointer menunjuk ke baris pertama dari matriks

    printf("Elemen [1][2]: %d\n", ptr[1][2]);  // Output: 6

    return 0;
}
