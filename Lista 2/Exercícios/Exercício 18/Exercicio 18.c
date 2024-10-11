#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que verifique se uma matriz 3x3 é
uma matriz identidade.
*/

int main (){

    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3], contador_diagonal = 0, contador_restantes = 0;

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

    for(int i = 0; i < 3; i++){ // vendo se é matriz identidade.
        for(int j = 0; j < 3; j++){
            if(i == j){
                if(matriz[i][j] == 1){
                    contador_diagonal++;
                }
            }else{
                if(matriz[i][j] == 0){
                    contador_restantes++;
                }
            }
        }
    }

    if(contador_diagonal == 3 && contador_restantes == (3*3) - 3){ // conferindo os contadores.
        printf("A matriz é Matriz Identidade!\n\n");
    }else{
        printf("A matriz não é Matriz Identidade!\n\n");
    }

return 0;
}
