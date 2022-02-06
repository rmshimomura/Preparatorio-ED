#include "lib.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct Teste {

    printFunc print;

    int elemento;

} Teste;

str_teste new_teste(int elemento, printFunc print) {
    Teste* teste = calloc(1, sizeof(Teste));

    teste->elemento = elemento;

    teste->print = print;

    return teste;
}

void teste_print(str_teste teste) {
    Teste* teste_ptr = (Teste*)teste;

    teste_ptr->print(teste_ptr->elemento);
}