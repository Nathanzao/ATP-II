#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que declare um array de 10
inteiros e passe esse array para uma fun��o que encontre o maior elemento do
array.
*/

void maior_elemento_vetor(int *vetor)
{
    int maior = 0;
    
    
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            maior = vetor[i];
        }
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    printf("O maior valor do vetor �: %d", maior);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor_do_main[10];
    
    
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor da %d� posi��o do inteiro: \n", i + 1);
        scanf("%d", &vetor_do_main[i]);
    }
    printf("\n");
    
    
    maior_elemento_vetor(vetor_do_main);

    return 0;
}
