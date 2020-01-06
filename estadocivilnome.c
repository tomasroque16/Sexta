#include <stdio.h>
 
int main () {
   char estadocivil = 'B';
   switch(estadocivil)
      case 'C' :
         printf("Casado\n" );
         break;
      case 'S' :
         printf("Solteiro\n" );
         break;
      case 'D' :
         printf("Divorciado\n" );
         break;
      case 'V' :
         printf("Viuvo\n" );
         break;
      default :
         printf("Invalido \n" );
   }
   
   printf("Estado %c\n", grade );
 
   return 0;
