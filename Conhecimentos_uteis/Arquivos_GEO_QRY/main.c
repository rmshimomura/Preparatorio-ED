#include <stdio.h>
#include <string.h>

int main() {
    double var2;

    FILE* arquivo1 = fopen("teste.qry", "r");

    puts(" ");

    while (fscanf(arquivo1, "%lf", &var2) != -1) {
        printf("%.2lf\n", var2);
    }

    puts("\n");

    fclose(arquivo1);

    char var[100];

    FILE* arquivo2 = fopen("teste.geo", "r");

    puts(" ");

    while (fscanf(arquivo2, "%s", var) != -1) {
        if (!strcmp(var, "Enzo")) {
            fscanf(arquivo2, "%s", var);
            printf("Usuario reconhecido, sobrenome %s\n", var);
        } else {
            printf("Usuario não reconhecido\n");
        }
    }

    puts("\n");

    fclose(arquivo2);

    return 0;
}