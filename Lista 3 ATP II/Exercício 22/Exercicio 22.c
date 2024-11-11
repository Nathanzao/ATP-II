#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Declare e inicialize uma uni ̃ao para armazenar um valor char ou um valor inteiro
e imprima seus valores.
*/

typedef union{
    int idade;
    char letraInicial;
}Dados;

int main (){
setlocale(LC_ALL, "Portuguese");
    Dados dadinhos;

    

    printf("Digite a sua idade: ");
    scanf("%d", &dadinhos.idade);
    fflush(stdin);
    printf("A sua idade eh: %d.\n\n", dadinhos.idade);


    printf("Digite a primeira letra de seu nome: ");
    scanf("%c", &dadinhos.letraInicial);
    printf("A primeira letra de seu nome eh: %c.\n", dadinhos.letraInicial);

    printf("\n\n\nMostrando que a variavel inteira zerou: %d.\n\n\n", dadinhos.idade);

return 0;
}
