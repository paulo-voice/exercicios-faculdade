#include <stdio.h>
#include <stdlib.h>

//DISCENTE: PAULO VINICIUS RUFFINI AZEVEDO
/******************STRUCTS********************/
typedef struct Elemento{
    int num;
	struct Elemento *prox;
}Elemento;
typedef struct Fila{
    struct Elemento *inicio;
    struct Elemento *fim;
}Fila;
Elemento *aux;	

/****************PROTOTIPOS******************/
Fila* criaFila();
void inserir(Fila *p);
void retirar(Fila *p);
void consultarFila(Fila *p);
void liberarFila(Fila *p);
int estahVazia(Fila *p);

int main(){
    Fila *p;
    criaFila();
    
    inserir(p);
    inserir(p);
    inserir(p);
    
    retirar(p);
    retirar(p);
    
    consultarFila(p);
    liberarFila(p);
    
    estahVazia(p);

    return 0;
}

/******************FUNÇÕES********************/
Fila* criaFila(){
    Fila* p=(Fila*) malloc(sizeof(Fila));
    if(p!=NULL){
        p->fim=NULL;
        p->inicio=NULL;
    }
    return p;
}	
void inserir(Fila *p){
	Elemento*novo =(Elemento*) malloc(sizeof(Elemento));
	printf("Digite o numero a ser inserido na fila: ");
	scanf("%d",&novo->num);
	novo->prox = NULL;
	if(p->inicio == NULL){
		p->inicio = novo;
		p->fim = novo;
	}else{
		p->fim->prox = novo;
		p->fim = novo;
	}
}
void retirar(Fila *p){
	if(p->inicio == NULL){
		printf("\nFila Vazia!!");
	}else{
		aux = p->inicio;
		printf("%d removido!", p->inicio->num);
		p->inicio = p->inicio->prox;
		free(aux);
	}
}
void consultarFila(Fila *p){
	aux=p->inicio;
	do{
		printf("%d", aux->num);
		aux = aux->prox;
	}while(aux != NULL);
}
void liberarFila(Fila *p){
	if(p->inicio==NULL){
		printf("\nFila Vazia!!");
	}else{
		aux=p->inicio;
		do{
			p->inicio=p->inicio->prox;
			free(aux);
			aux=p->inicio;
		}while(aux!=NULL);
		printf("\nFila Esvaziada!!");
	}
}
int estahVazia(Fila *p){
	if(p->inicio == NULL){
		printf("\nFila Vazia!!");
		return 1;
	}else{
	    return 0;
	}
}