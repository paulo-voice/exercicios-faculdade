#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int i,auxiliar =1 ;
    float soma=0;
    while(auxiliar){
        printf("Digite seu numero ou 0 para finalizar: \n");
        scanf("%d", &auxiliar);
        printf("Usuario digitou %d \n",auxiliar);
        soma=0;
        if (auxiliar){
            for (i=1;i<=auxiliar;i++){
                soma += (1.0/i);
}
        printf("O resultado da serie eh %f \n\n",soma);
}
        else{
                printf("entrada terminada pelo usuario \n");
        }
    }
    return 0;
}
