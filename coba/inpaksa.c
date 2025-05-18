#include <stdio.h>

int main() {
    int angka = 10;
    int *ptr = (int *) 3;  // Memaksa pointer untuk menyimpan alamat 1000

    printf("Nilai ptr: %p\n", ptr);
    printf("Nilai yang ditunjuk ptr: %d\n", *ptr); // Ini bisa menyebabkan error!

    return 0;
}
