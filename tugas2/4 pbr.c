#include <stdio.h>

void ubahNilai(int *x) {
    *x = 100;  // Mengubah nilai asli melalui pointer
}

int main() {
    int a = 10;
    printf("Sebelum fungsi: %d\n", a);

    ubahNilai(&a); // Mengirim alamat memori a

    printf("Setelah fungsi: %d\n", a); // Nilai a berubah menjadi 100
    return 0;
}
