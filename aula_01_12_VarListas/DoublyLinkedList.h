/**
 * @file DoublyLinkedList.h
 * @author ED 2025.2
 * @brief lista duplamente encadeada circular com nó sentinela
 * @version 0.1
 * @date 2025-12-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct nod *next;
};

typedef struct node Node; // Renomeando tipo

// Cria lista vazia
Node* dlist_create() {
    Node *novo = (Node*)malloc(sizeof(Node));
    novo->next = novo;
    novo->prev = novo;
    novo->data = -999;
    return novo;
}

// Insere um elemento no inicio da lista
void dList_push_front(Node* head, int val) {
    Node *novo = (Node*)malloc(sizeof(Node));
    novo->data = val;
    novo->next = head->next;
    novo->prev = head;
    head->next->prev = novo;
    head->next = novo;
    return novo;
}

// Remove o primeiro elemento da lista
Node* dList_pop_front(Node* head) {
    Node *temp = head->next;
    head->next = head->next->next;
    head->next->prev = head;
    free(temp);
}

/*// Remove o ultimo elemento da lista
Node* dList_pop_back(Node* head) {
    Node *temp = head->next;
    while(temp != head) {
        temp = temp->next;
    }
    temp->prev->next = head;
    head->prev = temp->prev->next;
}*/

// Imprimie a lista na tela
void dList_print(Node *) {
    printf("[ ");
    for(Node *atual = head->next; atual != head; atual = atual->next) {
        printf("%d ", atual->data);
    }
    printf("]\n");
}

// Libera TODOS os nos da lista
void dList_free(Node *head) {
    Node *atual = head->next;
    while(atual != head) {
        Node *aux = atual;
        atual = atual->next;
        printf("")
        free(aux);
    }
    free(head);
}