#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Desenvolva uma função recursiva para calcular a sequência de Fibonacci
até o enésimo termo.
*/

int fibonacci(int numero)
{
    if (numero == 1 || numero == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(numero - 1) + fibonacci(numero - 2);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero = 0;

    printf("Digite o enesimo termo desejado para calcular a sequencia de Fibonnaci: ");
    scanf("%d", &numero);

    if (numero == 0)
    {
        printf("\n\nDigite algum valor acima de zero.\n\n");
    }
    else
    {
        printf("\n\nO valor da enesima posicao da sequencia de Fibonnaci eh: %d.\n\n", fibonacci(numero));
    }

    return 0;
}