#include <stdio.h>

int main(){
    int pilihan;

    printf("Menu\n");
    printf("1. Kopi\n");
    printf("2. Teh\n");
    printf("3. Susu\n");
    printf("Pilih Minuman (1-3): ");
    scanf("%d", &pilihan);

    switch (pilihan){
    case 1:
        printf("Anda memilih Kopi.\n");
        break;
    case 2:
        printf("Anda memilih Teh.\n");
        break;
    case 3:
        printf("Anda memilih Susu.\n");
        break;
    default:
        printf("Pilihan tidak tersedia.\n");
    }
    return 0;
}