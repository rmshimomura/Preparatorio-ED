#include <stdio.h>
#include <stdlib.h>

int main () {
    /*
    int a = 0;
    int b = 0;

    puts("Antes:");
    printf("a = %d\nb = %d\n", a++, ++b);

    puts("================================================");

    puts("Depois:");
    printf("a = %d\nb = %d\n", a, b);
*/
    
    int vetor_a[10], vetor_b[10];
    int a = 0;
    int b = 0;

    for(int i = 0; i < 10; i++) {
        vetor_a[i] = a++;
        vetor_b[i] = ++b;
    }

    for(int i = 0; i < 10; i++) {

        printf("vetor_a[%d] = %d\n", i, vetor_a[i]);

    }

    puts(" ");

    for(int i = 0; i < 10; i++) {

        printf("vetor_b[%d] = %d\n", i, vetor_b[i]);

    }

}