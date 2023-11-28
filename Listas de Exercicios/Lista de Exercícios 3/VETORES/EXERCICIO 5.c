#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int vet[10],cont=0;
    for(int i=0;i<10;i++){
        printf("Digite o %d numero: \n",(i+1));
        scanf("%d",&vet[i]);
        if(vet[i]%2==0){
            cont++;
        }
    }
    printf("Voce digitou %d valores pares.",cont);
    
    return 0;
}
