#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Crie uma funcao que recebe uma estrutura de aluno (nome, matricula, nota)
como parametro e imprima seus valores.
*/

typedef struct{
    char nome[30];
    int matricula;
    int nota;
}dados;


void imprimirStruct(dados n){ // notas é o apelido da Struct. N é o apelido dela dentro da função.

    printf("Nome: %s", n.nome);
    printf("Número matrícula: %d.", n.matricula);
    printf("\nNota: %d.", n.nota);

}


int main (){
setlocale(LC_ALL, "Portuguese");
    dados Dadinhos;

    printf("Digite o nome do aluno: ");
    fgets(Dadinhos.nome, 30, stdin);
    fflush(stdin);

    printf("Digite o número de matrícula do aluno: ");
    scanf("%d", &Dadinhos.matricula);

    printf("Digite a nota do aluno: ");
    scanf("%d", &Dadinhos.nota);

    printf("\n\n\n");

    imprimirStruct(Dadinhos);

return 0;
}
