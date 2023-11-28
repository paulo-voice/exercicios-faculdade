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
int estaCheia(Pilha *p);
int empilhar(Pilha *p, int valor);
int verificarElm(Pilha *p, Pilha *p2);

int main(){
    Pilha *p=criarPilha();
    Pilha *p2=criarPilha();
    int valor, maior_p;
    for(int i=0;i<5;i++){
        printf("Digite o %d valor: \n",i+1);
        scanf("%d",&valor);
        empilhar(p,valor);
    }
    for(int i=0;i<3;i++){
        printf("Digite o %d valor da 2 pilha: \n",i+1);
        scanf("%d", &valor);
        empilhar(p2, valor);
    }
    maior_p=verificarElm(p, p2);
    if(maior_p==1){
        printf("Pilha 1 eh a maior\n");
    }else{
        printf("Pilha 2 eh a maior\n");
    }
    return 0;
}

Pilha *criarPilha(){
    Pilha *p = (Pilha *) malloc(sizeof(Pilha));
    p->topo = -1;
    return p;
}
int estaCheia(Pilha *p){
    if(p->topo == max-1) {
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
int verificarElm(Pilha *p, Pilha *p2){
    return p->topo>=p2->topo;
}
