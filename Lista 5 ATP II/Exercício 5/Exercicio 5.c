#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva uma função recursiva para verificar se um número é primo.
*/

int eh_primo(int numero, int variavel_auxiliar)
{
    if (variavel_auxiliar == 1)
    {
        return 1;
    }
    else
    {
        if (numero % variavel_auxiliar != 0)
        {
            return eh_primo(numero, variavel_auxiliar - 1);
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero = 0;

    printf("Digite o numero que deseja verificar se eh primo: ");
    scanf("%d", &numero);

    if (eh_primo(numero, numero - 1) > 0)
    {
        printf("\nEh primo.\n");
    }
    else
    {
        printf("\nNao eh primo.\n");
    }

    return 0;
}