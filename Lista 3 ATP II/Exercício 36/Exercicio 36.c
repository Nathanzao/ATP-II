#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Resolva um problema de cadastro de livros utilizando estruturas.
*/

typedef struct{
    int numero;
    char titulo[30];
}Liv;

void imprimirStruct(Liv variavel_aux){
    printf("O nome do livro eh: %s.\n", variavel_aux.titulo);
    printf("O Numero do livro eh: %d.\n", variavel_aux.numero);
}


int main (){
setlocale(LC_ALL, "Portuguese");
    Liv livros;

    printf("Digite o numero do livro: ");
    scanf("%d", &livros.numero);
    fflush(stdin);

    printf("Digite o nome do livro: \n\n");
    scanf("%s", livros.titulo);
    fflush(stdin);

    imprimirStruct(livros);


return 0;
}
