#include <stdio.h>

struct mahasiswa {
    char nama[50];
    int umur;
    float ipk;
};

int main(){
    struct mahasiswa mhs = {"Nurliasta Jayanti", 18, 3.56};

    printf("Data Mahsiswa:\n");
    printf("Nama: %s\n", mhs.nama);
    printf("Umur: %d\n", mhs.umur);
    printf("IPK: %.2f\n", mhs.ipk);

    return 0;
}