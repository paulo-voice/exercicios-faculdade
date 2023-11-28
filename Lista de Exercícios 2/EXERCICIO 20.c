#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
   int n,c,p;
   c = p = 0;
   printf("Digite o numero: \n");
   scanf("%d",&n);
   while (n!=1000){
       c++;
       if (n%2==0){
           p++;
           printf("O numero %d eh par \n", n);
       }
       printf("Digite mais um numero: \n");
       scanf("%d",&n);
   }
   printf("Foi digitado %d numeros e %d deles eram pares", c,p);
   return 0;
}
