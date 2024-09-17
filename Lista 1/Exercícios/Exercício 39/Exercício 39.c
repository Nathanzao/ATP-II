#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que declare um array de 6
inteiros e passe esse array para uma fun��o que conte quantos elementos s�o
positivos.
*/

void valores_positivos(int *vvetor)
{
    int quantidade_positivos = 0;
    
    
    for (int i = 0; i < 6; i++)
    { // comparar pra ver se o n�mero � positivo.
        if (*(vvetor + i) > 0)
        {
            quantidade_positivos++;
        }
    }
    printf("\nQuantidade de positivos: %d", quantidade_positivos); // dar printf na quantidade de positivos.
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *vetor; /* veja que, quando eu preencho um vetor din�mico, ele passa a ser um vetor normal. E um vetor normal, pode ser usado como um vetor din�mico.
    Poder�amos ter declarado s� como um vetor normal e puxado como um vetor din�mico na fun��o.*/
    vetor = malloc(sizeof(int) * 6);
    for (int i = 0; i < 6; i++)
    { // preencher o vetor din�mico.
        printf("Digite o valor da %d� posi��o do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    valores_positivos(vetor); // n�o precisa por o '*'.

    free(vetor);
    return 0;
}
