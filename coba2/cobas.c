#include <stdio.h>

#define MAX 5  // Ukuran maksimum stack

typedef struct {
    int data[MAX];
    int top;
} Stack;

// Inisialisasi stack
void initStack(Stack *s) {
    s->top = -1; // Artinya stack masih kosong
}

// Mengecek apakah stack kosong
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Mengecek apakah stack penuh
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Menambahkan elemen ke stack (PUSH)
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack penuh! Tidak bisa menambah elemen.\n");
        return;
    }
    s->top++;  // Geser posisi top ke atas
    s->data[s->top] = value;  // Simpan data di posisi top
    printf("%d berhasil ditambahkan ke stack.\n", value);
}

// Menghapus elemen dari stack (POP)
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack kosong! Tidak ada elemen untuk dihapus.\n");
        return -1;
    }
    int value = s->data[s->top]; // Simpan data yang akan dihapus
    s->top--;  // Geser posisi top ke bawah
    printf("%d berhasil dihapus dari stack.\n", value);
    return value;
}

// Menampilkan isi stack
void display(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack kosong!\n");
        return;
    }
    printf("Isi Stack: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

int main() {
    Stack s;
    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);
    display(&s);

    pop(&s);
    display(&s);

    return 0;
}
