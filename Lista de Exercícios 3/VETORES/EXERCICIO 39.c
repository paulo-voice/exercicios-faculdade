#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int n,i,j;
    printf("Informe o valor de n : ");
    scanf("%d",&n);
    int matriz[n][n];
    for (i=0;i<n;i++){
        for (j=0;j<=i;j++){
            if ((j==0) || (i==j)){
                matriz[j] = 1;
}   
    else{
    matriz[j] = matriz[i-1][j] + matriz[i-1][j-1];
}
}
}
    for (i=0;i<n;i++){
        for (j=0;j<=i;j++)
        printf(" %d",matriz[j]);
}
return 0;
}