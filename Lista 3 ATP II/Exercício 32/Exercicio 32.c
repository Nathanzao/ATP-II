#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Declare um arranjo de estruturas para armazenar as informa ̧c ̃oes de 4 produtos
(nome, c ́odigo, pre ̧co) e imprima seus valores.
*/

typedef struct{
    char nome[30];
    int codigo;
    int preco;
}Prods;

void imprimirStruct(Prods var_emprestada, int i){
    if(i != 0){
        printf("\n\n");
    }

    printf("Nome: %s.\n", var_emprestada.nome);
    printf("Preco: %d.", var_emprestada.preco);
    printf("\nCodigo: %d.\n", var_emprestada.codigo);
}


int main (){
setlocale(LC_ALL, "Portuguese");
    Prods produtos[4];

    for(int i = 0; i < 4; i++){
        printf("\n\nProduto %d: \n\n", i+1);

        printf("Digite o nome do %d produto: ", i+1);
        scanf("%s", produtos[i].nome);
        fflush(stdin);

        printf("Digite o preco do %d produto: ", i+1);
        scanf("%d", &produtos[i].preco);
        fflush(stdin);

        printf("Digite o codigo do %d produto: ", i+1);
        scanf("%d", &produtos[i].codigo);
        fflush(stdin);
    }

    printf("\n\n\n");
    for(int i = 0; i < 4; i++){
        imprimirStruct(produtos[i], i);
    }



return 0;
}
