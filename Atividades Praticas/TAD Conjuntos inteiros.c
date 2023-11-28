#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct conjunto{
    int elem[3];
}conjunto;

int uniao(conjunto c[]){
    int num;
    scanf("%d",&num);
    int num2;
    scanf("%d",&num2);
    c[num].elem[0]+=c[num2].elem[0];
    c[num].elem[1]+=c[num2].elem[1];
    c[num].elem[2]+=c[num2].elem[2];
}
void criarconj(conjunto c[]){
    if(criarconj){
        int num;
        printf("Um numero para o conjunto:\n");
        scanf("%d",&num);
        conjunto c[num];
    }
}
void inserir(conjunto c[]){
    int num;
    scanf("%d",&num);
    for(int i=0;i<3;i++){
        scanf("%d",&c[num].elem[i]);
    }
}
void interseccao(conjunto c[]){
    int num;
    scanf("%d",&num);
    int num2;
    scanf("%d",&num2);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(c[num].elem[i]==c[num2].elem[j]){
                printf("\nA interseccao contem: %d",c[num].elem[i]);
            }
        }
    }
}
void diferenca(conjunto c[]){
    int num;
    scanf("%d",&num);
    int num2;
    scanf("%d",&num2);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("\nDiferenca entre os n: %d",c[num].elem[i]-=c[num2].elem[j]);
        }
    }
}
void menormaiorvalor(conjunto c[]){
    int aux;
    int aux2;
    int num;
    scanf("%d",&num);
    for(int i=0;i<3;i++){
        if(c[num].elem[i]>aux){
            aux=c[num].elem[i];
        }
        else if(c[num].elem[i]<aux2){
            aux2=c[num].elem[i];
        }
    }
    printf("Maior numero: %d\nMenor numero: %d\n",aux,aux2);
}
int vazio(conjunto c[],int num){
    if(c[num].elem[0]==0&&c[num].elem[1]==0&&c[num].elem[2]==0){
        return 1;
    }
    else{
        return -1;
    }
}
int tamanho(conjunto c[]){

}
int iguais(conjunto c[]){
    int num,num2;
    printf("Digite o primeiro conjunto:\n");
    scanf("%d",&num);
    printf("Segundo:\n");
    scanf("%d",&num2);
    for(int i=0;i<3;i++){
        if(c[num].elem[i]==c[num2].elem[i]){
            return 1;
        }
        else{
            return -1;
    }
}
int main()
{
    conjunto c[5];
    inserir(c);
    criarconj(c);
    uniao(c);
    interseccao(c);
    diferenca(c);
    menormaiorvalor(c);
    if(vazio(c,1)==1){
        printf("Este conjunto esta vazio\n");
    }
    else{
        printf("O conjunto nao esta vazio\n");
    }
    if(iguais(c)==1){
        printf("Conjuntos iguais\n");
    }
    else{
        printf("Conjuntos nao iguais\n");
    }
    return 0;
}