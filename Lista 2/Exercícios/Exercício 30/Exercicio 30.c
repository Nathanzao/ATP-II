#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que calcule a média dos elementos de
uma matriz 4x4.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[4][4];
float soma = 0;

    for(int i = 0; i < 4; i++){ // armazenando os valores na matriz.
        for (int j = 0; j < 4; j++){
            matriz[i][j] = rand () % 10;
        }
    }

    printf("Matriz: \n");
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

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            soma += matriz[i][j];
        }
    }

    printf("A média dos elementos da matriz é: %.2f", soma/(4*4));


return 0;
}
