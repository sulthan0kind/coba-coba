#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a; // Pointer ptr menyimpan alamat dari a
    
    printf("Nilai a melalui pointer: %d\n", *ptr);
    return 0;
}
