#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int vet[10],maior,menor;
    for(int i=0;i<10;i++){
        printf("Digite o %d numero: \n",(i+1));
        scanf("%d",&vet[i]);
        if(maior>vet[i]){
            maior=vet[i];
        }
        else if(menor<vet[i]){
            menor=vet[i];
        }
    }
    printf("O maior numero eh %d\n",maior);
    printf("O menor numero eh %d\n",menor);
    return 0;
}
