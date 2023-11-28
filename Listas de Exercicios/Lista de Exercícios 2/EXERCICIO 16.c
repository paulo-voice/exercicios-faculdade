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
            for(i=n;i>=0;i=i-2){
                if(n%2==1){
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
