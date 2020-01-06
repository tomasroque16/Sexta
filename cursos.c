#include <stdio.h>

int main(void){
    int choice;
    char nome[256];
    int age;
    int valor1;
    int valor2;
    int soma;
    int curso;
 
do
{
 printf("Menu\n\n1. Formadores\n2. Alunos\n3. Cursos\n4. Apoios\n5. Sair\n\n\t->");

 scanf("%d",&choice);
   
 switch (choice)
 {
     case 1:
        printf("Menu dos Formadores selecionado.\n");
          break;
          
     case 2:
     printf("insere o seu nome:\n\t->");
        scanf("%s", nome);
    printf("Insere a sua idade:\n\t->");
        scanf("%d", &age);
    
    printf("Aluno %s, tem %d.\n", nome, age);
          break;
    
     case 3:
     printf("\nInsere o número do curso:\nOpções:\n\n1. TIS\n2. TIIGR\n3. GRSI\n\t->");
        scanf("%d", &curso);

     case 4:
     printf("insere valor 1:\n\t->");
        scanf("%d", &valor1);
     printf("insere valor 2:\n\t->");
        scanf("%d", &valor2);
            soma=valor1+valor2;
                if (soma>20)
                {
                    printf("Atingiu o limite.\n\n");
                }
                else
                {
                    printf("Ainda está dentro do limite.\n\n");
                }
            break;

     case 5: 
     printf("Adeus.\n"); 
         break;
     default:
                    break;
 } 
  
} while (choice != 5);
}