#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int vet[6],inverso;
    for(int i=0;i<6;i++){
        printf("Digite o %d numero: ", (i+1));
        scanf("%d",&vet[i]);
    }
    for(int i=5;i>=0;i--){
        printf("%d\n",vet[i]);
    }
    return 0;
}