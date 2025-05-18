#include <stdio.h>
#include "stack.h"

int main() {
    Stack s;
    inisialisasi(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    tampilan(&s);

    printf("Elemen teratas: %d\n", peek(&s));

    pop(&s);
    tampilan(&s);

    // Hapus semua elemen sebelum program berakhir untuk mencegah memory leak
    hapusSemua(&s);

    return 0;
}
