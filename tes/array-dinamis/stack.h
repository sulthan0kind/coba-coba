#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int top;
    int capacity;
} Stack;


void inisialisasiStack(Stack *s, int kapasitasAwal);
int apakahKosong(Stack *s);
void perbesarStack(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
int peek(Stack *s);
void tampilkanStack(Stack *s);
void hapusStack(Stack *s);

#endif
