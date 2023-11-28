#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num[6];
    printf("Digite 6 numeros\n");
    for(i=0; i<6; i++){
        printf("Numero %d: ", (i+1));
        scanf("%d", &num[i]);
   }
   return 0;
}