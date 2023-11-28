#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int a=0,i=0,j=0;
    int vet[10],iguais[a];
    for(i=0;i<10;i++){
        printf("Digite o %d numero: ",(i+1));
        scanf("%d",&vet[i]);
    }
    for(i=0;i<10;i++){
        for(j=i;j<11;j++){
            if(j==i){
                continue;
            }
            else if(vet==vet[i]){
                a++;
                iguais==vet[i];
                break;
            }
        }
    }
    for(i=0;i<a;i++){
        printf("Teve %d numeros iguais.",iguais);
    }
    return 0;
}