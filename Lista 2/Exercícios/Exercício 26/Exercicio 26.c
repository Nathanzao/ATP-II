#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que verifique se uma matriz 3x3 é
uma matriz esparsa (maioria dos elementos são zeros).
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[3][3], contador = 0;

    for(int i = 0; i < 3; i++){ // armazenando os valores na matriz.
        for (int j = 0; j < 3; j++){
            printf("Digite o valor do elemento da matriz da %dª linha e %dª coluna: ", i+1, j+1);
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

    for(int i = 0; i < 3; i++){ // vendo a quantidade de zeros que tem na matriz.
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] == 0){
                contador++;
            }
        }
    }

    if(contador > (3*3)/2){ //verificando se é matriz esparsa.
        printf("É matriz esparsa.\n\n");
    }else{
        printf("Não é matriz esparsa.\n\n");
    }



return 0;
}
