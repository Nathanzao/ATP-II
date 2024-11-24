#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Atribua os valores de uma estrutura de produto para outra e imprima os valores
da nova estrutura.
*/

typedef struct{
    int codigo;
    char nome[30];
}Prod1;

typedef struct{
    int codigo2;
    char nome2[30];
}Prod2;

void trocaStruct (Prod1 *primeiro, Prod2 segundo){
    strcpy(primeiro->nome, segundo.nome2);

    primeiro->codigo = segundo.codigo2;
}

int main (){
setlocale(LC_ALL, "Portuguese");
    Prod1 produto1 = {
        .codigo = 123,
        .nome = "Arroz"
    };

    Prod1 *ponteiro = &produto1;

    Prod2 produto2 = {
        .codigo2 = 321,
        .nome2 = "Feijao"
    };

    printf("Struct 1: \n");
    printf("Nome: %s.\n", produto1.nome);
    printf("Numero: %d.", produto1.codigo);


    printf("\n\nStruct 2: \n");
    printf("Nome: %s.\n", produto2.nome2);
    printf("Numero: %d.", produto2.codigo2);

    trocaStruct(ponteiro, produto2);

    printf("\n\nStruct 1 Alterada: \n");
    printf("Nome: %s.\n", produto1.nome);
    printf("Numero: %d.", produto1.codigo);

return 0;
}
