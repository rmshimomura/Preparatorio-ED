#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    /*      Como concatenar uma string      */

    char string_1[50] = "C:";
    char string_2[50] = "Documentos/teste.txt";

    char string_3[50] = {};

    strcat(string_3, string_1);
    strcat(string_3, "/");    
    strcat(string_3, string_2);

    puts(string_3);

    return 0;
}