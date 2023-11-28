#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 27
int idade;
printf("Digite a idade do nadador: \n");
scanf("%d", &idade);
if (idade <= 4){
    return 0;
}
else if(idade>=5&&idade<=7){
    printf("Infantil A");
}
else if(idade<=10){
    printf("Infantil B");
}
else if(idade<=13){
    printf("Juvenil A");
}
else if(idade<=17){
    printf("Juvenil B");
}
else if(idade>=18){
    printf("Senior");
}
    return 0;
}
