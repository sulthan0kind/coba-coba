#include <stdio.h>
#include <math.h>

double m, c;

// Fungsi integral analitik dari (mx + c)^2
double integralAnalitik(double x) {
    return (m * m * x * x * x) / 3 + (m * c * x * x) + (c * c * x);
}

// Hitung volume menggunakan metode analitik
double hitungVolume(double x1, double x2) {
    return M_PI * (integralAnalitik(x2) - integralAnalitik(x1));
}

// Hitung volume tabung jika y1 == y2
double hitungVolumeTabung(double x1, double x2, double y) {
    double tinggi = x2 - x1;
    return M_PI * y * y * tinggi;
}

int main() {
    double x1, y1, x2, y2;
    
    // Memasukkan input satu per satu
    printf("Masukkan x1: ");
    scanf("%lf", &x1);
    printf("Masukkan y1: ");
    scanf("%lf", &y1);
    printf("Masukkan x2: ");
    scanf("%lf", &x2);
    printf("Masukkan y2: ");
    scanf("%lf", &y2);

    // Cek apakah x1 dan x2 valid
    if (x1 == x2) {
        printf("Error: x1 dan x2 tidak boleh sama (garis vertikal tidak valid)\n");
        return 1;
    }

    // Jika y1 == y2, langsung hitung sebagai tabung
    if (y1 == y2) {
        double volumeTabung = hitungVolumeTabung(x1, x2, y1);
        printf("Bentuk adalah tabung dengan volume: %.6f cm³ (%.6f ml)\n", volumeTabung, volumeTabung);
        return 0;
    }

    // Hitung nilai m dan c
    m = (y2 - y1) / (x2 - x1);
    c = y1 - m * x1;

    // Debugging: Tampilkan nilai m dan c
    printf("Persamaan garis: y = %.6f x + %.6f\n", m, c);

    // Hitung volume
    double volume = hitungVolume(x1, x2);

    // Debugging: Cek nilai integral sebelum menghitung volume
    printf("IntegralAnalitik(x2) = %.6f\n", integralAnalitik(x2));
    printf("IntegralAnalitik(x1) = %.6f\n", integralAnalitik(x1));

    // Tampilkan hasil akhir
    printf("Volume rotasi dari x=%.2f sampai x=%.2f: %.6f cm³ (%.6f ml)\n", x1, x2, volume, volume);

    return 0;
}
