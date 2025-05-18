#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *items;
    int front;
    int rear;
    int size;
    int capacity;
} Queue;

Queue *Create();
int Size(Queue *q);
bool Empty(Queue *q);
int peek(Queue *q, bool *status);
void EnQueue(Queue *q, int value);
int DeQueue(Queue *q, bool *status);
void Destroy(Queue *q);
void Resize(Queue *q); 

int main() {
    Queue *q = Create();

    EnQueue(q, 25);
    EnQueue(q, 13);
    EnQueue(q, 30);
    EnQueue(q, 30);
    EnQueue(q, 15);

    printf("Ukuran queue: %d\n", Size(q));

    bool status;
    int frontValue = peek(q, &status);
    if (status) printf("Elemen depan: %d\n", frontValue);

    int dequeuedValue = DeQueue(q, &status);
    if (status) printf("Elemen yang dikeluarkan: %d\n", dequeuedValue);

    printf("Ukuran queue: %d\n", Size(q));

    Destroy(q);
    return 0;
}

Queue *Create() {
    Queue *q = malloc(sizeof(Queue));
    q->capacity = 2;
    q->items = malloc(q->capacity * sizeof(int));
    q->front = 0;
    q->rear = -1;
    q->size = 0;
    return q;
}

int Size(Queue *q) {
    return q->size;
}

bool Empty(Queue *q) {
    return (q->size == 0);
}

int peek(Queue *q, bool *status) {
    if (Empty(q)) {
        *status = false;
        return -1;
    }
    *status = true;
    return q->items[q->front];
}

void EnQueue(Queue *q, int value) {
    if (q->size == q->capacity) {
        Resize(q);
    }
    q->rear = (q->rear + 1) % q->capacity;
    q->items[q->rear] = value;
    q->size++;
}

int DeQueue(Queue *q, bool *status) {
    if (Empty(q)) {
        *status = false;
        return -1;
    }
    *status = true;
    int value = q->items[q->front];
    q->front = (q->front + 1) % q->capacity;
    q->size--;
    return value;
}

void Resize(Queue *q) {
    int newCapacity = q->capacity * 2;
    int *newItems = malloc(newCapacity * sizeof(int));

    for (int i = 0; i < q->size; i++) {
        newItems[i] = q->items[(q->front + i) % q->capacity];
    }

    free(q->items);
    q->items = newItems;
    q->front = 0;
    q->rear = q->size - 1;
    q->capacity = newCapacity;
}


void Destroy(Queue *q) {
    free(q->items);
    free(q);
}
