#ifndef STACK_H
#define STACK_H

#define MAX 5  // Ukuran maksimum Stack

typedef struct {
    int data[MAX];
    int top;
} Stack;

void inisialisasiStack(Stack *s);
int apakahKosong(Stack *s);
int apakahPenuh(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
int peek(Stack *s);
void tampilkanStack(Stack *s);
int jumlahElemen(Stack *s);

#endif

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

#include <stdio.h>
#include "stack.h"

int main() {
    Stack s;
    inisialisasiStack(&s);

    push(&s, 60);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);
    tampilkanStack(&s);

    printf("Elemen teratas: %d\n", peek(&s));
    printf("Jumlah elemen: %d\n", jumlahElemen(&s));

    printf("%d dihapus dari Stack.\n", pop(&s));
    tampilkanStack(&s);

    return 0;
}
