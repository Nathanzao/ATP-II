#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Declare e inicialize uma estrutura para armazenar as informa ̧c ̃oes de um fun-
cion ́ario (nome, sal ́ario, departamento) e imprima seus valores.
*/

typedef struct{
    char nome[30];
    int salario;
    char departamento[30];
}funcionario;

void imprimirStruct(funcionario var_emprestada){
    printf("Nome: %s", var_emprestada.nome);
    printf("Salario: %d", var_emprestada.salario);
    printf("\nDepartamento: %s\n", var_emprestada.departamento);
}

int main (){
setlocale(LC_ALL, "Portuguese");
    funcionario Funci;

    printf("Digite o nome do funcionário: ");
    fgets(Funci.nome, 30, stdin);
    fflush(stdin);

    printf("Digite o salario do funcionario: ");
    scanf("%d", &Funci.salario);
    fflush(stdin);

    printf("Digite o departamento do funcionario: ");
    fgets(Funci.departamento, 30, stdin);
    fflush(stdin);

    printf("\n");
    imprimirStruct(Funci);

return 0;
}