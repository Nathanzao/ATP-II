#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Utilize a declara ̧c ̃ao de tipos (typedef) para simplificar a defini ̧c ̃ao de uma es-
trutura para armazenar as informa ̧c ̃oes de um cliente (nome, idade, endere ̧co) e
imprima seus valores.
*/

typedef struct{
    char nome[30];
    int idade;
    char endereco[30];
}Cliente;

void imprimirStruct(Cliente var_emprestada){
    printf("Nome: %s", var_emprestada.nome);
    printf("Idade: %d", var_emprestada.idade);
    printf("\nEndereco: %s\n", var_emprestada.endereco);
}


int main (){
setlocale(LC_ALL, "Portuguese");
    Cliente clicli;

    printf("Digite o nome do cliente: ");
    fgets(clicli.nome, 30, stdin);
    fflush(stdin);

    printf("Digite a idade do cliente: ");
    scanf("%d", &clicli.idade);
    fflush(stdin);

    printf("Digite o endereco do cliente: ");
    fgets(clicli.endereco, 30, stdin);
    fflush(stdin);

    printf("\n");
    imprimirStruct(clicli);

return 0;
}