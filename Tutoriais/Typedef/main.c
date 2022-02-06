#include <stdio.h>
#include <stdlib.h>

typedef char* string;

typedef int number;

typedef void* ref;

int main() {

    string nome = "João";

    number idade = 20;

    ref endereco_idade = &idade;
    ref endereco_nome = &nome;

    printf("%s\n", nome);
    printf("%d\n\n\n", idade);

    printf("1°: %p\n2°: %p\n\n\n", &idade, endereco_idade);
    printf("1°: %p\n2°: %p\n\n", &nome, endereco_nome);

    return 0;
}