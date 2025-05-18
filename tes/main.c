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
