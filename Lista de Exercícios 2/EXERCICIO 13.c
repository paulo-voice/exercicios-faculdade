#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n,i;
    while(n){
        printf("Digite um numero:");
        scanf("%d",&n);
        if(n){
            for(i=0;i<=n;i=i+2){
                if(n%2==0){
                    printf("%d\n",i);
                }
            }
        }
        else{
            printf("Terminou\n");
        }
    }
    return 0;
    }
