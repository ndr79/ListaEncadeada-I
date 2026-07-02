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