#include <stdio.h>

int main(){
    int angka;

    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

    if (angka > 0){
        printf("Angka ini adalah bilangan positif.\n");
    } else if (angka < 0) {
        printf("Angka ini adalah bilangan negatif.\n");
    } else {
        printf("Angka ini adalah nol.\n");
    }

    return 0;
}