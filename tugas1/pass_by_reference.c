#include <stdio.h>

void ubahNilai(int *x) {
    *x = 100;  
}

int main() {
    int a = 10;
    printf("Sebelum: %d\n", a);
    ubahNilai(&a);
    printf("Setelah: %d\n", a); 
    return 0;
}
