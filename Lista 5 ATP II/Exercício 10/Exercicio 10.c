#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Implemente uma função recursiva para calcular a soma dos dígitos de um
número inteiro.
*/

int soma_digitos(int numero)
{
    if (numero < 10)
    {
        return numero;
    }
    else
    {
        return (numero % 10) + soma_digitos(numero / 10); // resto da divisao por dez sempre pega o ultimo elemento do inteiro.
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero = 0;

    printf("Digite o numero que deseja saber a soma dos digitos: ");
    scanf("%d", &numero);

    printf("\n\nA soma dos digitos eh: %d.\n\n", soma_digitos(numero));

    return 0;
}