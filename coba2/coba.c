#include<stdio.h>
#include<stdlib.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

void initialize(Stack *s) {
    s->top = -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        return;
    }
    s->data[++(s->top)] = value;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->data[(s->top)--];
}

int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->data[s->top];
}

int main() {
    Stack s;
    initialize(&s);

    push(&s, 40);
    push(&s, 30);
    push(&s, 9);
    push(&s, 10);
    push(&s, 20);
    push(&s, 50);

    printf("Top element is %d\n", peek(&s));
    printf("Popped element is %d\n", pop(&s));
    printf("Popped element is %d\n", pop(&s));
    printf("Popped element is %d\n", pop(&s));
    printf("Popped element is %d\n", pop(&s));
    printf("Popped element is %d\n", pop(&s));

    return 0;
}