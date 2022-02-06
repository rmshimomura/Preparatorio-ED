#ifndef LIB_H
#define LIB_H

typedef void* str_teste; 

typedef void (*printFunc)(int);

str_teste new_teste(int elemento, printFunc print);

void teste_print(str_teste teste);

#endif