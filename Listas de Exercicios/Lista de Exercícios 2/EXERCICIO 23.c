#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n,i;
    printf("Digite o numero: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("Os divisores sao %d\n",i);
        }
    }
return 0;
}
