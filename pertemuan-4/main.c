#include <stdio.h>
#include "stack.h"

int main() {
    Stack s;
    initStack(&s);

    push(&s, 80);
    push(&s, 30);
    push(&s, 0);
    push(&s, 80);
    push(&s, 70);

    printf("Top element is %d\n", peek(&s));
    printf("Popped element is %d\n", pop(&s));
    printf("Popped element is %d\n", pop(&s));
    printf("Popped element is %d\n", pop(&s));
    printf("Popped element is %d\n", pop(&s)); // This will show underflow

    return 0;
}