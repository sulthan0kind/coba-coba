#include <stdio.h>
#include "stack.h"

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
void push(Stack *s, int value) {
    if (apakahPenuh(s)) {
        printf("Stack penuh! Tidak bisa menambah elemen.\n");
        return;
    }
    s->data[++s->top] = value;
    printf("%d berhasil ditambahkan ke Stack.\n", value);
}

// Menghapus elemen dari Stack (Pop)
int pop(Stack *s) {
    if (apakahKosong(s)) {
        printf("Stack kosong! Tidak ada elemen untuk dihapus.\n");
        return -1;
    }
    return s->data[s->top--];
}

// Melihat elemen paling atas tanpa menghapusnya (Peek)
int peek(Stack *s) {
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
