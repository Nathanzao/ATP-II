#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva uma função recursiva para calcular o fatorial de um número.
*/

int fatorial(int numero)
{
    if (numero == 0)
    { // afinal, caso seja zero vai dar merda a multiplicação.
        return 1;
    }
    return numero * fatorial(numero - 1);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero = 0;

    printf("Digite o numero que deseja calcular o fatorial: ");
    scanf("%d", &numero);

    printf("\n\nO fatorial desse numero eh: %d.\n\n", fatorial(numero));

    return 0;
}