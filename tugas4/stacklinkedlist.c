#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* top;
} Stack;

void initStack(Stack *s) {
    s->top = NULL;
}

void push(Stack *s, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memori penuh! Tidak dapat menambahkan elemen.\n");
        return;
    }
    newNode->data = value;
    newNode->next = s->top;
    s->top = newNode;
}

int pop(Stack *s) {
    if (s->top == NULL) {
        printf("Stack kosong! Tidak ada elemen untuk dihapus.\n");
        return -1;
    }
    Node* temp = s->top;
    int value = temp->data;
    s->top = temp->next;
    free(temp);
    return value;
}

int peek(Stack *s) {
    if (s->top == NULL) {
        printf("Stack kosong! Tidak ada elemen yang dapat dilihat.\n");
        return -1;
    }
    return s->top->data;
}

void display(Stack *s) {
    if (s->top == NULL) {
        printf("Stack kosong!\n");
    } else {
        Node* current = s->top;
        printf("Isi Stack: ");
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}

int main() {
    Stack s;
    initStack(&s);
    
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    
    printf("Setelah Push:\n");
    display(&s);
    
    printf("Elemen yang di-pop: %d\n", pop(&s));
    
    printf("Setelah Pop:\n");
    display(&s);
    
    printf("Elemen teratas: %d\n", peek(&s));
    
    return 0;
}
