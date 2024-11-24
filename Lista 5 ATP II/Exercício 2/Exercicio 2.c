#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Implemente uma função recursiva para calcular a soma dos primeiros N
números naturais.
*/

int naturais(int numero)
{
    if (numero == 0)
    {
        return 0;
    }
    return numero + naturais(numero - 1);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero = 0;

    printf("Digite ate qual valor deseja calcular a soma dos naturais anteriores a ele: ");
    scanf("%d", &numero);

    printf("\n\nA soma dos %d primeiros naturais eh: %d.\n\n", numero, naturais(numero));

    return 0;
}