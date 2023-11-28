#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int A[4][4], B[4][4], C[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("A(%i,%i) = ", i, j);
            scanf("%i", &A[i][j]);
 }
}
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("B(%i,%i) = ", i, j);
            scanf("%i", &B[i][j]);
 }
}
   for(int i = 0; i < 4; i++){
       for(int j = 0; j < 4; j++){
           if(A[i][j] >= B[i][j]){
               C[i][j] = A[i][j];
               }
            else{
                C[i][j] = B[i][j];
  }
 }
}
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("C(%i,%i) = %i\n", i, j, C[i][j]);
 }

}
return 0;
}