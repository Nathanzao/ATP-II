#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Desenvolva uma função recursiva para calcular o MDC (Máximo Divisor
Comum) de dois n ́umeros.
*/

int menorr(int numero1, int numero2)
{ // acha o menor numero.
    if (numero1 > numero2)
    {
        return numero2;
    }
    else
    {
        return numero1;
    }
}

int MDC(int numero1, int numero2, int contador, int maximo)
{
    int menor = menorr(numero1, numero2); // pega o menor numero.
    
    
    if (contador > menor)
    { // caso ultrapasse o menor, ja para na hora e retorna o MDC maximo.
        return maximo;
    }
    else
    {
        if (numero1 % contador == 0 && numero2 % contador == 0)
        {                                                         // ve se os 2 numeros sao divisiveis por valores que so aumentam.
            return MDC(numero1, numero2, contador + 1, contador); // caso seja, o maximo assume esse valor.
        }
        return MDC(numero1, numero2, contador + 1, maximo); // caso nao seja, so vai pro proximo numero e o maximo continua sendo o mesmo.
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero1 = 0, numero2 = 0;

    printf("Digite o valor do 1 numero: ");
    scanf("%d", &numero1);
    printf("Digite o valor do 2 numero: ");
    scanf("%d", &numero2);

    printf("\n\nO menor dos elementos eh %d, com o MDC sendo: %d.\n\n", menorr(numero1, numero2), MDC(numero1, numero2, 1, 0));

    return 0;
}