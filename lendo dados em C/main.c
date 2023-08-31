#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nome[256];
    int idade;

    printf("Bom dia, qual o seu nome?\n");
    scanf("%s",&nome);

    printf("Que lindo nome %s, qual a sua idade?\n",nome);
    scanf("%d",&idade);

    printf("Nome: %s\nIdade: %d\n",nome,idade);

    printf("\nAguarde enquanto lemos seus dados...\n");

    printf("A primeira letra do seu nome: %c\n",nome[0]);

    if(idade >= 18){
        printf("\nVoce e adulto!\n");
    }else if(idade >= 12){
        printf("\nVoce e adoolecente!\n");
    }else{
        printf("\nVoce e uma criança !\n");
    }

    return 0;
}
