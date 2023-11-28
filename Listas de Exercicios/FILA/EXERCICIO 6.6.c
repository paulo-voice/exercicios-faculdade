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
int maior(Fila *f);
int inverterFila(Fila *f);

int main() {
    Fila *f;
    int valor;
    f=criarFila();
    for(int i=0;i<6;i++){
        printf("Valor %d da fila: ",i+1);
        scanf("%d", &valor);
        inserir(f,valor);
    }
    inverter(f);
    printf("Imprimindo sua fila invertida:\n");
    for(int i=0;i<=f->final;i++){
        printf("%d ",f->vetor[i]);
    }
    return 0;
}

Fila* criarFila() {
    Fila *f = (Fila *) malloc(sizeof(Fila));
    f->comeco = 0;
    f->final = -1;
    return f;
}

int estaCheia(Fila *f) {
    return f->final==MAX-1;
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

int inverter(Fila *f) {
    int i,tam=(f->final / 2);
    int aux;
    for(i=0;i<=tam;i++){
        aux = f->vetor[i];
        f->vetor[i]=f->vetor[f->final - i];
        f->vetor[f->final-i]=aux;
    }
    return 1;
}
