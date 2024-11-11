#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Declare um arranjo de estruturas para armazenar as informa ̧c ̃oes de 3 livros
(t ́ıtulo, autor, ano de publica ̧c ̃ao) e imprima seus valores.
*/

struct Livros{
    char titulo[30];
    char autor[30];
    int ano;
};

void imprimirStruct(struct Livros *var_emprestada){
    for(int i = 0; i < 3; i++){
        printf("Titulo do livro: %s\n", var_emprestada[i].titulo);
        printf("Ano de Lancamento: %d.", var_emprestada[i].ano);
        printf("\nAutor: %s\n", var_emprestada[i].autor);
    }
}

int main (){
setlocale(LC_ALL, "Portuguese");
    struct Livros livrozinho[3];
    struct Livros *ponteiro = livrozinho; /* Criando um ponteiro para à Struct. */

    for(int i = 0; i < 3; i++){
        if(i != 0){
            printf("\n\n");
        }

        printf("Digite o titulo do livro %d: ", i+1);
        fgets(ponteiro[i].titulo, 30, stdin); /* Veja que aqui eu poderia usar 'livrozinho' sem problemas também. */
        fflush(stdin);

        printf("Digite o nome do autor do livro %d: ", i+1);
        fgets(ponteiro[i].autor, 30, stdin);
        fflush(stdin);

        printf("Digite o ano de lancamento do livro %d: ", i+1);
        scanf("%d", &ponteiro[i].ano);
        fflush(stdin);
    }

    imprimirStruct(ponteiro);


return 0;
}
