#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Declare um arranjo de estruturas para armazenar as informacoes de 5 produtos
(nome, codigo, preco) e imprima seus valores.
*/

typedef struct{
    char nome[30];
    int codigo;
    int preco;
}dados;

void imprimirStruct(dados var_emprestada){
    printf("nome: %s",var_emprestada.nome);
    printf("codigo: %d.",var_emprestada.codigo);
    printf("\npreco: %d.",var_emprestada.preco);
    printf("\n\n\n");
}

int main (){
setlocale(LC_ALL, "Portuguese");
    dados Dadinhos[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o nome do produto %d produto: ", i+1);
        fgets(Dadinhos[i].nome, 30, stdin);
        fflush(stdin);
    }

    for(int i = 0; i < 5; i++){
        printf("Digite o codigo do produto %d: ", i+1);
        scanf("%d", &Dadinhos[i].codigo);
    }

    for(int i = 0; i < 5; i++){
        printf("Digite o preco do produto %d: ", i+1);
        scanf("%d", &Dadinhos[i].preco);
    }

    for(int i = 0; i < 5; i++){
        imprimirStruct(Dadinhos[i]);
    }


return 0;
}
