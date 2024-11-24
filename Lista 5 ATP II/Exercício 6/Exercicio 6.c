#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Implemente uma função recursiva para imprimir os elementos de um array
na ordem inversa.
*/

void ordem_inversa(int *vetor, int tamanho)
{
    if (tamanho == 0)
    {
        return printf(" %d ", vetor[tamanho]);
    }
    else
    {
        printf(" %d ", vetor[tamanho]);
        return ordem_inversa(vetor, tamanho - 1);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[5] = {4, 2, 5, 9, 12};

    ordem_inversa(vetor, 5 - 1);

    return 0;
}