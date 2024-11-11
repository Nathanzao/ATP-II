#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Acesse os componentes de uma estrutura de filme (t ́ıtulo, diretor, ano de lan ̧camento)
utilizando o operador “-¿” e imprima seus valores.
*/

typedef struct {
    char titulo[30];
    char diretor[30];
    int ano_lancamento;
}Filme;

void imprimirStruct(Filme *var_emprestada){
    printf("Titulo: %s", var_emprestada->titulo);
    printf("Ano de Lancamento: %d", var_emprestada->ano_lancamento);
    printf("\nDiretor: %s\n", var_emprestada->diretor);
}


int main (){
setlocale(LC_ALL, "Portuguese");
    Filme filmes;
    
    Filme *ponteiro = &filmes;

    printf("Digite o titulo do filme: ");
    fgets(ponteiro->titulo, 30, stdin);
    fflush(stdin);

    printf("Digite o ano do filme: ");
    scanf("%d", &ponteiro->ano_lancamento);
    fflush(stdin);

    printf("Digite o diretor do filme: ");
    fgets(ponteiro->diretor, 30, stdin);
    fflush(stdin);

    printf("\n");
    imprimirStruct(ponteiro);

return 0;
}