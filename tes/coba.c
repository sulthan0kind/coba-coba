#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Ukuran maksimum Stack

typedef struct {
    int data[MAX];
    int top;
} Stack;

// Inisialisasi Stack
void inisialisasiStack(Stack *s) {
    s->top = -1;
}

// Mengecek apakah Stack kosong
int apakahKosong(Stack *s) {
    return s->top == -1;
}

// Mengecek apakah Stack penuh
int apakahPenuh(Stack *s) {
    return s->top == MAX - 1;
}

// Menambahkan elemen ke Stack (Push)
void tambahKeStack(Stack *s, int value) {
    if (apakahPenuh(s)) {
        printf("Stack penuh! Tidak bisa menambah elemen.\n");
        return;
    }
    s->top++;
    s->data[s->top] = value;
    printf("%d berhasil ditambahkan ke Stack.\n", value);
}

// Menghapus elemen dari Stack (Pop)
int hapusDariStack(Stack *s) {
    if (apakahKosong(s)) {
        printf("Stack kosong! Tidak ada elemen untuk dihapus.\n");
        return -1;
    }
    int value = s->data[s->top];
    s->top--;
    printf("%d berhasil dihapus dari Stack.\n", value);
    return value;
}

// Melihat elemen paling atas tanpa menghapusnya
int lihatTeratas(Stack *s) {
    if (apakahKosong(s)) {
        printf("Stack kosong!\n");
        return -1;
    }
    return s->data[s->top];
}

// Menampilkan isi Stack
void tampilkanStack(Stack *s) {
    if (apakahKosong(s)) {
        printf("Stack kosong!\n");
        return;
    }
    printf("Isi Stack (dari atas ke bawah):\n");
    for (int i = s->top; i >= 0; i--) {
        printf("%d\n", s->data[i]);
    }
}

// Menampilkan jumlah elemen dalam Stack
int jumlahElemen(Stack *s) {
    return s->top + 1;
}

// Program utama
int main() {
    Stack s;
    inisialisasiStack(&s);

    tambahKeStack(&s, 10);
    tambahKeStack(&s, 20);
    tambahKeStack(&s, 30);
    tampilkanStack(&s);

    printf("Elemen teratas: %d\n", lihatTeratas(&s));
    printf("Jumlah elemen: %d\n", jumlahElemen(&s));

    hapusDariStack(&s);
    tampilkanStack(&s);

    return 0;
}
