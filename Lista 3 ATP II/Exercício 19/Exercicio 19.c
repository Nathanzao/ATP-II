#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Crie uma fun ̧c ̃ao que recebe uma estrutura de carro (marca, modelo, ano) como
parˆametro e imprima seus valores.
*/

struct Carros{
    char marca[30];
    char modelo[30];
    int ano;
};

void imprimirStruct(struct Carros *var_emprestada){
    printf("Marca: %s\n", var_emprestada->marca);
    printf("Ano de Lancamento: %d.", var_emprestada->ano);
    printf("\nModelo: %s\n", var_emprestada->modelo);
}


int main (){
setlocale(LC_ALL, "Portuguese");
    struct Carros carro = {
        .ano = 1996,
        .marca = "VKSWG",
        .modelo = "CIVIC"
    };

    struct Carros *ponteiro = &carro;

    imprimirStruct(ponteiro);

    

return 0;
}


/* carro = {
        .marca = "Toyota",
        .modelo = "NaoConheco",
        .ano = 1996
    }; POR QUE NAO DEU ASSIM?*/ 