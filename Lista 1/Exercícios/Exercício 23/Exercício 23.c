#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que determine se um array de
10 inteiros � sim�trico (um pal�ndromo).
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[10], confirma = 0;
    for (int i = 0; i < 10; i++){
        printf("Digite a %d� posi��o do vetor: ", i+1);
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }
    if (vetor[0] == vetor[9]){ // o dez � o '\0'
        for (int i = 0; i < 10; i++){
            if (vetor[i] == vetor[9-i]){
                confirma++;
            }
        }
    }
    if (confirma == 10){
        printf("� pal�ndromo!");
    }else{
        printf("N�o � pal�ndromo!");
    }




return 0;
}
