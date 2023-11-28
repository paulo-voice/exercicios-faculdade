#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int numero[10],i;
    for(i=0;i<10;i++){
        printf("Digite o %d valor:",i+1);
        scanf("%d",&numero);
        if(numero==???){
            printf("\nDigite novamente\n");
        }
    }
            
    printf("Vetor final:");
    for(i=0;i<10;i++){
        printf("\t %d",numero);
}
return 0;
}