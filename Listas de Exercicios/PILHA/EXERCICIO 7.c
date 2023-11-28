#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

typedef struct elemento{
    int valor;
    struct elemento *anterior;
}Elemento;

typedef struct pilha{
    Elemento *topo;
}Pilha;

Pilha *criarPilha();
int estaVazia(Pilha *p);
int empilhar(Pilha *p, int v);
int impar(Pilha *p);

int main() {
    Pilha *p = criarPilha();
    int valor, elmImpar;
    for(int i=0;i<5;i++) {
        printf("Digite o %d valor: \n",i+1);
        scanf("%d",&valor);
        empilhar(p,valor);
    }
    elmImpar=impar(p);
    printf("Impares: %d\n",elmImpar);
    return 0;
}
Pilha *criarPilha() {
    Pilha *p = (Pilha *) malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}
int estaVazia(Pilha *p){
    if(p->topo == NULL) {
        return 1;
    }else{
        return 0;
    }
}
int empilhar(Pilha *p, int v){
    Elemento *elm;
    elm = (Elemento *) malloc(sizeof(Elemento));
    elm->valor = v;
    if(estaVazia(p)) {
        elm->anterior = NULL;
        p->topo=elm;
    } else {
        elm->anterior = p->topo;
        p->topo=elm;
    }
    return p->topo->valor;
}

int valoresImpares(Pilha *p) {
    Pilha *t = criarPilha();
    int impares=0;
    t->topo = p->topo;
    while(t->topo != NULL){
        if(t->topo->valor%2!=0){
            impares++;
        }
        t->topo=t->topo->anterior;
    }
    return impares;
}
