#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Resolva um problema de cadastro de alunos utilizando estruturas.
*/

typedef struct{
    char nome[30];
    int RA;
    int idade;
}alunos;

void imprimirStruct(alunos var_emprestada){
    printf("Nome: %s", var_emprestada.nome);
    printf("RA: %d", var_emprestada.RA);
    printf("\nIdade: %d\n\n", var_emprestada.idade);
}


int main (){
setlocale(LC_ALL, "Portuguese");
    alunos Alunos[3];

    for(int i = 0; i < 3; i++){
        printf("Digite o nome do aluno: ");
        fgets(Alunos[i].nome, 30, stdin);
        fflush(stdin);

        printf("Digite o RA do aluno: ");
        scanf("%d", &Alunos[i].RA);
        fflush(stdin);

        printf("Digite a idade do aluno: ");
        scanf("%d", &Alunos[i].idade);
        fflush(stdin);
        printf("\n\n");
    }

    for(int i = 0; i < 3; i++){
        imprimirStruct(Alunos[i]);
    }


return 0;
}