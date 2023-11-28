#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[6]={1,0,5,-2,-5,7};
    int soma=0;
    printf("Soma de 0, 1 e 5: %d\n", soma=A[0]+A[1]+A[5]);
    A[4]=100;
    for(int i=0;i<6;i++){
        printf("%d\n",A[i]);
    }
    return 0;
}
