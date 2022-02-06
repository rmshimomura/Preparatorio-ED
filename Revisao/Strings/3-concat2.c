
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* readString(int size){
    char *string = calloc(size, sizeof(char));
    scanf("%s", string);
    return string;
}

int main() {

    /*      String dinamica     */

    char* string_1 = readString(10);
    char* string_2 = readString(10);

    char* string_3 = calloc(strlen(string_1) + strlen(string_2) + strlen("/") + 1, sizeof(char));

    strcat(string_3, string_1);
    strcat(string_3, "/");
    strcat(string_3, string_2);

    puts(string_3);

    free(string_1);
    free(string_2);
    free(string_3);

    return 0;
}