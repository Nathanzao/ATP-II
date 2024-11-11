#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Declare e inicialize uma estrutura aninhada para armazenar as informa ̧c ̃oes de
um endere ̧co (rua, n ́umero, cidade) e imprima seus valores.
*/

typedef struct{
    char rua[30];
    char cidade[30];
    int numero;
}Endereco;


typedef struct{
    int habitantes;
    int tamanho;
    char nome[30];
    Endereco enderecos; /* Estrutura aninhada. */
}Pais;

void imprimirStruct(Pais variavel_auxiliar){ /* Imprimindo a Struct. */
    printf("Nome do pais: %s\n", variavel_auxiliar.nome);
    printf("Tamanho do pais: %d.\n", variavel_auxiliar.tamanho);
    printf("Quantidade de habitantes do pais: %d.\n", variavel_auxiliar.habitantes);
    printf("\n      Enderecos: \n");
    printf("Rua: %s\n", variavel_auxiliar.enderecos.rua);
    printf("Cidade: %s\n", variavel_auxiliar.enderecos.cidade);
    printf("Numero: %d.\n", variavel_auxiliar.enderecos.numero);
}


int main (){
setlocale(LC_ALL, "Portuguese");
    Pais alemanha ={
        .habitantes = 102,
        .tamanho = 1000,
        .nome = "AAlemanha",
        .enderecos = {
            .cidade = "Berlim",
            .rua = "Arroz",
            .numero = 33
        }
    };

    imprimirStruct(alemanha);

    



return 0;
}
