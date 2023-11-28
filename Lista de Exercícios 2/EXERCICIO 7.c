#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int num,i;
    float media=0;
    printf("Digite os 10 numeros inteiros: \n");
    for(i=1;i<=10;i++){
        printf("Digite o %d numero: \n",i);
        scanf("%d",&num);
        while(num<=0){
            printf("Numero negativo\n");
            scanf("%d",&num);
        }
        media=media+num;
    }
    media=media/10;

    printf("Sua media eh: %f",media);
       return 0;}
