#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que declare um array de 5 inteiros
e passe esse array para uma fun��o que calcule a m�dia dos elementos do array.
*/

float media_vetor(int *vet)
{
    float soma = 0;
    
    
    for (int i = 0; i < 5; i++)
    {
        soma += vet[i];
    }
    return (soma / 5);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[5];
    float resultado = 0;
    
    
    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite o valor do vetor na posi��o %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    resultado = media_vetor(vetor);
    
    
    printf("\n O resultado �: %.3f", resultado);

    return 0;
}
