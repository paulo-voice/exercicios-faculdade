#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

#define MAX 10

typedef struct fila{
    int comeco;
    int final;
    int vetor[MAX];
}Fila;
typedef struct calculos{
    int maior;
    int menor;
    float media;
}Calc;

Fila* criarFila();
int estaCheia(Fila *f);
int inserir(Fila *f, int v);
int funcaoCalculos(Fila *f);

int main() {
    Fila *p;
    Calc *c;
    int valor, maior;
    p=criarFila();
    for(int i=0;i<5;i++){
        printf("Digite o %d valor da fila: ",i+1);
        scanf("%d", &valor);
        inserir(p, valor);
    }
    funcaoCalculos(p);
    printf("Maior valor: %d\n", c->maior);
    printf("Menor valor: %d\n", c->menor);
    printf("Media valor: %.2f\n", c->media);


  return 0;
}

Fila* criarFila() {
    Fila *f = (Fila *) malloc(sizeof(Fila));
    f->comeco = 0;
    f->final = -1;
    return f;
}

int estaCheia(Fila *f) {
  return f->final == MAX-1;
}

int inserir(Fila *f, int v) {
    if(!estaCheia(f)){
        f->final++;
        f->vetor[f->final] = v;
        return 1;
    }else{
        return 0;
    }
}

int funcaoCalculos(Fila *f, Calc *c){
    int i, soma = 0;
    c->maior = f->vetor[0];
    c->menor = f->vetor[0];
    for(i=0;i<=f->final;i++){
        if(f->vetor[i]>c->maior){
            c->maior=f->vetor[i];
        }
        if(f->vetor[i]<c->menor){
            c->menor=f->vetor[i];
        }
        soma += f->vetor[i];
    }
    c->media=soma/f->final;
    return 1;
}




