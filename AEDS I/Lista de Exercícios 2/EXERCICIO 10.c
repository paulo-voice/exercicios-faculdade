#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n[50],i,soma=0;
    for(i=1;i<=50;i++){
        printf("Digite o %d numero: \n",i);
        scanf("%d",&n);
    }
    for(i=1;i<=50;i++){
        if(i%2==0){
            soma=soma+i;
        }
    }
    printf("A soma dos seus 50 numeros pares eh: %d\n",soma);
    return 0;
    }
