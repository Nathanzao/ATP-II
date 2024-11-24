#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Implemente uma fun��o recursiva para verificar se uma palavra � um
pal�ndromo.
*/

int descobre_palindromo(char *vetor, int tamanho, int inicio)
{

    if (inicio < tamanho)
    { // em palavras com n�meros pares, o uso do if(inicio  != tamanho) n�o funciona.
        if (vetor[inicio] == vetor[tamanho])
        {
            return descobre_palindromo(vetor, tamanho - 1, inicio + 1);
        }
    }
    else
    {
        return 1;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char vetor[10];
    int contador = 0;
    
    printf("Digite a palavra desejada: ");
    gets(vetor);

    if (descobre_palindromo(vetor, strlen(vetor) - 1, 0) == 1)
    {
        printf("\nEh pal�ndromo.\n");
    }
    else
    {
        printf("\nNao � pal�ndromo.\n");
    }

    return 0;
}
