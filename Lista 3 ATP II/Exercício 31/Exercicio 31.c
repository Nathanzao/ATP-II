#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Crie uma fun ̧c ̃ao que recebe uma estrutura de funcion ́ario (nome, sal ́ario, de-
partamento) como parˆametro e imprima seus valores.
*/

typedef struct {
    char nome[30];
    char departamento[30];
    int salario;
}Funcionario;

void imprimirStruct(Funcionario *var_emprestada){
    printf("Nome: %s.\n", var_emprestada->nome);
    printf("Salario: %d", var_emprestada->salario);
    printf("\nDepartamento: %s.\n", var_emprestada->departamento);
}


int main (){
setlocale(LC_ALL, "Portuguese");
    Funcionario cli = {
        .nome = "NathanLindo",
        .salario = 1800,
        .departamento = "Compras"
    };

    Funcionario *ponteiro = &cli;

    imprimirStruct(ponteiro);

return 0;
}
