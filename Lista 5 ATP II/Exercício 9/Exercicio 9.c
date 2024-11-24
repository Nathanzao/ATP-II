#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva uma função recursiva para inverter uma string.
*/

int inverter_string(char *vetor, int tamanho, int inicio)
{
    char variavel_auxiliar;
    
    if (inicio > tamanho)
    {
        return 0;
    }
    else
    {
        variavel_auxiliar = vetor[inicio];
        vetor[inicio] = vetor[tamanho];
        vetor[tamanho] = variavel_auxiliar;
        return inverter_string(vetor, tamanho - 1, inicio + 1);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char vetor[15];

    printf("Digite a String desejada: ");
    scanf("%s", vetor);
    fflush(stdin);

    inverter_string(vetor, strlen(vetor) - 1, 0);

    printf("\n\n%s\n\n", vetor);

    return 0;
}