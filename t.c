#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur pasien
typedef struct Patient {
    char name[50];
    int priority; // 1 = Red, 2 = Yellow, 3 = Green
    struct Patient* next;
} Patient;

// Head dari antrian pasien
Patient* head = NULL;

// Fungsi untuk membuat node pasien baru
Patient* createPatient(char name[], int priority) {
    Patient* newPatient = (Patient*)malloc(sizeof(Patient));
    strcpy(newPatient->name, name);
    newPatient->priority = priority;
    newPatient->next = NULL;
    return newPatient;
}

// Fungsi untuk menambahkan pasien ke antrian berdasarkan prioritas
void enqueue(char name[], int priority) {
    Patient* newPatient = createPatient(name, priority);
    
    // Jika antrian kosong atau pasien baru memiliki prioritas lebih tinggi dari head
    if (head == NULL || priority < head->priority) {
        newPatient->next = head;
        head = newPatient;
    } else {
        // Temukan posisi yang tepat dalam antrian
        Patient* temp = head;
        while (temp->next != NULL && temp->next->priority <= priority) {
            temp = temp->next;
        }
        newPatient->next = temp->next;
        temp->next = newPatient;
    }
}

// Fungsi untuk mengeluarkan pasien dengan prioritas tertinggi
void dequeue() {
    if (head == NULL) {
        printf("Antrian kosong!\n");
        return;
    }
    
    Patient* temp = head;
    printf("Pasien %s dengan prioritas %d ditangani.\n", temp->name, temp->priority);
    head = head->next;
    free(temp);
}

// Fungsi untuk menampilkan daftar pasien dalam antrian
void displayQueue() {
    if (head == NULL) {
        printf("Antrian kosong!\n");
        return;
    }
    
    Patient* temp = head;
    printf("Daftar Pasien dalam Antrian:\n");
    while (temp != NULL) {
        printf("Nama: %s, Prioritas: %d\n", temp->name, temp->priority);
        temp = temp->next;
    }
}

int main() {
    // Contoh input pasien
    enqueue("Alice", 2);  // Yellow
    enqueue("Bob", 1);    // Red
    enqueue("Charlie", 3); // Green
    enqueue("David", 1);  // Red
    
    // Menampilkan antrian sebelum dequeue
    displayQueue();
    
    // Mengeluarkan pasien dari antrian
    printf("\n--- Menangani Pasien ---\n");
    dequeue();
    dequeue();
    
    // Menampilkan antrian setelah dequeue
    printf("\n--- Antrian Setelah Penanganan ---\n");
    displayQueue();
    
    return 0;
}
