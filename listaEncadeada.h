#ifndef listaEncadeada_h
#define listaEncadeada_h

#include<stdio.h>

typedef int TipoItem;   // tipo dos elementos da lista

// Estrutura para lista encadeada
typedef struct no {
    TipoItem info;
    struct no* prox;    // ponteiro para o próximo elemento
}Lista;


#endif /* listaEncadeada_h */