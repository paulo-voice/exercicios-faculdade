#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int vet[5],media=0,maior=0,menor;
    for(int i=0;i<5;i++){
        printf("Digite o %d numero: ",(i+1));
        scanf("%d",&vet[i]);
        media+=vet[i];
        if(maior<vet[i]){
            maior=vet[i];
        }
        else if(menor>vet[i]){
            menor=vet[i];
        }
    }
    printf("O maior numero eh %d\nO menor numero eh %d\nA media dos numeros eh de %d",maior,menor,media/5);
    
    return 0;
}