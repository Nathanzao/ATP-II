#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Utilize a declara ̧c ̃ao de tipos (typedef) para simplificar a defini ̧c ̃ao de uma estru-
tura para armazenar as informa ̧c ̃oes de um professor (nome, disciplina, sal ́ario)
e imprima seus valores.
*/

typedef struct{
    char nome[30];
    char disciplina[30];
    int salario;
}Professor;

void imprimirStruct(Professor variavel_auxi){
    printf("O nome do professor  eh: %s.\n", variavel_auxi.nome);
    printf("A disciplina do professor eh: %s.\n", variavel_auxi.disciplina);
    printf("O salario do professor eh: %d.\n", variavel_auxi.salario);
}


int main (){
setlocale(LC_ALL, "Portuguese");
    Professor aluno = {
        .disciplina = "Matematica",
        .nome = "Nathan",
        .salario = 10
    };

    imprimirStruct(aluno);


return 0;
}
