//DISCENTE: PAULO VINICIUS RUFFINI AZEVEDO
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct stack{
    int top;
    int items[MAX];
}stack;
int count;
void criarStack(stack *st);
int stcheio(stack *st);
int stvazio(stack *st);
void push(stack *st, int v);
void pop(stack *st);
void imprimirStack(stack *s);
int main()
{
    int v;
    int input;
    stack *st;
    do{
        printf("MENU\n1-CREATE STACK\n2-PUSH\n3-POP\n4-FULL?\n5-EMPTY?\n6-PRINT STACK\n");
        scanf("%d",&input);
        switch(input){
            case 1:{
                printf("Criando sua pilha\n");
                criarStack(st);
                break;
            }
            case 2:{
                printf("Insira o elemento a ser empilhado:\n");
                scanf("%d",&v);
                push(st,v);
                break;
            }
            case 3:{
                pop(st);
                break;
            }
            case 4:{
                if(stcheio(st)==1){
                    printf("Esta cheia\n");
                }else{
                    printf("Nao esta cheia\n");
                }
                break;
            }
            case 5:{
                if(stvazio(st)==1){
                    printf("Esta vazio\n");
                }else{
                    printf("Nao esta vazio\n");
                }
                break;
            }
            case 6:{
                imprimirStack(st);
                break;
            }
        }
    }while(input!=0&&input<7);
    return 0;
}
void criarStack(stack *st){
  st->top = -1;
}
int stcheio(stack *st){
  if (st->top==MAX-1)
    return 1;
  else
    return 0;
}
int stvazio(stack *st) {
  if (st->top==-1)
    return 1;
  else
    return 0;
}
void push(stack *st, int v){
  if (stcheio(st)) {
    printf("A pilha esta cheia!");
  } else {
    st->top++;
    st->items[st->top] = v;
  }
  count++;
}
void pop(stack *st){
  if (stvazio(st)) {
    printf("\n A pilha esta vazia \n");
  } else {
    printf("Item retirado: %d", st->items[st->top]);
    st->top--;
  }
  count--;
  printf("\n");
}
void imprimirStack(stack *st){
  printf("Pilha: ");
  for(int i=0;i<count;i++) {
    printf("%d",st->items[i]);
  }
  printf("\n");
}

