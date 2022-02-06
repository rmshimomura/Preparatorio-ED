#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib.h"

void printComSeta(int elemento) {
    printf("--> %d\n", elemento);
}

void printComTab(int elemento) {
    printf("\t\t\t-%d-\n", elemento);
}

int main() {

    str_teste var_1 = new_teste(5, printComSeta);  
    str_teste var_2 = new_teste(5, printComTab);

    teste_print(var_1);
    teste_print(var_2);

    free(var_1);
    free(var_2);

    return 0;
}