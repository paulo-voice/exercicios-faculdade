#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Alunos{
    char nome[50];
    int matricula;
    float notas[3];
    float media;
}Alunos;
/************************FUNCOES*******************************/
void imprimir_aluno(int i,Alunos A[]);
void imprimir_matricula(int i,Alunos A[]);
void imprimir_notas(int i,Alunos A[]);
void imprimir_media(int i,Alunos A[]);
void impressao_elementos(int i,Alunos A[]);
void impressao_geral(int i,Alunos A[]);
void swap(Alunos *x,Alunos *y);
void Bubble_sort(Alunos *A, int n);
Alunos BuscadeAluno(int buscador,Alunos A[],int count);
Alunos alteracao(int buscador2,Alunos *A, int count);
/************************FUNCOES*******************************/
int main(){
    int count=1;
    char c;
    FILE *arqalunos;
    if((arqalunos=fopen("alunos.txt","r"))==NULL){
        printf("Nao foi possivel abrir o arquivo.");
        system("pause");
        exit(1);
    }
    while(fread(&c, sizeof(char), 1, arqalunos)){
        if(c  == '\n'){
            count++;
        }
    }
    fclose(arqalunos);
    arqalunos=fopen("alunos.txt","r+");
    struct Alunos *A =(struct Alunos*) malloc(count*sizeof(struct Alunos));
    for(int i=0;i<count;i++){
        fscanf(arqalunos,"%d",&A[i].matricula);
        fscanf(arqalunos,"%s",A[i].nome);
        for(int j=0;j<3;j++){
            fscanf(arqalunos,"%f",&A[i].notas[j]);
        }
        A[i].media=(A[i].notas[0]+A[i].notas[1]+A[i].notas[2])/3.0;
    }
    int entrada,i;
    do{
        printf("\nDigite o numero de acordo com a opcao para imprimir:\n\n");
        printf("1- Elementos\n");
        printf("2- Nomes dos alunos\n");
        printf("3- Nome dos alunos e suas notas finais\n");
        printf("4- Buscar os dados de um aluno\n");
        printf("5- Alunos ordenados de acordo com a matricula\n");
        printf("6- Editar as notas do aluno (necessario busca)\n");
        printf("7- Matricula, nome e maior nota da turma\n");
        printf("8- Matricula, nome e menor nota da turma\n");
        printf("9- Alunos aprovados, reprovados e media geral da turma\n");
        printf("0- Sair do programa\n\n");
        scanf("%d",&entrada);
        switch(entrada){
            case 1:{
                for(i=0;i<count;i++){
                    impressao_elementos(i,A);
                    printf("\n");
                }
                printf("\n");
                break;
            }
            case 2:{
                for(i=0;i<count;i++){
                    imprimir_aluno(i,A);
                }
                printf("\n");
                break;
            }
            case 3:{
                for(i=0;i<count;i++){
                    imprimir_aluno(i,A);
                    imprimir_notas(i,A);
                    imprimir_media(i,A);
                    printf("\n");
                }
                printf("\n");
                break;
            }
            case 4:{
                int buscador;
                Alunos B;
                printf("Digite o numero de Matricula:\n");
                scanf("%d",&buscador);
                B = BuscadeAluno(buscador,A,count);
                if(B.matricula != 1){
                    printf("Matricula: %d\n",B.matricula);
                    printf("Nome: %s\n",B.nome);
                    printf("Notas: %0.1f, %0.1f, %0.1f\n",B.notas[0],B.notas[1],B.notas[2]);
                    printf("Media do aluno: %0.1f\n",B.media);
                }else{
                    printf("Matricula nao encontrada\n");
                }
                printf("\n");
                break;
            }
            case 5:{
                for(i=0;i<count;i++){
                    Bubble_sort(A, count);
                    imprimir_aluno(i,A);
                    imprimir_matricula(i,A);
                    printf("\n");
                }
                printf("\n");
                break;
            }
            case 6:{
                int buscador2;
                Alunos C;
                printf("Digite o numero de Matricula:\n");
                scanf("%d",&buscador2);
                C = BuscadeAluno(buscador2,A,count);
                if(C.matricula!=1){
                    printf("Matricula: %d\n",C.matricula);
                    printf("Nome: %s\n",C.nome);
                    printf("Notas: %0.1f, %0.1f, %0.1f\n",C.notas[0],C.notas[1],C.notas[2]);
                    printf("Media do aluno: %0.1f\n",C.media);
                }
                else{
                    printf("Matricula nao encontrada");
                }
                alteracao(buscador2,A,count);
                printf("\n");
                break;
            }
            case 7:{
                int aux=0;
                for(int i=0;i<count;i++){
                    if(A[i].media>A[aux].media)
                    aux=i;
                }
                printf("Aluno com a melhor nota:\n");
                impressao_geral(aux,A);
                printf("\n");
                break;
            }
            case 8:{
                int aux=0;
                for(int i=0;i<count;i++){
                    if(A[i].media<A[aux].media){
                        aux=i;
                    }
                }
                printf("Aluno com a pior nota:\n");
                impressao_geral(aux,A);
                printf("\n");
                break;
            }
            case 9:{
                int apr=0,rep=0;
                float total=0;
                for(int i=0;i<count;i++){
                    total+=A[i].media;
                    if(A[i].media>=6){
                        apr++;
                    }else{
                        rep++;
                    }
                }
                printf("Total de aprovados: %d\nTotal de reprovados: %d\nMedia dos alunos: %0.1f\n",apr,rep,total/count);
                printf("\n");
                break;
            }
        }
    }while(entrada!=0);
    printf("Programa finalizado!");
    /*******************CRIACAO DO NOVO ARQUIVO********************************/
    Bubble_sort(A,count);//ira organizar os elementos em ordem de matricula dnv caso o usuario n tenha feito
    FILE *newfile;
    newfile =fopen("alunos(NEW).txt","w+");//criando um novo arquivo para os novos dados
    for(int i=0;i<count;i++){
        fprintf(newfile,"%d %s %0.1f %0.1f %0.1f %0.1f\n",A[i].matricula,A[i].nome,A[i].notas[0],A[i].notas[1],A[i].notas[2],A[i].media);
    }
    fclose(newfile);
    free(A);
    fclose(arqalunos);
    /*******************CRIACAO DO NOVO ARQUIVO********************************/
    return 0;
}
/*************************************************************/
//FUNCOES PRA IMPRIMIR OS DADOS
void imprimir_aluno(int i,Alunos A[]){
    printf("Aluno %d: %s\n",(i+1),A[i].nome);
}
void imprimir_notas(int i,Alunos A[]){
    printf("Notas: %0.1f, %0.1f, %0.1f\n",A[i].notas[0],A[i].notas[1],A[i].notas[2]);
}
void imprimir_matricula(int i,Alunos A[]){
    printf("Matricula: %d\n",A[i].matricula);
}
void imprimir_media(int i,Alunos A[]){
    printf("Media das notas: %0.1f\n",A[i].media);
}
void impressao_elementos(int i,Alunos A[]){//pensei em colocar o /t mas tava saindo muito torto, e quanto a media nao coloquei pq imaginei q seja uma impressao geral do arquivo em si
    printf("%d %s %0.1f %0.1f %0.1f",A[i].matricula,A[i].nome,A[i].notas[0],A[i].notas[1],A[i].notas[2]);
}
void impressao_geral(int i,Alunos A[]){
    printf("Matricula: %d\n",A[i].matricula);
    printf("Aluno %d: %s\n",(i+1),A[i].nome);
    printf("Notas: %0.1f, %0.1f, %0.1f\n",A[i].notas[0],A[i].notas[1],A[i].notas[2]);
    printf("Media das notas: %0.1f\n",A[i].media);
}
/*************************************************************/
/*************************************************************/
//FUNCAO DO BUBBLESORT (pedi um amigo pra que me enviasse essa funcao)
void swap(Alunos *x,Alunos *y){
   struct Alunos tmp = *x;
    *x =*y;
    *y = tmp;
}
void Bubble_sort(Alunos *A, int n){
    int i,j;
    for (i=(n-1);i>0;i--){
      for (j=0;j<i;j++){
         if (A[j].matricula>A[j+1].matricula){
            swap(&A[j],&A[j+1]);
         }
      }
   }
}
/*************************************************************/
/*FUNCOES DE BUSCA SEQUENCIAL
Criando uma nova variavel pra struct ela ira percorrer os elementos atraves do for procurando pela matricula scaneada na variavel buscador
se achar, a struct ira armazenar essa matricula e retornara a mesma, caso nao, int c ira valer 1 e ira dizer q a matricula nao foi encontrada */
Alunos BuscadeAluno(int buscador,Alunos A[],int count){
    Alunos B;
    int c=0;
    for(int i=0;i<count;i++){
        if(buscador==A[i].matricula){
            B=A[i];
            return B;
        }
    c=1;
    }
    if(c!=0){
        B.matricula=1;
        return B;
    }
}
/*nesta funcao, ela ira apenas comparar a variavel buscador2 com a matricula procurada na funcao de busca
e logo apos vai  dar um scanf para poder fazer a troca das notas*/
Alunos alteracao(int buscador2,Alunos *A, int count){
        for(int i=0; i<count;i++){
            if(buscador2 == A[i].matricula){
                printf("Primeira nota: ");
                scanf("%f",&A[i].notas[0]);
                printf("Segunda nota: ");
                scanf("%f",&A[i].notas[1]);
                printf("Terceira nota: ");
                scanf("%f",&A[i].notas[2]);
                A[i].media = (A[i].notas[0]+A[i].notas[1]+A[i].notas[2])/3;
            }
    }
}
/*************************************************************/
