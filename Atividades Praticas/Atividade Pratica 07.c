#include <stdio.h>
#include <stdlib.h>
#define tam 50
typedef struct{                     
    int Chave;
}REGISTRO;
REGISTRO LerRegistro(){
    REGISTRO r;
    printf("Digite a chave da pessoa:\n");
    scanf("%d",&r.Chave);
    return r;          
}
void ImprimeRegistro(REGISTRO r){
     printf(" Chave : %d \n",r.Chave);
}
struct TNo{
    REGISTRO reg;
    struct TNo *prox;
};
typedef struct TNo *TPILHA; 
void InicializarPilha(TPILHA *pPilha){
    (*pPilha) = NULL;
}
void Liberar(TPILHA *pPilha){
    free((*pPilha));
}
int PilhaCheia(TPILHA pPilha){
    return 0;
}
int PilhaVazia(TPILHA pPilha){
    return (pPilha == NULL);
}
void Empilhar(TPILHA *pPilha, REGISTRO pReg ){
    struct TNo *novo;
    novo = (struct TNo *) malloc(sizeof (struct TNo));
    novo->reg=pReg;
    novo->prox=NULL;
    if (*pPilha==NULL){
        (*pPilha)=novo;
    }else{
        novo->prox=(*pPilha); 
        (*pPilha) = novo; 
    }
}
REGISTRO Desempilhar(TPILHA *pPilha){
    REGISTRO aux;
    if (*pPilha==NULL){
        aux.Chave=-1;
    }else{
        aux =(*pPilha)->reg;
        (*pPilha)=(*pPilha)->prox;
    }
    return aux;
}
void Visualizar(TPILHA pPilha){
    TPILHA aux1 = pPilha;
    printf("\n\n");
    while (aux1!=NULL)
    {
        printf(" %d \n",aux1->reg.Chave);
        aux1 = aux1->prox;
    }                                             
    printf("\n\n");
}
int Menu2(){
    int o;
    printf("Menu\n");
    printf("1-Adicionar\n");
    printf("2-Retirar\n");
    printf("3-Visualizar\n");
    printf("4-Liberar\n");
    printf("0-Sair \n");
    fflush(stdin);
    scanf("%d", &o);
    return o;    
}
int main(){
    TPILHA p1;
    int opcao;
    InicializarPilha(&p1);
    do{   
        opcao = Menu2();   
        switch(opcao){
            case 1:{
                int p = 1;
                REGISTRO aux;
                printf("Digite o valor:\n");
                scanf("%d", &aux.Chave);
                if (p==1){
                    Empilhar(&p1, aux); 
                } 
                break;
            }
            case 2:{
                int p = 1;
                if (p==1){
                    Desempilhar(&p1); 
                     }
                break;
            }
            case 3:{
                printf("pilha 1:\n");
                Visualizar(p1);
                break;
            }
            case 4:{
                Liberar(&p1);
                break;
            }
        }
    }    
    while(opcao!=0);
    return 0;
}
