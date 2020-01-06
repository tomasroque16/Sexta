#include <stdio.h>

int main(void){

char nome[256];
char estaciv;
char datanaxi;
float taxa;
int a, b, c, d;
int ano=2019;

        printf("Insire o Seu nome:\n->");
            scanf("%s", nome);

        printf("Insira o seu ano de nascimento:\n->");
            scanf(" %c", &datanaxi);

        printf("Insira a sua equipa:\n->");
            scanf("%d", &a, b, c, d);

switch (estaciv)
{
case 'S':
    taxa=0.25;
    break;
default:
    break;
}
switch (estaciv)
{
case 'D':
    taxa=0.18;
    break;
default:
    break;
}
switch (estaciv)
{
case 'C':
    taxa=0.19;
    break;
default:
    break;
}
switch (estaciv)
{
case 'U':
    taxa=0.22;
    break;

default:
    break;
}
switch (estaciv)
{
case 'V':
    taxa=0.09;
    break;

default:
    break;
}

switch (estaciv)
{
case 's':
    taxa=0.25;
    break;
default:
    break;
}
switch (estaciv)
{
case 'd':
    taxa=0.18;
    break;
default:
    break;
}
switch (estaciv)
{
case 'c':
    taxa=0.19;
    break;
default:
    break;
}
switch (estaciv)
{
case 'u':
    taxa=0.22;
    break;

default:
    break;
}
switch (estaciv)
{
case 'v':
    taxa=0.09;
    break;

default:
    break;
}

if(estaciv == 'D'|| estaciv == 'd' || estaciv == 'U'|| estaciv == 'u' || estaciv == 'C' || estaciv == 'c' || estaciv == 'S' || estaciv == 's' || estaciv == 'V' ||estaciv == 'v')
        printf("\n\nNome:\t-> %s\n\nEstado Civil:\t-> %c\nIRS:\t-> %0.2f %%.\n\n", nome, estaciv, taxa);
else{
    printf("\n\n\t'%c' Inválido\n\n", estaciv);
    printf("\n\n\t***N/A***\n\n");
}


}