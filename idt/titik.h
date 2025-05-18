#ifndef TITIK_H
#define TITIK_H

typedef struct {
    int x;
    int y;
} Titik;

void inisialisasiTitik(Titik *t, int x, int y);
void translasiTitik(Titik *t, int dx, int dy);
void tampilkanTitik(Titik t);

#endif
