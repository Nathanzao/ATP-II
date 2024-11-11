#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Atribua os valores de uma estrutura de contato para outra e imprima os valores
da nova estrutura.
*/

typedef struct{
    int numero;
    char nome[30];
}Contato1;

typedef struct{
    int numero2;
    char nome2[30];
}Contato2;

void transfereStruct(Contato1 primeiro, Contato2 *segundo){
    strcpy(segundo->nome2, primeiro.nome); /* Alterando os nomes. */
    
    segundo->numero2 = primeiro.numero; /* Alterando os numeros. */
}

int main (){
setlocale(LC_ALL, "Portuguese");
    Contato1 first = {
        .nome = "Nathan",
        .numero = 123
    };

    Contato2 second = {
        .nome2 = "Jose",
        .numero2 = 321
    };

    printf("Struct 1: \n");
    printf("Nome: %s.\n", first.nome);
    printf("Numero: %d.", first.numero);


    printf("\n\nStruct 2: \n");
    printf("Nome: %s.\n", second.nome2);
    printf("Numero: %d.", second.numero2);

        


    Contato2 *ponteiroSecond = &second; /* Definindo um ponteiro para a 2ª Struct. Precisamos pois vamos
    alterar em um função. */

    transfereStruct(first, ponteiroSecond);

    printf("\n\nStruct 2 Alterada: \n");
    printf("Nome: %s.\n", second.nome2);
    printf("Numero: %d.", second.numero2);

return 0;
}
