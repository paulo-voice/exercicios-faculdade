#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int valor[8],x,y,soma=0;
    for(int i=0;i<8;i++){
        printf("Digite o %d numero: \n",(i+1));
        scanf("%d",&valor[i]);
    }
    printf("Digite o valor de x e y (ate 10):");
    scanf("%d",&x);
    scanf("%d",&y);
    soma=valor[x]+valor[y];
    printf("A soma dessas duas posicoes eh: %d",soma);
    return 0;
}
