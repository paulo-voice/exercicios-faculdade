#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int l=15;
    int matriz[l][l];
    for(int l=0;l<l;l++){
        for ( int c=0;c<l;c++){
            matriz[l][c]=l*c;
            printf("%4d",matriz[l][c]) ;
}
}
    return 0;
}