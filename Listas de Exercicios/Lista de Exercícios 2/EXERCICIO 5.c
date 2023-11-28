#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int val[10],total,i;
    for(i=1;i<=10;i++){
        printf("Digite o %d valor:\n",i);
        scanf("%d",&val[i]);
    }
    total=0;
    for(i=1;i<=10;i++){
        total=total+val[i];
    }
    printf("Valor total: %d", total);
       return 0;}
