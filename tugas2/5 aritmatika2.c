#include <stdio.h>

int main() {
    int arr[] = {5, 15, 25, 35, 45};
    int *ptr = arr;  // Pointer ke elemen pertama

    printf("Elemen pertama: %d\n", *ptr);
    printf("Elemen ketiga: %d\n", *(ptr + 2)); // Maju 2 langkah ke arr[2]

    return 0;
}
