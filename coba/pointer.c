#include <stdio.h>

int main() {
    int angka = 10;  // Variabel biasa
    int *ptr = &angka;  // Pointer menyimpan alamat dari variabel angka

    printf("Nilai angka: %d\n", angka);
    printf("Alamat angka: %p\n", &angka);  // Menampilkan alamat angka
    printf("Nilai pointer: %p\n", ptr);  // Pointer menyimpan alamat angka
    printf("Nilai yang ditunjuk pointer: %d\n", *ptr);  // Mengakses nilai dari alamat yang ditunjuk pointer

    *ptr = 20; // Mengubah nilai angka melalui pointer

    printf("Nilai angka setelah diubah: %d\n", angka); // Akan mencetak 20
    printf("Alamat angka: %p\n", &angka);  // Menampilkan alamat angka
    printf("Nilai pointer: %p\n", ptr);  // Pointer menyimpan alamat angka
    printf("Nilai yang ditunjuk pointer: %d\n", *ptr);

    return 0;
}
