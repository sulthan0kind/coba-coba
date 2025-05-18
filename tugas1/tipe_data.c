#include <stdio.h>

int main(){
    int angka = 10;
    char karakter = 'Z';
    float desimal = 3.114;
    char teks[] = "hello world";

    printf("Bilangan bulat: %d\n", angka);
    printf("Karakter %c\n", karakter);
    printf("Bilangan desimal: %.2f\n", desimal);
    printf("String: %s\n", teks);

    return 0;
}