#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 31
float altura, peso;
printf("Digite sua altura:\n ");
scanf("%f", &altura);
printf("Digite seu peso:\n ");
scanf("%f", &peso);
if(altura < 1.20){
    if(peso <= 60)
        printf("Classificacao A");
    else (peso <= 90) ?
        printf("Classificacao D") :
        printf("Classificacao G");
}
else if(altura < 1.70){
    if(peso <= 60)
        printf("Classificacao B");
    else (peso <= 90) ? printf("[λ] Classificacao E\n") :
        printf("Classificacao H");
}
else{
    if(peso <= 60)
        printf("Classificacao C");
    else (peso <= 90) ?
        printf("Classificacao F") :
        printf("Classificacao I");
}

    return 0;
}
