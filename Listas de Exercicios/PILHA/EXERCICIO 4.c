#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

#define max 100

typedef struct Pilha{
    int valor[max];
    int topo;
}Pilha;

Pilha *criarPilha();
int estaVazia(Pilha *p);
int estaCheia(Pilha *p);
int empilhar(Pilha *p, int valor);
int inverterPos(Pilha *p);

int main() {
    Pilha *p = criarPilha();
    int i, valor;
    for(i=0;i<5;i++){
        printf("Digite o %d valor: \n",i+1);
        scanf("%d",&valor);
        empilhar(p,valor);
    }
    for(i=0;i<=p->topo;i++){
        printf ("Valores: %d\n",p->valor[i]);
    }
    printf("\nInvertendo a posicao dos elementos:\n");
    inverterPos(p);
    for(i=0;i<=p->topo;i++){
        printf ("%d ", p->valor[i]);
    }
    return 0;
}
Pilha *criarPilha(){
    Pilha *p =(Pilha *) malloc(sizeof(Pilha));
    p->topo = -1;
    return p;
}
int estaVazia(Pilha *p){
    if(p->topo==-1){
        return 1;
    }else{
        return 0;
    }
}
int estaCheia(Pilha *p){
    if(p->topo==max-1){
        return 1;
    }else{
        return 0;
    }
}
int empilhar(Pilha *p, int valor){
    if(!estaCheia(p)==1){
        p->topo++;
        p->valor[p->topo] = valor;
        return 1;
    }else{
        return 0;
    }
}
int inverterPos(Pilha *p) {
    int i, aux;
    int tam=p->topo;
    for(i=0;i<=(tam/2);i++){
        aux = p->valor[i];
        p->valor[i]=p->valor[tam-i];
        p->valor[tam-i]=aux;
    }
    return 1;
}
