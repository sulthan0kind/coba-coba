#include <stdio.h>

void ubahNilai(int x) {
    x = 100;  // Hanya mengubah salinan, bukan nilai asli
}

int main() {
    int a = 10;
    printf("Sebelum fungsi: %d\n", a);

    ubahNilai(a); // Mengirim salinan nilai a

    printf("Setelah fungsi: %d\n", a); // Nilai a tetap 10
    return 0;
}
