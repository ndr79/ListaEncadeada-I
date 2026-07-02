#include<stdio.h>
#include<stdlib.h>

#include "listaEncadeada.h"

int main(int argc, const char * argv[]) {
    Lista* l = NULL;

    l = inserir(l, 2);
    l = inserir(l, 5);
    l = inserir(l, 12);
    l = inserir(l, 23);
    imprimir(l);

    l = remover(l, 12);
    imprimir(l);

    l = inserir(l, 37);

    Lista* l1 = inverter(l);
    imprimir(l1);

    

     Lista* l2 = NULL;

    l2 = inserir(l2, 55);
    l2 = inserir(l2, 67);
    l2 = inserir(l2, 75);
    l2 = inserir(l2, 99);
    imprimir(l2);

    Lista* l3 = NULL;

    l3 = concatenar(l, l2);
    imprimir(l3);

    liberar(l);
    l = NULL;

    liberar(l1);
    l1 = NULL;

    liberar(l2);
    l2 = NULL;

    liberar(l3);
    l3 = NULL;

    printf("\n");
    return 0;
}
