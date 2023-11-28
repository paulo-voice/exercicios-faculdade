#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n=1,i;
    while(n){
        printf("Digite um numero:");
        scanf("%d",&n);
        if(n){
            for(i=1;i<=n;i++){
                printf("%d\n",i);
            }
        }
        else{
            printf("Terminou\n");
        }
    }

    return 0;
    }
