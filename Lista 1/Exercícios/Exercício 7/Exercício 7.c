#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Escreva um programa em C que leia 6 valores de ponto flutu-
ante e calcule a m�dia dos valores.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
float vetor[6], soma = 0;
int i = 0;
    while (i != 6){
        printf("Digite o %d� valor para ser somado: ", i+1);
        scanf("%f", &vetor[i]);
        fflush(stdin);
        i++;
    }
    for (i = 0; i < 6; i++){
        soma += vetor[i];
    }
    printf("O valor da m�dia �: %f", soma/6);

return 0;
}
