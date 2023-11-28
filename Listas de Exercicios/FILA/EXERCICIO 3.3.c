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
int filaMaior(Fila *f, Fila *f2);

int main() {
    Fila *f;
    Fila *f2;
    int valor;
    f=criarFila();
    f2=criarFila();
    for(int i=0;i<6;i++){
        printf("Valor %d da primeira fila: ",i+1);
        scanf("%d", &valor);
        inserir(f,valor);
    }
    for(int i=0;i<3;i++){
        printf("Valor %d da segunda fila: ",i+1);
        scanf("%d", &valor);
        inserir(f2,valor);
    }
    int maior=filaMaior(f,f2);
    if(maior==1){
        printf("A fila 1 eh maior");
    }else{
        printf("A fila 2 eh maior");
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

int filaMaior(Fila *f1, Fila *f2) {
  return f1->final>f2->final;
}




