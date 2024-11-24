#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Crie uma função recursiva para calcular a potência de um número.
*/

int calcular_potencia(int numero, int potencia)
{
    if (potencia == 0)
    {
        return 1;
    }
    else
    {
        return numero * calcular_potencia(numero, potencia - 1);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero = 0, potencia = 0;

    printf("Digite o numero desejado: ");
    scanf("%d", &numero);
    printf("Digite a potencia desejada: ");
    scanf("%d", &potencia);

    printf("\n\nO valor da potencia %d de %d, eh: %d.\n\n", potencia, numero, calcular_potencia(numero, potencia));

    return 0;
}