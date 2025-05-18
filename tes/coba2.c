#include <stdio.h>
#include <stdlib.h>

// Struktur Node untuk Stack
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Struktur Stack
typedef struct {
    Node *atas; // Menunjuk ke elemen paling atas
} Stack;

// Inisialisasi Stack
void inisialisasi(Stack *s) {
    s->atas = NULL;
}

// Mengecek apakah Stack kosong
int kosong(Stack *s) {
    return s->atas == NULL;
}

// Menambahkan elemen ke Stack (Push)
void tambah(Stack *s, int nilai) {
    Node *simpulBaru = (Node *)malloc(sizeof(Node));
    if (simpulBaru == NULL) {
        printf("Gagal menambah elemen! Memori penuh.\n");
        return;
    }
    simpulBaru->data = nilai;
    simpulBaru->next = s->atas;
    s->atas = simpulBaru;
    printf("%d ditambahkan ke Stack.\n", nilai);
}

// Menghapus elemen dari Stack (Pop)
int hapus(Stack *s) {
    if (kosong(s)) {
        printf("Stack kosong! Tidak ada elemen untuk dihapus.\n");
        return -1;
    }
    Node *sementara = s->atas;
    int nilai = sementara->data;
    s->atas = sementara->next;
    free(sementara); // Hapus memori node yang di-pop
    printf("%d dihapus dari Stack.\n", nilai);
    return nilai;
}

// Melihat elemen paling atas (Peek)
int lihatAtas(Stack *s) {
    if (kosong(s)) {
        printf("Stack kosong!\n");
        return -1;
    }
    return s->atas->data;
}

// Menampilkan isi Stack
void tampilan(Stack *s) {
    if (kosong(s)) {
        printf("Stack kosong!\n");
        return;
    }
    printf("Isi Stack (dari atas ke bawah): ");
    Node *sekarang = s->atas;
    while (sekarang != NULL) {
        printf("%d ", sekarang->data);
        sekarang = sekarang->next;
    }
    printf("\n");
}

// Program utama
int main() {
    Stack s;
    inisialisasi(&s);

    tambah(&s, 10);
    tambah(&s, 20);
    tambah(&s, 30);
    tampilan(&s);

    printf("Elemen teratas: %d\n", lihatAtas(&s));

    hapus(&s);
    tampilan(&s);

    return 0;
}
