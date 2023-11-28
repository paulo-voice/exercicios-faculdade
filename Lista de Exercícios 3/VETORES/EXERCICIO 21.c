#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int i=0,j=0,k=0;
    int a[10],b[10],c[10];
    for(i=0;i<10;i++){
        printf("1 vetor - numero %d: ",(i+1));
        scanf("%d",&a[i]);
        printf("2 vetor - numero %d: ",(i+1));
        scanf("%d",&b[i]);
        for(i=0;i<10;i++){
            c[i]=a[i]-b[i];
        }
    }
    for(i=0;i<10;i++){
        printf("Resultados de C numero %d: %d",i,c[i]);
    }

    
    return 0;
}