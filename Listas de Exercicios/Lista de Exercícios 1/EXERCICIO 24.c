#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 24 (nao sabia se era para designar 1,2,3,4 para cada estado então procurei sobre como utilizar a variavel char)
float preco;
char estado[2];
printf("Digite o preco do produto: \n");
scanf("%f", &preco);
printf("Digite o estado: \n");
scanf("%s", estado);
if(strcmp (estado, "MG")==0){
    printf("Preco final do produto: %.2f\n", preco*0.07+preco);
}
else if(strcmp (estado, "SP")==0){
    printf("Preco final do produto: %.2f\n", preco*0.12+preco);
}
else if(strcmp (estado, "RJ")==0){
    printf("Preco final do produto: %.2f\n", preco*0.15+preco);
}
else if(strcmp (estado, "MS")==0){
    printf("Preco final do produto: %.2f\n", preco*0.08+preco);
}
else{
    printf("Estado nao eh valido!");
}
    return 0;
}
