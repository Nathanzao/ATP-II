#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define LINHA 3
#define COLUNA 3

/*
Escreva um programa em C que verifique se uma matriz 3x3 é
uma matriz de permutação.
*/

void Permuta(int matriz[][COLUNA])
{
    int Linhas = 1;
    
    int ell = 0;

    for (int i = 0; i < LINHA; i++)
    {
        ell = 0;
        for (int j = 0; j < COLUNA; j++)
        {
            if (matriz[i][j] != 0 && matriz[i][j] != 1)
            {
                Linhas = 0;
            }
            if (matriz[i][j] == 1)
            {
                ell++;
            }
        }

        if (ell != 1)
        {
            Linhas = 0;
        }
    }

    int colunasv = 1;
    
    int umm;

    for (int i = 0; i < LINHA; i++)
    {
        umm = 0;
        for (int j = 0; j < COLUNA; j++)
        {
            if (matriz[j][i] != 0 && matriz[j][i] != 1)
            {
                colunasv = 0;
            }

            if (matriz[j][i] == 1)
            {
                umm++;
            }
        }

        if (umm != 1)
        {
            colunasv = 0;
        }
    }

    if (Linhas == 1 && colunasv == 1)
    {
        printf("\nEh matriz permutacao\n");
    }
    else
    {
        printf("\nNao eh matriz permutacao\n");
    }
}

int main()
{

    int matriz[LINHA][COLUNA];

    printf("Escreva os elementos:\n\n");
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("\n%d linha %d coluna: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    Permuta(matriz);

    printf("\nA matriz eh:\n");
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}