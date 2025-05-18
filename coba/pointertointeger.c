#include <stdio.h>

int main() {
    int x = 10;   // Variabel integer
    int *ptr = &x; // Pointer menyimpan alamat dari x

    printf("Nilai x: %d\n", x);
    printf("Alamat x: %p\n", &x);
    printf("Nilai ptr (alamat x): %p\n", ptr);
    printf("Nilai yang ditunjuk ptr: %d\n", *ptr);

    return 0;
}
