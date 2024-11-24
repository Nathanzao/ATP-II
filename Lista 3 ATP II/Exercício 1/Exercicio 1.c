#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Declare e inicialize uma estrutura para armazenar as informa ̧c ̃oes de um livro
(t ́ıtulo, autor, ano de publica ̧c ̃ao) e imprima seus valores.
*/

struct livro{
    char titulo[30];
    char autor[30];
    int ano_publi;

};

int main (){
setlocale(LC_ALL, "Portuguese");
struct livro livro;

    printf("Digite o nome do autor do livro: ");
    fgets(livro.autor, 30, stdin);
    fflush(stdin);

    printf("\nDigite o nome do livro do livro: ");
    fgets(livro.titulo, 30, stdin);

    printf("\nDigite o ano de publicacao do livro: ");
    scanf("%d", &livro.ano_publi);



    printf("\n\n\n\n\n");

    printf("Nome do autor: %s", livro.autor);
    printf("\nNome do livro: %s", livro.titulo);
    printf("Data de publicacao: %d", livro.ano_publi);



    printf("\n");
return 0;
}