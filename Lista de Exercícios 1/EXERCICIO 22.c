#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
//EXERCICIO 22

int idade, tempo;
printf("Digite primeiro sua idade e depois o tempo de serviço trabalhado: \n\n");
scanf("%d %d", &idade,&tempo);
if(idade>=65&&tempo>=30){
    printf("Pode se aposentar");
}
else if(idade>=60&&tempo>=25){
    printf("Pode se aposentar");
}
else{
    printf("Ainda não pode se aposentar");
}
    return 0;
}
