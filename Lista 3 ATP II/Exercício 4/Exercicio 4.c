#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Acesse os componentes de uma estrutura de aluno (nome, matrícula, nota)
utilizando o operador ponto ‘.’ e imprima seus valores.
*/

typedef struct {
    char nome[30];
    int matricula;
    int nota;
}Aluno;


int main (){
setlocale(LC_ALL, "Portuguese");
    Aluno aluno;

    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, 30, stdin);
    fflush(stdin);
    printf("%s\n", aluno.nome);

    printf("Digite o número de matrícula do aluno: ");
    scanf("%d", &aluno.matricula);
    printf("%d\n", aluno.matricula);

    printf("Digite a nota do aluno: ");
    scanf("%d", &aluno.nota);
    printf("%d\n", aluno.nota);



return 0;
}
