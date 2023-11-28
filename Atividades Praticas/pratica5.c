# include <stdio.h>
# include <stdlib.h>
//wmc
/*• Implemente as operações presentes em um TAD fila estática;

• Implemente uma função main que faça uso das operações
desenvolvidas anteriormente;*/

# define MAX 5

typedef struct fila{
	int inicio;
	int fim;
	int vetor [MAX];	
}Fila;

//<<<<<<<<<PROTOTIPOS DAS FUNCOES>>>>>>
Fila *criaFila();
void menu();
void liberaFila(Fila *f);
int inserirNaFila(Fila *f,int v);
int retirarDaFila(Fila *f, int *v);
int filaVazia(Fila *f);
int filaCheia ( Fila *f );

int main(){
	
	menu();
	
	
return 0;
}
//criando uma Fila
Fila *criaFila()
{
	Fila *f;
	f=(Fila*)malloc (sizeof(Fila));
	f->inicio = 0;
   	f->fim = 0;
	return f;
}
//funao esvaziando a Fila
void liberaFila(Fila *f)
{
	free(f);	
}

//funcao da Fila vazia
int filaVazia(Fila *f)
{
	if(f->fim == f->inicio ){
		return 1;
	}
	else {
		return 0;
	}	
}
//funcao da Fila cheia
int filaCheia ( Fila *f ) 
{
	if(f->fim == MAX ){
		return 1;
	}
	else {
		return 0;
	}
}

//funcao empilhando
int inserirNaFila(Fila *f,int v)
{
	if(filaCheia(f) == 1){
		return 0;
	}else{
		f->vetor[f->fim]=v;//inserindo o valor 
		f->fim++;//indicando a posicao do fim
		return 1;
	}
	
}
//funcao desempilha 
int retirarDaFila(Fila *f, int *v)
{
	if(filaVazia(f) == 1){
		return 0;
	}else{
		*v = f->vetor[f->inicio];
		f->inicio++;
		return 1;
	}	

}

//funcao menu
void menu()
{
	int opcao;
	int aux, v;
	Fila *f;
	f= criaFila();
	
	do{
		printf("\n\n\n<<<<<<<<<MENU OPCOES>>>>>>>\n\n");
		printf(" 1- Deseja emfilerar um elemento\n");
		printf(" 2- Deseja desempilhar um elemento\n");
		printf(" 3- Deseja destruir a Fila\n");
		printf(" 0- sair do programa\n\n");
		printf("Entre com opcao desejada : ");
		scanf("%d",&opcao);
		printf("\n");	
	
		switch(opcao)
		{
		 	case 1:
		 		printf("Efilerando os elementos : \n");
		 			inserirNaFila(f,5);
		 			inserirNaFila(f,7);
		 			inserirNaFila(f,9);
		 			inserirNaFila(f,10);
		 			inserirNaFila(f,24);
					printf("%d    \n",f->vetor[0]);	
					printf("%d    \n",f->vetor[1]);
					printf("%d    \n",f->vetor[2]);
					printf("%d    \n",f->vetor[3]);
					
		 	break;
			case 2:
		 		printf("\nDesempilhando o elemento ...\n");
		 			aux=retirarDaFila(f, &v);
		 				if(aux == 1 ){
		
		 					printf("\nO elemento desenpilhado eh : %d \n",v);
						}else{
							printf("A Fila esvaziou entre com a opcao 1 para inserir elementos\n\n");
						}	
		 	break;
		 	case 3:
		 		printf("\nDestruindo Fila ...\n");
		 			liberaFila(f);
		 	break;
			default:
	            printf("\n\n=====OPICAO INVALIDA=====\n\n\n");	
		}
	}while (opcao != 0);	
}
