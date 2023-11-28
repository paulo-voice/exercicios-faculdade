//Paulo Vinicius Ruffini Azevedo - 2º Periodo Noturno
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct ponto{
    float x;
    float y;
}ponto;
ponto inicializarValores(ponto p1);
ponto lerValores(ponto p1);
ponto alterarValores(ponto p1);
int analisarQuadrante(ponto p1);
float distancia(ponto p1);
int quadranteParametro(ponto p1, int quadrante);
float maiorPonto(ponto p1);
int main()
{
    ponto p1,p2;
    int entrada,verificarq,parametro;
    float resultado;
    do{
        printf("MENU DE OPCOES\n");
        printf("1 - Inicializar com os parametros\n");
        printf("2 - Leitura de valores\n");
        printf("3 - Alterar valores\n");
        printf("4 - Verificar o quadrante\n");
        printf("5 - Verificar o quadrante passado por parametro\n");
        printf("6 - Distancia entre os pontos\n");
        printf("7 - Maior ponto\n\n");
        printf("Seus pontos sao: X= %d e Y= %d\n", p1.x,p1.y);
        scanf("%d", &entrada);
        int x,y;
        switch(entrada){
            case 1:{
                p1=inicializarValores(x,y);
                break;
            }
            case 2:{
                p1=lerValores(p1);
                break;
            }
            case 3:{
                p1=alterarValores(p1);
                break;
            }
            case 4:{
                verificarq=analisarQuadrante(p1);
                break;
            }
            case 5:{
                printf("Informe o quadrante: \n");
                scanf("%d",&parametro);
                quadranteParametro(p1,parametro);
                break;
            }
            case 6:{
                resultado=distancia(p1);
                break;
            }
            case 7:{
                maiorPonto(p1);
                break;
            }
        }
    }while(entrada!=0&&entrada<8);
    return 0;
}
//FUNÇÕES
ponto inicializarValores(ponto p1){
    p1.x=10;
    p1.y=20;
    return (p1);
}
ponto lerValores(ponto p1){
    printf("Insira dois pontos (x e y):\n");
    scanf("%f %f", &p1.x, &p1.y);
    return (p1);
}
ponto alterarValores(ponto p1){
    printf("Insira os novos valores para fazer a alteracao (x e y):\n");
    scanf("%f %f",&p1.x, &p1.y);
    return(p1);
}
int analisarQuadrante(ponto p1){
    int quad;
	if (p1.x > 0 && p1.y > 0){
        printf("Quadrante 1\n");
		quad = 1;
	}
	if (p1.x < 0 && p1.y > 0){
		printf("Quadrante 2\n");
		quad = 2;
	}
	if (p1.x < 0 && p1.y < 0){
		printf("Quadrante 3\n");
		quad = 3;
	}
	if (p1.x > 0 && p1.y < 0){
		printf("Quadrante 4\n");
		quad = 4;
	}
	return(quad);
}
float distancia(ponto p1){
    float calculo;
    ponto p2;
    printf("Insira dois valores do segundo ponto (x e y):\n");
    scanf("%f %f", &p2.x,&p2.y);
    calculo = sqrt((pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2)));
    printf("A distancia eh: %f\n",calculo);
    return(calculo);
}
int quadranteParametro(ponto p1, int quadrante){
    int quadp;
    quadp=analisarQuadrante(p1);
    if(quadp==quadrante){
        printf("O ponto esta no quadrante certo\n");
    }
    else{
        printf("O ponto nao esta no quadrante certo\n");
    }
}
float maiorPonto(ponto p1){
    if(p1.x>p1.y){
        printf("O primeiro ponto é maior que o segundo: %f\n",p1.x);
    }
    else{
        printf("O segundo ponto é maior que o primeiro: %f\n",p1.y);
    }
}
//TIVE DIFICULDADE PRA ESTAR TROCANDO OS VALORES X E Y DOS PONTOS, TENTEI DE DIVERSAS FORMAS MAS NÃO ESTÁ ALTERANDO.
