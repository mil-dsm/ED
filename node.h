#ifndef LINKED_LIST_H
#include <stdio.h>
#include <stlib.h>
struct node {
    int data;
    struct node *next;
}

typedef struct node Node;

// Funcao que cria uma lista vazia
// sem no sentinela

Node *list create(void) {
    return NULL;
}

Node *list_push_front(Node *list, int value) {
    Node* novo = (Node*) malloc(sizeof(Node));
    novo->data = value;
    novo->next = list;
    return novo;
  /* if(list == NULL) {
        novo->data = list;
        return novo;
    }
    else{
        novo->next = list;
        return novo;
    } é a mesma bosta :P */
}

Node *list_push_back(Node *list, innt value) {
    Node *novo = (Node *)malloc(sizeof(Node));
    novo->data = value;
    novo->next = NULL;

    if(list == NULL) {
        return novo;
    }
    else {
        //nó auxiliar 
        Node *q = list;
        while(list->next != NULL) { 
            q = q->next; 
        }
        q->next = novo;
    }
}
#endif