#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que encontre o menor elemento em
uma matriz 4x4.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[4][4], menor = 0;

    for(int i = 0; i < 4; i++){ // armazenando os valores na matriz.
        for (int j = 0; j < 4; j++){
            printf("Digite o valor do elemento da matriz da %d linha e %d coluna: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("     Matriz: \n");
    for (int i = 0; i < 4; i++){ //exibindo a matriz.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 4; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");

    menor = matriz[0][0];
    for (int i = 0; i < 4; i++){ // vendo o menor elemento da matriz.
        for (int j = 0; j < 4; j++){
            if(menor > matriz[i][j]){
                menor = matriz[i][j];
            }
        }
    }

    printf("\n\nO menor elemento é: %d\n\n", menor);

return 0;
}
