#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

#define MAX 50

typedef struct pilha {
  int tam;
  char txt[MAX];
}Pilha;

Pilha *criarPilha();
int estaCheia(Pilha *p);
int empilhar(Pilha *p, char c);
int palindromo(Pilha *p);

int main() {
    Pilha *p = criarPilha();
    int  word;
    char caracteres;
    printf("Digite a palavra: ");
    for(int i=0;i<15;i++){
        scanf("%c", &caracteres);
        empilhar(p, caracteres);
    }
    printf("%s\n", p->txt);
    word = palindromo(p);
    if(word == 0) {
        printf("Palindromo\n");
    }else{
        printf("Nao e palindromo\n");
    }
    return 1;
}

Pilha *criarPilha() {
    Pilha *p = (Pilha *) malloc(sizeof(Pilha));
    p->tam = -1;
    return p;
}

int estaCheia(Pilha *p) {
    return p->tam==MAX-1;
}
int estaVazia(Pilha *p) {
    return p->tam==-1;
}

int empilhar(Pilha *p, char c) {
    if(!estaCheia(p)) {
        p->tam++;
        p->txt[p->tam] = c;
        return 1;
    }else{
        return 0;
    }
}
int desempilhar(Pilha *p, char *removido) {
    if(!estaVazia(p)){
        *removido = p->txt[p->tam];
        p->tam--;
        return 1;
    }else{
        return 0;
    }
}

int palindromo(Pilha *p){
    Pilha *a;
    int i, text, tamanho;
    char texto, texto2[p->tam+1];
    tamanho=p->tam;
    for(i=0;i<=tamanho; i++) {
        desempilhar(p,&texto);
        texto2[i]=texto;
    }
    for(i=tamanho;i>=0;i--) {
        empilhar(p, texto2[i]);
    }
    text = strcmp(p->txt, texto2);
    return text;
}
