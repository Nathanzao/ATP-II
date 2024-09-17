#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que receba 5 n�meros inteiros
como argumentos na linha de comando e imprima o maior deles.
*/

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[5], j = 0, maior = 0;

    if (argc > 6)
    {
        printf("� para ter apenas 6 par�metros.");
    }
    else
    {
        for (int i = 1; i < 6; i++)
        {
            vetor[j] = atoi(argv[i]);
            j++;
        }
        maior = vetor[0];
        for (int i = 0; i < 5; i++)
        {
            if (maior < vetor[5 - 1 - i])
            {
                maior = vetor[5 - 1 - i];
            }
        }
    }
    printf("O maior elemento �: %d", maior);

    return 0;
}
