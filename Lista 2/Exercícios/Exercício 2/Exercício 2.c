#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que calcule a soma dos elementos de
uma matriz 4x4.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz[4][4], soma = 0;
    
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor da matriz na %d� linha e %d� coluna: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    
    for (int i = 0; i < 4; i++)
    {
        if (i != 0)
        {
            printf("\n");
        }
        for (int j = 0; j < 4; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
    }
    
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            soma += matriz[i][j];
        }
    }
    printf("\n");

    printf("\n");
    printf("\nA soma �: %d", soma);

    return 0;
}
