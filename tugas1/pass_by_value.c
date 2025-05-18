#include <stdio.h>

int ubahNilai(int x) {
    x = 100;
    return x;
}

int main() {
    int a = 10;
    printf("Sebelum: %d\n", a);
    printf("Setelah: %d\n", ubahNilai(a));  
    printf("Nilai asli: %d\n", a); 
    return 0;
}
