#include <stdlib.h>
#include <stdio.h>

#define max 10

typedef struct Pilha{
    char palavra[max];
    int topo;
}pilha;
pilha* criarPilha();
void empilhar(pilha* p, char ch);
char desempilhar(pilha*p);
int main(){
    pilha* p = criarPilha();
    char w;
    printf("Insira a palavra \n");
    for (int i=0; i<10; i++){
        w = getchar();
        empilhar(p,w);
    }
    printf("Sua palavra ao contrario\n");
    for (int i=0; i<10; i++){
        printf("%c", desempilhar(p));
    }
}
pilha* criarPilha(){
    pilha * p = (pilha*) malloc(sizeof(pilha));
    p->topo=-1;
}
void empilhar(pilha* p, char ch){
    p->palavra[p->topo++]=ch;
}
char desempilhar(pilha*p){
    char ch=p->palavra[p->topo-=1];
    return ch;
}
