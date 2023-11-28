#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 21
int opcao,a,b;
printf("Escolha a opção: \n1-Soma de 2 numeros \n2-Diferenca entre 2 numeros(maior pelo menor) \n3-Produto entre 2 numeros \n4-Divisao entre 2 numeros (o denominador nao pode ser zero)\n\n");
scanf("%d", &opcao);
if(opcao!=1&&opcao!=2&&opcao!=3&&opcao!=4){
    printf("Opcao invalida!");
    return 0;
}
printf("Digite seus dois valores: \n\n");
scanf("%d %d", &a,&b);
switch(opcao){
    case 1:
        printf("A soma dos seus numeros eh: %d", a=a+b);
        break;
    case 2:
        printf("A diferenca dos seus numeros eh de: %d", a=a%b);
        break;
    case 3:
        printf("O produto dos dois numeros eh: %d", a=a*b);
        break;
    case 4:
        if(b==0){
            printf("Denominador 0");
            return 0;
        }
        printf("A divisao entre os dois numero eh: %d", a=a/b);
        break;
}
    return 0;
}
