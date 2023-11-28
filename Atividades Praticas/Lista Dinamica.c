//DISCENTE: PAULO VINICIUS RUFFINI AZEVEDO
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct elemento{
    int valor;
    struct elemento* prox;
}Elemento;

typedef struct lista{
    Elemento *inicio;
    int qntd;
}Lista;

void criarLista(Lista *l){
    l->inicio == NULL;
    l->qntd = 0;
}

int estaVazia(Lista *l){
    if(l->qntd == 0){
        return 1;
    }else{
        return 0;
    }
}

int tamanhoLista(Lista l){
    return (l.qntd);
}

void inserirItem(Lista *l, int v){
    Elemento* elm = NULL;
    elm = (Elemento*)malloc(sizeof(elm));
    elm->valor=v;
    elm->prox=NULL;
    if(estaVazia(l) == 1){
        l->inicio = elm;
    }else if (v < l->inicio->valor){
        elm->prox = l->inicio;
        l->inicio = elm;
    }else{
        Elemento* aux = l->inicio;
        while (aux->prox != NULL && aux->prox->valor < v){
            aux = aux->prox;
        }
        elm->prox = aux->prox;
        aux->prox = elm;
    }
    l->qntd++;
}

void imprimirLista(Lista *l){
    Elemento* aux = l->inicio;
    int pos = 0;
    while (aux != NULL){
        printf("\nPosicao %d -> %d ",++pos,aux->valor);
        aux = aux->prox;
    }
}


void limparLista(Lista *l){
    while (l->qntd != 0){
        Elemento *aux;
        aux = l->inicio;
        l->inicio = l->inicio->prox;
        free(aux);
        l->qntd--;
    }
}

int recuperarItem(Lista *l, int v){
    Elemento* aux = l->inicio;
    while (aux != NULL){
        if(aux->valor == v){
            return 1;
        }
        aux = aux->prox;
    }
    return 0;
}



int main(){
    Lista lista;
    criarLista(&lista);
    inserirItem(&lista, 7);
    inserirItem(&lista, 0);
    inserirItem(&lista, -1);
    inserirItem(&lista, 3);
    imprimirLista(&lista);
    if(recuperarItem(&lista, 7) == 1){
        printf("\nEncontrado!\n");
    }else{
        printf("\nNao encontrado!\n");
    }
    
    return EXIT_SUCCESS;
}