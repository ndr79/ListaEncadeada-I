#include "listaEncadeada.h"

#include<stdlib.h>

// Insere um nó na lista (cabeça)
// Entrada: lista e elemento a ser inserido
// Retorno: lista modificada
// Pré-condição: nenhuma
// Pós-condição: um elemento é inserido na lista
Lista* inserir(Lista* l, TipoItem info) {
    Lista* aux = (Lista*) malloc(sizeof(Lista));

    if(aux == NULL) {
        printf("Erro de alocação.\n");
        return l;
    }
        
    aux->info = info;
    aux->prox = l;  // encadeia com a cabeça da lista
    return aux; // retorna a nova cabeça
}

// Libera todos os nós da lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: toda memória ocupada pela lista é liberada
void liberar(Lista* l) {
    Lista* aux;
    while(l != NULL) {
        aux = l;
        l = l->prox;
        free(aux);
    }
}

// Verifica se uma lista é vazia
// Entrada: lista
// Retorno: 1 se a lista é vazia ou 0 caso contrário
// Pré-condição: nenhuma
// Pós-condição: nenhuma
int vazia(Lista* l) {
    return (l == NULL);
}

// Imprime no console todos elementos da lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: os elementos da lista são impressos no console
void imprimir(Lista* l) {
    if(!vazia(l)) {
        printf("[ ");
        while(l != NULL) {
            printf("%d ", l->info);
            l = l->prox;
        }
        printf("]\n");
    }
    else 
        printf("Lista vazia.\n");
}