#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Declare e inicialize uma estrutura para armazenar as informa ̧c ̃oes de um aluno
(nome, matr ́ıcula, nota) e imprima seus valores.
*/

typedef struct{
    char nome[30];
    int matricula;
    int nota;
}Alunos;

void imprimirStruct(Alunos variavel_auxi){
    printf("O nome do aluno eh: %s.\n", variavel_auxi.nome);
    printf("A nota do aluno eh: %d.\n", variavel_auxi.nota);
    printf("A matricula do aluno eh: %d.\n", variavel_auxi.matricula);
}


int main (){
setlocale(LC_ALL, "Portuguese");
    Alunos aluno = {
        .matricula = 1230,
        .nome = "Nathan",
        .nota = 10
    };

    imprimirStruct(aluno);


return 0;
}
