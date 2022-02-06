#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    FILE* file = fopen("file.geo", "r"); //flag "r" para leitura

    char string[100];

    // fscanf(file, "%s", string);

    fgets(string, 100, file);

    puts(string);

    fclose(file);
    
    return 0;
}