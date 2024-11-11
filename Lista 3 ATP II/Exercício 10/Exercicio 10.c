#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Declare e inicialize uma uni ̃ao para armazenar um valor inteiro ou um valor
flutuante e imprima seus valores.
*/

typedef union{
    int valorIntero;
    float valorFloat;
}Val;

int main (){
setlocale(LC_ALL, "Portuguese");
    Val valores;

    printf("Digite o inteiro: ");
    scanf("%d", &valores.valorIntero);
    fflush(stdin);
    printf("O inteiro eh: %d.\n\n", valores.valorIntero);


    printf("Digite um float: ");
    scanf("%f", &valores.valorFloat);
    printf("O float eh: %f.\n", valores.valorFloat);

    printf("\n\n\nMostrando que a variavel inteira zerou: %d.\n\n\n", valores.valorIntero);

return 0;
}