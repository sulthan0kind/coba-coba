#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


    typedef struct Node {
        int value;
        struct node *link;
    } Node;

    typedef struct {
        Node* head;
        Node* tail;
    int size;
    } Queue;

    Queue *Create();
    int Size(Queue *q);
    bool Empty(Queue *q);
    int peek(Queue *q,bool *status);
    void EnQueue(Queue *q,int value);
    int DeQueue(Queue *q,bool *status);
    void Destroy(Queue *q);


    int main (){
    Queue *q = Create();

    if (Empty(q)) printf ("kosong bosku");


    return 0;

    }

    Queue *Create(){
        Queue *q = malloc(sizeof(Queue));
        q->head =  NULL;
        q->tail = NULL;
        q->size=0;

        return q;
    }

    int Size(Queue *q){
        return q->size;
    }
    bool Empty(Queue *q){
        return (q -> size == 0);
    }
    int peek(Queue *q,bool *status){
         if (Empty(q)){
            *status = false;
            return NULL;
         }
            status = true;
    return q->head->value;
    }

    void EnQueue(Queue *q,int value){
    Node *NewNode = malloc(sizeof(Node));

    NewNode->value = value;
    NewNode->link = NULL;

        if (Empty(q)){
            q->head=NewNode;
            q->tail=NewNode;
        }
        else {
    q->tail->link = NewNode;
    q->tail = NewNode;
    }f
    q->size++;
    }
    int DeQueue(Queue *q,bool *status){
        if (Empty(q)){
            *status = false;
            return NULL;
        }
        *status = true;

    int value = q->head->value;

    Node *OldHead = q->head;
    if (q->size == 1){
        q->head = NULL;
        q->tail = NULL;
    }
    else {
        q->head = q->head->link;
    }
    free(OldHead);
        q->size--;
        return value;
    }
    void Destroy(Queue *q){
    Node *Current = q->head;

    while (Current != NULL)
    {
        Node *temp = Current;
        Current = Current->link;
        free(temp);
    }
    free (q);
    }
