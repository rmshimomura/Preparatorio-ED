#ifndef LIST_H
#define LIST_H

typedef void* List;

typedef void* Node;

typedef void* Item;

typedef char* (*toString)(Item);

List new_list(toString to_string);

void list_insert(List lst, Item itm);

void list_remove(List lst, int Idx);

void list_print(List lst);

#endif