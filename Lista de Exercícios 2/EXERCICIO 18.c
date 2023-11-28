#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n,maior,q;
    printf("Digite seu numero: \n\n");
    scanf("%d",&n);
    maior=n;
    q=1;
    while(n!=0){
        printf("Digite seu numero: \n\n");
        scanf("%d",&n);
        if(maior<n){
            maior=n;
        }
        if(maior==n){
            q=q+1;
        }
        printf("O maior numero eh %d\n\nA quantidade numeros lidos eh %d\n\n",maior,n);
    }
  return 0;
}
