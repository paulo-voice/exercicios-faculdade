#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int vet[10],i,neg=0,pos=0;
    for(i=0;i<10;i++){
        printf("Digite o %d numero: \n",(i+1));
        scanf("%d",&vet[i]);
        if(vet[i]<0){
            neg=neg+vet[i];
        }
        else if(vet[i]>0){
            pos=pos+vet[i];
        }
    }
    printf("Soma dos numeros positivos: %d\n",pos);
    printf("Soma dos numeros negativos: %d\n",neg);
    return 0;
}