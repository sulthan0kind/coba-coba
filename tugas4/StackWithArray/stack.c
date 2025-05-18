#include "stack.h"

void inisialisasiStack(Stack *s, int kapasitasAwal) {
    s->capacity = kapasitasAwal;
    s->top = -1;
    s->data = (int *)malloc(s->capacity * sizeof(int));
}

int apakahKosong(Stack *s) {
    return s->top == -1;
}

void perbesarStack(Stack *s) {
    s->capacity *= 2;
    s->data = (int *)realloc(s->data, s->capacity * sizeof(int));
    printf("Kapasitas Stack diperbesar menjadi %d\n", s->capacity);
}

void push(Stack *s, int value) {
    if (s->top == s->capacity - 1) {
        perbesarStack(s);
    }
    s->data[++s->top] = value;
    printf("%d berhasil ditambahkan ke Stack.\n", value);
}

int pop(Stack *s) {
    if (apakahKosong(s)) {
        printf("Stack kosong! Tidak ada elemen untuk dihapus.\n");
        return -1;
    }
    return s->data[s->top--];
}

int peek(Stack *s) {
    if (apakahKosong(s)) {
        printf("Stack kosong!\n");
        return -1;
    }
    return s->data[s->top];
}

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

void hapusStack(Stack *s) {
    free(s->data);
    printf("Memori Stack telah dibebaskan.\n");
}
