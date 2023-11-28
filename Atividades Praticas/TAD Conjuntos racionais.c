#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct racional{
    float num[4];
}racional;

void criaracional(racional c){
    for(int i=0;i<4;i++){
        scanf("%f",&c.num[i]);
    }
}
void soma(racional c){
    float aux,aux2;
    c.num[0]+=c.num[1];
    c.num[2]+=c.num[3];
    printf("Soma dos dois primeiros numeros %0.2f\nSoma dos dois ultimos %0.2f\n",c.num[0],c.num[2]);
}
void multiplica(racional c){
    float aux,aux2;
    aux=c.num[0]*c.num[1];
    aux2=c.num[2]*c.num[3];
    printf("Multiplicacao dos dois primeiros numeros %0.2f\nMultiplicacao dos dois ultimos %0.2f\n",aux,aux2);
}
/*
void iguais(racional c){
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(c.num[i]=c.num[j]){
                printf("Numeros iguais\n");
            }
        }
    }
}
*/
int main()
{
    racional c;
    criaracional(c);
    soma(c);
    multiplica(c);
    //iguais(c);
    return 0;
}
