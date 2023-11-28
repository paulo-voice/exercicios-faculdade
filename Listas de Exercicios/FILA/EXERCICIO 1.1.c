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

Fila* criarFila();
int estaCheia(Fila *f);
int inserir(Fila *f, int v);
int reverter(Fila *f);

int main() {
    Fila *p;
    int vetor, i;
    p=criarFila();
    for(i=0;i<5;i++){
        printf("Digite o %d valor da fila: ",i+1);
        scanf("%d", &vetor);
        inserir(p, vetor);
    }
    printf("Sua ordem de numeros:\n");
    for(i=0;i<5;i++){
        printf("%d ", p->vetor[i]);
    }
    printf("\nRevertendo: \n");
    reverter(p);
    for(i=0;i<5;i++){
        printf("%d ", p->vetor[i]);
    }
    return 0;
}

Fila* criarFila() {
    Fila *f = (Fila *) malloc(sizeof(Fila));
    f->comeco = 0;
    f->final = -1;
    return f;
}

int estaCheia(Fila *f){
    return f->final==MAX-1;
}

int inserir(Fila *f, int v){
    if(!estaCheia(f)){
        f->final++;
        f->vetor[f->final] = v;
        return 1;
    }else{
        return 0;
    }
}

int reverter(Fila *f) {
    int i;
    int test;
    for(i=0;i<=(f->final/2);i++){
        test = f->vetor[f->comeco+i];
        f->vetor[f->comeco+i] = f->vetor[f->final-i];
        f->vetor[f->final-i] = test;
    }
    return 1;
}





