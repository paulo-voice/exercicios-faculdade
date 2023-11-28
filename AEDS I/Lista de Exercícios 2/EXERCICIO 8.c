#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int num, i,mais,menos;
    printf("Digite o 1 numero: \n");
    scanf("%d",&num);
    mais=num;
    menos=num;

    for(i=2;i<=10;i++){
        printf("Digite o %d numero: \n",i);
        scanf("%d",&num);
        if(num>mais){
            mais=num;
        }
        else if(num<menos){
            menos=num;
        }
    }
        printf("\nO maior numero eh: %d\n",mais);
        printf("\nO menor numero eh: %d\n",menos);

       return 0;}
