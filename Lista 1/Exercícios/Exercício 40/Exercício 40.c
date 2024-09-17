#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que declare um array de 8
inteiros e passe esse array para uma fun��o que inverta a ordem dos elementos
do array.
*/

void inverter_ordem(int *vvetor)
{
    int variavel_auxiliar = 0;
    
    
    for (int i = 0; i < 8 / 2; i++)
    { /* perceba que nesse c�digo os valores est�o trocando at� a metade do vetor.
se voc� colocar o vetor inteiro, eles v�o se trocar normalmente os valores, s� que quando passar da metade v�o trocar
novamente. Vai dar exatamente o vetor normal*/
        variavel_auxiliar = vvetor[i];
        vvetor[i] = vvetor[8 - 1 - i];
        vvetor[8 - 1 - i] = variavel_auxiliar;
    }
    
    
    for (int i = 0; i < 8; i++)
    {
        printf(" %d ", vvetor[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[8];
    
    
    
    for (int i = 0; i < 8; i++)
    {
        printf("Digite o vetor na %d� posi��o: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    
    inverter_ordem(vetor);

    return 0;
}
