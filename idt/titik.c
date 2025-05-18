#include <stdio.h>
#include "titik.h"

void inisialisasiTitik(Titik *t, int x, int y) {
    t->x = x;
    t->y = y;
}

void translasiTitik(Titik *t, int dx, int dy) {
    t->x += dx;
    t->y += dy;
}

void tampilkanTitik(Titik t) {
    printf("Titik: (%d, %d)\n", t.x, t.y);
}
