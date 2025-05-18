#ifndef STACK_H
#define STACK_H

// Struktur Node untuk Stack
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Struktur Stack
typedef struct {
    Node *atas;
} Stack;

// Deklarasi fungsi
void inisialisasi(Stack *s);
int kosong(Stack *s);
void push(Stack *s, int nilai);
int pop(Stack *s);
int peek(Stack *s);
void tampilan(Stack *s);
void hapusSemua(Stack *s);

#endif
