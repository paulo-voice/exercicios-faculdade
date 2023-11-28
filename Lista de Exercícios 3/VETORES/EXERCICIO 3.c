#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int numeros[10],quadrado[10];
    for(int i=0;i<10;i++){
        printf("Digite o numero %d: ", (i+1));
        scanf("%d",&numeros[i]);
        for(int i=0;i<10;i++){
            quadrado[i]=(pow(numeros[i],2));
        }
    }
    for(int i=0;i<10;i++){
        printf("Seu %d numero: %d\n",(i+1),quadrado[i]);
    }
    

    return 0;
}
