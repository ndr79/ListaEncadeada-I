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

// Verifica se uma lista é vazia
// Entrada: lista
// Retorno: 1 se a lista é vazia ou 0 caso contrário
// Pré-condição: nenhuma
// Pós-condição: nenhuma
int vazia(Lista* l);

// Imprime no console todos elementos da lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: os elementos da lista são impressos no console
void imprimir(Lista* l);

// Remove um nó da lista
// Entrada: lista e elemento a ser removido
// Retorno: lista modificada
// Pré-condição: nenhuma
// Pós-condição: um elemento é removido da lista
Lista* remover(Lista* l, TipoItem info);

#endif /* listaEncadeada_h */
