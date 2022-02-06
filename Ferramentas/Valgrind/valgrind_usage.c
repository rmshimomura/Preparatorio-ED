#include  <stdlib.h>
#include  <stdio.h>
#include  <string.h>

/**************************************************
*                                                 *
*    https://linux.die.net/man/1/valgrind         *
*                                                 *
*    valgrind --leak-check=full                   *
*            --show-leak-kinds=all                *
*            --track-origins=yes                  *
*            --log-file=valgrind-output.txt       *
*            ./a.out argv                         *
*                                                 *
***************************************************/

int main() {
    
    /* Invalid read/ write of size X */
    char *string = calloc(22, sizeof(char));
    strcpy(string, "mais_de_22_caracteres");
    printf("%c\n", string[30]);

    /* Conditional jump or move depends on uninitialised value(s) */
    char character;
    printf("%c\n",character);

    /* Source and destination overlap in memcpy() 
    *
    *                    overlapping area
    *                    |
    *                    |____
    *                    |   |
    *                    v   v
    *        T h i s   i s   a n   e x a m p l e \0
    *        ^             ^
    *        |             |
    *        |             destination
    *        |
    *        source
    * /

    /* Invalid free() */
    int *integer = calloc(1, sizeof(char));
    free(integer);
    free(integer);

    return 0;
}


// valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file=valgrind-output.txt ./a.out