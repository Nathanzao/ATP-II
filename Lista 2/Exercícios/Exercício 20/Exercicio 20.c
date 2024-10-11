#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que calcule a soma das colunas de
uma matriz 4x3.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[4][3] = {{1,2,3},{4,5,6},{7,8,9},{1,2,3}}, soma[3];

    printf("Matriz: \n");
    for (int i = 0; i < 4; i++){ //exibindo a matriz.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 3; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n\n\n");


    for(int i = 0; i < 3; i++){ //zerando o vetor da soma.
        soma[i] = 0;
    }


    for(int i = 0; i < 3; i++){ //fazendo a soma.
        for(int j = 0; j < 4; j++){
            soma[i] += matriz[j][i];
        }
    }

    for(int i = 0; i < 3; i++){ //exibindo a soma.
        printf("Soma da %d coluna eh: %d\n", i+1, soma[i]);
    }





return 0;
}