#include <stdio.h>
#include <stdint.h>

int main() {
    int x = 100;
    int *ptr = &x; // Dapatkan alamat x

    // Simpan alamat sebagai angka
    uintptr_t addr = (uintptr_t)ptr;

    // Modifikasi alamat (contoh: tambahkan offset 4 byte)
    uintptr_t new_addr = addr + 4;
    int *new_ptr = (int *)new_addr;

    printf("Alamat awal: %p\n", (void *)ptr);
    printf("Alamat setelah ditambah offset: %p\n", (void *)new_ptr);

    return 0;
}
