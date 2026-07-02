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

// Remove um nó da lista
// Entrada: lista e elemento a ser removido
// Retorno: lista modificada
// Pré-condição: nenhuma
// Pós-condição: um elemento é removido da lista
Lista* remover(Lista* l, TipoItem info) {
    Lista* ant = NULL;  // elemento anterior
    Lista* p = l;   // utilizado para encontrar o elemento a ser removido

    while(p != NULL && p->info != info) {   // localiza o elemento
        ant = p;
        p = p->prox;
    }

    if(p != NULL) { // elemento encontrado
        if(p == l)  // remoção na cabeça
            l = l->prox;
        else    // remoção no meio
            ant->prox = p->prox;
        free(p);    // libera o nó do elemento removido
    }
    else
        printf("Elemento não encontrado.\n");
    return l;
}

// Inverte uma lista
// Entrada: lista
// Retorno: lista invertida
// Pré-condição: nenhuma
// Pós-condição: a list original não é alterada
Lista* inverter(Lista* l) {
    if(!vazia(l)) {
        Lista* aux = NULL;
        while(l != NULL) {
            aux = inserir(aux, l->info);
            l = l->prox;
        }
        return aux;
    }
    return NULL;
}

// Concatena duas lista
// Entrada: listas a serem concatenadas
// Retorno: lista resultante da concatenação
// Pré-condição: nenhuma
// Pós-condição: listas originais não são alteradas
Lista* concatenar(Lista* l1, Lista* l2) {
    Lista* nova = NULL;
    Lista* aux;
    Lista* inv;

    // Copia a primeira lista
    inv = inverter(l1);
    aux = inv;

    while(aux != NULL) {
        nova = inserir(nova, aux->info);
        aux = aux->prox;
    }
    liberar(inv);

    // Copia a segunda lista
    inv = inverter(l2);
    aux = inv;

    while(aux != NULL) {
        nova = inserir(nova, aux->info);
        aux = aux->prox;
    }
    liberar(inv);

    return nova;
}

// Intercala duas lista
// Entrada: listas a serem intercaladas
// Retorno: lista resultante da intercalação
// Pré-condição: nenhuma
// Pós-condição: listas originais não são alteradas
Lista* intercalar(Lista* l1, Lista* l2) {
    Lista* nova = NULL;
    Lista* aux;

    while(l1 != NULL || l2 != NULL) {
        if(l1 != NULL) {
            nova = inserir(nova, l1->info);
            l1 = l1->prox;
        }
        if(l2 != NULL) {
            nova = inserir(nova, l2->info);
            l2 = l2->prox;
        }
    }
    aux = inverter(nova);
    liberar(nova);
    return aux;
}