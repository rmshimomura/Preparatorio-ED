#include <stdio.h>
#include <stdlib.h>

typedef struct example_ {

    int num;
    char character;

} example;

int main() {

    printf("-------------------------- REVISÃO DE PONTEIROS --------------------------\n");

    // TIPO INTEIRO
    int integer = 6;
    int *p_integer = &integer;
    
    printf("variavel integer: %d\n", integer);
    printf("endereço integer: %p\n", &integer);
    printf("endereço p_integer: %p\n", p_integer);
    printf("conteudo p_integer: %d\n", *p_integer);

    // TIPO CARACTERE
    char character = 'A';
    char* p_character = &character;

    printf("Caractere: %c\n", *p_character);

    // TIPO DOUBLE
    double double_ = 3.14159265359;
    double * p_double = &double_;

    printf("Double: %.2lf\n\n", *p_double);

    // STRUCT
    example variable;
    variable.num = 2;
    variable.character = 'E';

    printf("variable.num: %d\n", variable.num);
    printf("variable.character: %c\n", variable.character);

    example *p_variable = &variable;

    printf("p_variable.num: %d\n", p_variable->num);
    printf("p_variable.character: %c\n\n", p_variable->character);

    // STRING
    char *string = "abcdef";

    printf("string: %s\n", string);
    printf("char: %c\n", *(string + 3));

    // TIPO VOID
    printf("----------------------------- PONTEIROS VOID -----------------------------\n");

    void *void_variable = p_integer;
    printf("Inteiro pelo void: %d\n", *((int*)void_variable));

    void_variable = p_character;
    printf("Caractere pelo void: %c\n", *((char*)void_variable));

    void_variable = p_double;
    printf("Double pelo void: %lf\n", *((double*)void_variable));

    return 0;

}