#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer menunjuk ke elemen pertama

    printf("Nilai pertama: %d\n", *ptr);
    ptr++;  // Pindah ke elemen berikutnya
    printf("Nilai kedua: %d\n", *ptr);
    ptr--;  // Kembali ke elemen pertama
    printf("Kembali ke nilai pertama: %d\n", *ptr);

    return 0;
}
