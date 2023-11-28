#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int contagem=11,i=0;
    printf("Iniciando a contagem!\n");
    while(i<=9){
        contagem--;
        i++;
        printf("%d!\n",contagem);
    }
    printf("Fim!");
    return 0;}
