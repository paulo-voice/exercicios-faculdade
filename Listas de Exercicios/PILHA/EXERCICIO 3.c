#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

typedef struct elemento {
    int valor;
    struct elemento *anterior;
}Elemento;

typedef struct pilha{
    Elemento *topo;
}Pilha;

Pilha *criarPilha();
int estaVazia(Pilha *p);
int empilhar(Pilha *p, int v);
int calcular(Pilha *p);

int main() {
    Pilha *p = criarPilha();
    Elemento *elm;
    int valor;
    for(int i=0;i<5;i++){
        printf("Digite o %d valor: \n",i+1);
        scanf("%d", &valor);
        empilhar(p, valor);
    }
    elm=p->topo;
    while(elm!=NULL){
        printf("Valor: %d\n",elm->valor);
        elm=elm->anterior;
    }
    printf("\n\n");
    calcular(p);
    return 0;
}
Pilha *criarPilha(){
    Pilha *p=(Pilha *) malloc(sizeof(Pilha));
    p->topo=NULL;
}
int estaVazia(Pilha *p) {
  return p->topo==NULL;
}
int empilhar(Pilha *p, int v){
    Elemento *elm = (Elemento *) malloc(sizeof(Elemento));
    elm->valor=v;
    if(estaVazia(p)){
        elm->anterior = NULL;
        p->topo = elm;
    }else{
        elm->anterior=p->topo;
        p->topo=elm;
    }
    return 1;
}
int calcular(Pilha *p){
    int maior = p->topo->valor, menor = p->topo->valor;
    int soma, quantidade;
    float media;
    Elemento *elm;
    elm=p->topo;
    while(elm!=NULL){
        if(elm->valor>maior){
            maior=elm->valor;
        }
        if(elm->valor<menor){
            menor=elm->valor;
        }
        soma+=elm->valor;
        quantidade++;
        elm=elm->anterior;
    }
    media=(soma/quantidade);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %f\n", media);
    return 1;
}

