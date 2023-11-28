//Discente: Paulo Vinicius Ruffini Azevedo
#include <stdio.h>
#define MAX 50

typedef int bool;
typedef int TIPOCHAVE;
typedef struct{
    TIPOCHAVE chave;
}REGISTRO;
typedef struct{
    REGISTRO A[MAX];
    int inicio;
    int nroElem;
}FILA;

void criarFila(FILA* f);
int tamanhoFila(FILA* f);
void exibirFila(FILA* f);
bool inserir(FILA* f, REGISTRO reg);
bool retirar(FILA* f, REGISTRO* reg);
void reiniciar(FILA* f);

int main()
{
    REGISTRO reg;
    FILA* f;
    criarFila(f);
    inserir(f,reg);
    inserir(f,reg);
    inserir(f,reg);
    inserir(f,reg);
    retirar(f,reg);
    exibirFila(f);
    tamanhoFila(f);
    reiniciar(f);

    return 0;
}
void criarFila(FILA* f) {
    f->inicio=0;
    f->nroElem=0;
}
int tamanhoFila(FILA* f) {
    return f->nroElem;
}
void exibirFila(FILA* f) {
    printf("Fila:\n");
    int i=f->inicio;
    int temp;
    for (temp=0;temp<f->nroElem;temp++){
        printf("%i",f->A[i].chave);
        i=(i+1)%MAX;
    }   
    printf("\n");
}
bool inserir(FILA* f, REGISTRO reg){
    if (f->nroElem>=MAX){
        return -1;
    }
    int posicao = (f->inicio + f->nroElem) % MAX;
    f->A[posicao] = reg;
    f->nroElem++;
    return 1;
}
bool retirar(FILA* f, REGISTRO* reg) {
    if (f->nroElem==0){
        return -1;
    }
    *reg = f->A[f->inicio];
    f->inicio = (f->inicio+1) % MAX;
    f->nroElem--;
    return 1;
}
void reiniciar(FILA* f) {
    f->inicio=0;
    f->nroElem=0;
}