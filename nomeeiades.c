#include <stdio.h>


int main(void){

    char name[256];
    int anoinput; 
    int ano = 2019;
    int idade;
    
    
    printf("Insira o seu nome:\n->\t");
        scanf("%s", name);

    printf("Insira o seu ano de nascimento:\n->\t");
        scanf("%d", &anoinput);

    idade = ano - anoinput;

    printf("%d anos de idade.\n", idade);


if (idade<=12 && idade>=10){
    printf("%s, podes entrar nas equipas A e B\n", name);
}
else if(idade<=15 && idade>=13){
    printf("%s, podes entrar nas equipas B e C\n", name);
}
else if(idade<=18 && idade>=16){
    printf("%s, podes entrar nas equipas C e D\n", name);
}
else( printf("%s, não podes entrar .\n", name));
}
-