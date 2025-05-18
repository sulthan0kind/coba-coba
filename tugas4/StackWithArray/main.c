#include "stack.h"

int main() {
    Stack s;
    inisialisasiStack(&s, 2);

    push(&s,20);
    push(&s, 40);
    push(&s, 60);

    tampilkanStack(&s);

    printf("Elemen teratas: %d\n", peek(&s));

    printf("%d dihapus dari Stack.\n", pop(&s));
    tampilkanStack(&s);

    hapusStack(&s);
    return 0;
}
