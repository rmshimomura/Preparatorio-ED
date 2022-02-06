#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"
#include "rectangles.h"

char* int_to_string(void* element) {
    int* element_ptr = (int*)element;
    char* string = calloc(10, sizeof(char));
    sprintf(string, "%d", *element_ptr);
    return string;
}

int main() {
    List int_list = new_list(int_to_string);
    List rect_list = new_list(rect_to_string);

    int um = 1, dois = 2, tres = 3;

    list_insert(int_list, &um);
    list_insert(int_list, &dois);
    list_insert(int_list, &tres);

    list_print(int_list);
    list_remove(int_list, 0);
    list_print(int_list);

    rectangle rect = rectangle_new();

    rectangle_set_x(rect, 1);
    list_insert(rect_list, rect);
    rect = rectangle_new();
    rectangle_set_x(rect, 2);
    list_insert(rect_list, rect);
    rect = rectangle_new();
    rectangle_set_x(rect, 3);
    list_insert(rect_list, rect);
    list_print(rect_list);

    return 0;
}