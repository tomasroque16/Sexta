#include <stdio.h>

int main(void);
int choice;
  receita= 0;
  despesas= 0;
  saldo= 0;

printf("Inserir o valor para receita a:\n->");
 scanf("%d", &receita)

printf("Inserir o valor das despesas a:\n->");
 scanf("%d" , &despesas)

printf("inserir o saldo final a:\n->");
 scanf("%d" , &saldo)

do
{
 printf("Menu\n\n1. receita\n2. despesas\n3. saldo\n\n\t->");
 scanf("%d",&choice)

switch (choice)
 {
     case 1:
        printf("Menu.\n");
          break;
          
     case 2:
     printf("insere a receita:\n\t->");
        scanf("%d" ,&receita);
     printf("insere o despesas:\n\t->");
        scanf("%s" ,&despesas);
    printf("Insere o seu saldo final:\n\t->")
    ;
        scanf("%d" ,&saldo);

return 0;

