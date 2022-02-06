#include "list.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    
    void* data;

    struct node* next;
    struct node* prev;

} node;

typedef struct list {

    node* head;
    
    node* tail;
    
    int size;

    toString to_string;

} list;

List new_list(toString to_string) {
    
    list* l = calloc(1, sizeof(list));

    l->head = NULL;
    l->tail = NULL;

    l->to_string = to_string;

    return l;
}

void list_insert(List lst, Item itm) {
    node* n = calloc(1, sizeof(node));
    list* lst_p = (list*)lst;

    n->data = itm;

    if (lst_p->head == NULL) {
        lst_p->head = n;
        lst_p->tail = n;
    } else {
        n->prev = lst_p->tail;
        lst_p->tail->next = n;
        lst_p->tail = n;
    }

    lst_p->size++;
}

void list_remove(List lst, int Idx) {
    list* lst_p = (list*)lst;
    node* n = lst_p->head;

    if(Idx < 0 || Idx >= lst_p->size) return;


    if (Idx == 0) {
        lst_p->head = n->next;
        lst_p->head->prev = NULL;
    } else if (Idx == lst_p->size - 1) {
        lst_p->tail = n->prev;
        lst_p->tail->next = NULL;
    } else {
        for (int i = 0; i < Idx; i++) {
            n = n->next;
        }

        n->prev->next = n->next;
        n->next->prev = n->prev;
    }

    lst_p->size--;
    free(n);
}

void list_print(List lst) {

    list* lst_p = (list*)lst;
    
    printf("[");

    for (node* n = lst_p->head; n != NULL; n = n->next) {
        printf("%s%s", lst_p->to_string(n->data), n->next == NULL ? "" : ", ");
    }
    
    printf("]\n");
}