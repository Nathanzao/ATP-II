#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que encontre a posi��o (linha e coluna)
de um elemento espec�fico em uma matriz 3x3.
*/

int main (){

    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3], numero = 0;

    for(int i = 0; i < 3; i++){ // armazenando os valores na matriz.
        for (int j = 0; j < 3; j++){
            printf("Digite o valor do elemento da matriz da %d� linha e %d� coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Matriz: \n");
    for (int i = 0; i < 3; i++){ //exibindo a matriz.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 3; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");

    printf("Digite o n�mero desejado: ");
    scanf("%d", &numero);

    for(int i = 0; i < 3; i++){ // vendo se tem o valor.
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] == numero){
                printf("O n�mero %d est� na linha %d e coluna %d!\n\n", numero, i+1, j+1);
            }else{
                if(i == 2 && j == 2){
                    printf("N�o h� esse n�mero na matriz.\n\n");
                }
            }
        }
    }

return 0;
}
