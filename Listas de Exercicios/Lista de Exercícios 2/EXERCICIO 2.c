#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{

    int contagem=0,i;
    for(i=0;i<=99;i++){
        contagem++;
        printf("Contando: %d\n", contagem);
}
    int contagem2=0;
    while(contagem2<=100){
        printf("Contando 2: %d\n",contagem2);
        contagem2++;
}
    int contagem3=0,i2=0;
    do{
        printf("Contando 3: %d\n",contagem3);
        contagem3++;
        i2++;
    }while(i2<=100);
    return 0;
}
