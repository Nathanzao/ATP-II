#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Crie uma função recursiva para encontrar o máximo elemento em um array.
*/

int maior_elemento(int *vetor, int tamanho, int maior)
{
    if (tamanho == 0)
    {
        return maior;
    }
    else
    {
        if (vetor[tamanho] > maior)
        {
            return maior_elemento(vetor, tamanho - 1, vetor[tamanho]);
        }
        return maior_elemento(vetor, tamanho - 1, maior);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor do vetor na %d posicao: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("O maior elemento do vetor eh: %d", maior_elemento(vetor, 5 - 1, 0));

    return 0;
}