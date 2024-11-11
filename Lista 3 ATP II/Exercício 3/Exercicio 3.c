#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Atribua os valores de uma estrutura para outra e imprima os valores da nova
estrutura.
*/

typedef struct{
    int idade;
    int tempVida;
}Primeira;


typedef struct{
    Primeira pprimeira;
    char nome[30];
}Segunda;

int main (){
setlocale(LC_ALL, "Portuguese");
    Segunda segunda;
    Primeira primeira;

    printf("Digite a idade da pessoa em anos: ");
    scanf("%d", &primeira.idade);
    fflush(stdin);

    primeira.tempVida = 2024 - primeira.idade;
    segunda.pprimeira = primeira;

    printf("Digite o nome da pessoa: ");
    fgets(segunda.nome, 30, stdin);
    fflush(stdin);

    printf("\n\n\n");

    printf("Idade: %d. Tempo de vida: %d. Nome: %s.", segunda.pprimeira.idade, segunda.pprimeira.tempVida, segunda.nome);



    printf("\n\n");
return 0;
}