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
