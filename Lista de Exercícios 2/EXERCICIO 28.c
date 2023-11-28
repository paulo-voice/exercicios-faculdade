#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n,e=1,i,j,num,fator;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    for(i=1;i<=n;++i){
        num=1.0/i;
        fator=1;
        for(j=num; j>0; --j){
            fator*=num;}
        e+=fator;}
    printf("Valor de E: %d", e);
    return 0;
}
