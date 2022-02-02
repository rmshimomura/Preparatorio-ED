#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int a = 1;
    int b = 0;
    char * palavra = calloc(5, sizeof(char));

    free(palavra);

    printf("Palavra = %s\n", palavra);

    printf("B guardando o valor de : %d\n", b);
    printf("A + B = %d\n", a + b);

}