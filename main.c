#include<stdio.h>
#include<stdlib.h>

#include "listaEncadeada.h"

int main(int argc, const char * argv[]) {
    Lista* l = NULL;

    l = inserir(l, 2);
    l = inserir(l, 5);
    l = inserir(l, 12);
    l = inserir(l, 23);

    liberar(l);
    l = NULL;

    printf("\n");
    return 0;
}
