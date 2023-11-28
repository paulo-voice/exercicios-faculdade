#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int vet[10];
    int i,aux, s=1, c=0, l;

    for(i=0; i<10; i++){
        printf("Digite o valor da posicao %d do vetor: ",i+1);
        scanf("%d",&vet[i]);
    }
    for(i=0; i<10; i++){
        if(vet[i] == 0){
            c++;
        }
    }
    for(i=0; i<10; i++){ 
        if(vet[i] == 0){
            if(vet[i+1] == 0) s=2;
            aux=vet[i];
            vet[i]=vet[i+s];
            vet[i+1]=aux;
            s++;
        }
    }
    l = i - c;
    printf("\n");
    for(i=0; i<l; i++){
        if(vet[i] != 0){
            printf("VetorFinal [%d] = %d\n",i+1,vet[i]);
        }
    }
    return 0;
}