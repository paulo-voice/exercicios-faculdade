#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int num[10],i;
    for(i=1;i<=10;i++){
        printf("Digite o %d numero: \n",i);
        scanf("%d",&num[i]);
    }
    int media=0;
    for(i=1;i<=10;i++){
        media=media+num[i];
    }
        media=media/10;
    printf("A media dos numeros que vc digitou eh: %d",media);
       return 0;}
