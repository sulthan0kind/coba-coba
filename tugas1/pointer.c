#include <stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Mengakses array menggunakan pointer:\n");
    for (int i = 0; i < 5; i++){
        printf("Elemen ke-%d: %d\n", i + 1, *(ptr + i));
    }
    return 0;
}