#include <stdio.h>

int main() {
    int a = 42;
    int *ptr = &a;

    printf("Alamat a: %p\n", &a);
    printf("Alamat yang disimpan di ptr: %p\n", ptr);
    printf("Nilai dari a melalui ptr: %d\n", *ptr);
    
    return 0;
}
