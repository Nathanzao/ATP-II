#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que implemente a busca binária em
uma matriz ordenada 4x4.
*/

int busca_binaria(int *vetor, int numero_desejado, int fim){
    int inicio = 0;
    int meio = (inicio + fim)/2;

    while(inicio <= fim){ //tanto para a possibilidade do valor ser menor ou maior que o meio funciona.
        if(numero_desejado == vetor[meio]){ //caso em que achamos.
            return meio;
        }else{
            if(numero_desejado < vetor[meio]){ //caso para esquerda.
                fim = meio - 1;
            }else{ //caso para direita.
                inicio = meio + 1;
            }
        }
        meio = (inicio + fim)/2; // sempre temos que calcular o meio de novo. Vai acontecer algum dos dois casos no while, por isso colocamos o meio fora dos ifs.
    }
    return -1; // não existe esse valor no vetor.
}


int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[4][4] = {{1,2,3,4},{11,12,13,14},{21,22,23,24},{31,32,33,34}}, matriz_linear[16], numero = 0;


    printf("\n\n\n");
    printf("Matriz: \n");
    for (int i = 0; i < 4; i++){ //exibindo a matriz.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 4; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n\n\n");

    printf("\n\nDigite o valor que deseja buscar: ");
    scanf("%d", &numero);
    printf("\n\n\n");


    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            matriz_linear[i * 4 + j] = matriz[i][j]; 
        }
    }

    for(int i = 0; i < 16; i++){
        printf(" %d ", matriz_linear[i]);
    }
    printf("\n\n\n");

    printf("O valor esta na posicao: %d.", busca_binaria(matriz_linear, numero, 15) + 1);


return 0;
}