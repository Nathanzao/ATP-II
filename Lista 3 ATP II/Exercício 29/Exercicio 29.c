#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Acesse os componentes de uma estrutura de cliente (nome, idade, endere ̧co)
utilizando o operador ponto ‘.’ e imprima seus valores.
*/

typedef struct {
    char nome[30];
    char endereco[30];
    int idade;
}Cliente;

void imprimirStruct(Cliente *var_emprestada){
    printf("Nome: %s.\n", var_emprestada->nome);
    printf("Idade: %d", var_emprestada->idade);
    printf("\nEndereco: %s.\n", var_emprestada->endereco);
}


int main (){
setlocale(LC_ALL, "Portuguese");
    Cliente cli = {
        .nome = "NathanLindo",
        .idade = 18,
        .endereco = "Avinhao"
    };

    Cliente *ponteiro = &cli;

    imprimirStruct(ponteiro);

return 0;
}
