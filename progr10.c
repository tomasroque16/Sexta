#include <stdio.h>

int main(void){
     int choice;
    char nome[256];
    int age;
    int soma;
    int id;

    printf("inserir id:\n->");
    scanf("%d",&id);

    printf("inserir nome:\n->");
    scanf("%d",&nome);

    printf("inserir idade:\n->");
    scanf("&d",&age);

do
{
 printf("Menu\n\n1. id\n2. nome\n3. idade\n\n\t->");
 scanf("%d",&choice)

switch (choice)
 {
     case 1:
        printf("Menu.\n");
          break;
          
     case 2:
     printf("insere o seu id:\n\t->");
        scanf("%d" ,&id);
     printf("insere o seu nome:\n\t->");
        scanf("%s" ,&nome);
    printf("Insere a sua idade:\n\t->");
        scanf("%d" ,&age);