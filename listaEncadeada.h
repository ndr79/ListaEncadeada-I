#ifndef listaEncadeada_h
#define listaEncadeada_h

#include<stdio.h>

typedef int TipoItem;   // tipo dos elementos da lista

// Estrutura para lista encadeada
typedef struct no {
    TipoItem info;
    struct no* prox;    // ponteiro para o próximo elemento
}Lista;

// Insere um nó na lista (cabeça)
// Entrada: lista e elemento a ser inserido
// Retorno: lista modificada
// Pré-condição: nenhuma
// Pós-condição: um elemento é inserido na lista
Lista* inserir(Lista* l, TipoItem info);

// Libera todos os nós da lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: toda memória ocupada pela lista é liberada
void liberar(Lista* l);

#endif /* listaEncadeada_h */
