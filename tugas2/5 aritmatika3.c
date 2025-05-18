#include <stdio.h>

int main() {
    int arr[] = {100, 200, 300, 400, 500};
    int *ptr1 = &arr[1]; // Menunjuk ke arr[1] (200)
    int *ptr2 = &arr[4]; // Menunjuk ke arr[4] (500)

    int selisih = ptr2 - ptr1; // Menghitung selisih elemen

    printf("Selisih elemen: %d\n", selisih);

    return 0;
}
