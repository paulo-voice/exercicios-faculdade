#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int vet[10],i;
    for (i=0; i<10; i++){
        printf("Digite o valor do elemento %d: ", i);
        scanf("%d", &vet[i]);
    }
    int j;
    float temp;
    for (i=10; i > 0; i--){
        for(j = 1; j<= i; j++){
            if (vet [j-1] > vet[j] ){
                temp = vet[j-1];
                vet[j-1] = vet[j];
                vet[j] = temp;
            }
        }
    }
    printf("O valor ordenado e: ");
    for (i=0; i<10; i++){
        printf("%d",vet[i]);
}
return 0;
}