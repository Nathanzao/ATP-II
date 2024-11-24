#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Declare e inicialize uma uni ̃ao para armazenar um valor double ou um valor
char e imprima seus valores.
*/

typedef union{
    double valorDouble;
    char valorChar;
}Val;

int main (){
setlocale(LC_ALL, "Portuguese");
    Val valores;

    printf("Digite o Double: ");
    scanf("%lf", &valores.valorDouble);
    fflush(stdin);
    printf("O Double eh: %lf.\n\n", valores.valorDouble);


    printf("Digite a primeira letra de seu nome: ");
    scanf("%c", &valores.valorChar);
    printf("A primeira letra de seu nome eh: %c.\n", valores.valorChar);

    printf("\n\n\nMostrando que a variavel inteira zerou: %lf.\n\n\n", valores.valorDouble);

return 0;
}
