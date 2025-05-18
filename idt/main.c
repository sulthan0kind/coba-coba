#include <stdio.h>
#include "titik.h"

int main() {
    Titik t1;
    inisialisasiTitik(&t1, 2, 3);
    tampilkanTitik(t1);

    translasiTitik(&t1, 5, -2);
    tampilkanTitik(t1);

    return 0;
}
