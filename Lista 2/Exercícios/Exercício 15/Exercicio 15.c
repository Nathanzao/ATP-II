#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que inverta a ordem das linhas de
uma matriz 3x3.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, matriz_b[3][3];

    printf("Matriz: \n");
    for (int i = 0; i < 3; i++){ //exibindo a matriz.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 3; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n\n\n");



    for(int i = 0; i < 3; i++){ // invertendo as linhas.
        for(int j = 0; j < 3; j++){
            matriz_b[i][j] = 0;
            matriz_b[i][j] = matriz[2 - i][j];
        }
    }

    printf("\n\n\n");
    printf("Matriz Invertida: \n");
    for (int i = 0; i < 3; i++){ //exibindo a matriz.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 3; j++){
            printf(" %d ", matriz_b[i][j]);
        }
    }
    printf("\n\n\n");

return 0;
}