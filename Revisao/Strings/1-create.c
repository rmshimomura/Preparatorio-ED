#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    /*      Como criar uma string      */
    char  string_estatica[50];
    char *string_dinamica = calloc(50, sizeof(char));

    /*      Como atribuir valor a uma string      */
    strcpy(string_estatica, "Novo Valor");
    strcpy(string_dinamica, "Novo Valor");


    /*      Como printar uma string     */
    printf("%s\n", string_estatica);
    puts(string_dinamica);


    free(string_dinamica);
    
    return 0;
}