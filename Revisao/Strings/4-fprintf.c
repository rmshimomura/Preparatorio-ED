#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//https://pubs.opengroup.org/onlinepubs/9699919799/functions/fopen.html

int main(){

    FILE* file = fopen("file.geo", "w"); //flag "w" para escrita

    fprintf(file, "Hello World!");
    
    fclose(file);
    
    return 0;
}