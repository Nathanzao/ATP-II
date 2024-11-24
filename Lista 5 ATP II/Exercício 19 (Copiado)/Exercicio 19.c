#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Crie uma função recursiva para calcular o coeficiente binomial C(n, k).
*/

int binomial(int i, int j)
{

    if (j == 0)
    {
        return 1;
    }

    if (j == i)
    {
        return 1;
    }
    return binomial(i - 1, j - 1) + binomial(i - 1, j);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i = 0, j = 0;

    printf("Digite um valor para I: ");
    scanf("%d", &i);

    printf("Digite um valor para J: ");
    scanf("%d", &j);

    if (j > i)
    {
        printf("Digite um valor menor que I para J.");
    }

    printf("\n\n%d, %d = %d\n\n", i, i, binomial(i, j));

    return 0;
}