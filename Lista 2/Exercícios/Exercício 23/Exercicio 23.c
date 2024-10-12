#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que calcule o determinante de uma
matriz quadrada 3x3.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int calculador = 1, matriz[3][3], determinante  = 0;

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


    for(int i = 0; i < 3; i++){
        calculador = 1;
        for(int j = 0; j < 3; j++){
            int inicio_i = i;
            int inicio_j = i + j;
                if(inicio_j >= 3){
                    inicio_j = 0;
                }
            calculador *= matriz[inicio_i][inicio_j];
            determinante += calculador;

        }
    }


    printf("O determinante da matriz �: %d.\n\n", determinante);

return 0;
}
