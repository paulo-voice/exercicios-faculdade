#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 32
float preco1, preco2=0;
printf("Digite o preco antigo: ");
scanf("%f", &preco1);
if(preco1<50){
    preco2=preco1+(preco1*0.05);
    printf("O preco novo eh %.2f\n", preco2);
}
else if(preco2<100){
    preco2=preco1+(preco1*0.10);
    printf("O preco novo eh %.2f\n", preco2);
}
else{
    preco2=preco1+(preco1*0.15);
    printf("O preco novo eh %.2f\n", preco2);
}

if(preco2<80)
    printf("\nBarato\n");
else if(preco2<=120)
    printf("\nNormal\n");
else if(preco2<=200)
    printf("\nCaro\n");
else
    printf("\nMuito Caro\n");
    return 0;
}
