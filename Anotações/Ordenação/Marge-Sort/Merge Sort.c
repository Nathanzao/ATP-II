#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAX 100

/*
                                                    BÁSICO:
Vamos quebrando o vetor na metade. Ordenamos, de baixo pra cima (das metades quebradas até o vetor ficar no seu tamanho normal
novamente), o vetor.

                                                    FUNÇÃO INTERCALAR:
Vai dividir o vetor em duas metades (precisam já estar ordenadas) e ordená-las em um vetor maior.

                                                    FUNÇÃO ORDENAR_INTERCALAÇÃO:
É onde ocorre o Merge Short propriamente dizendo.

*/

void intercalar(int vetor[], int ini, int meio, int fim)
{
    int auxiliar[MAX];                // vetor auxiliar
    int i = ini, j = meio + 1, k = 0; // índices dos vetores
    
    
    // intercalando
    while (i <= meio && j <= fim)
    {
        if (vetor[i] <= vetor[j])
            auxiliar[k++] = vetor[i++];
        else
            auxiliar[k++] = vetor[j++];
    }
    
    
    // copia resto de cada subvetor
    while (i <= meio)
        auxiliar[k++] = vetor[i++];
    while (j <= fim)
        auxiliar[k++] = vetor[j++];
    
    
    // copia de auxiliar para vetor
    for (i = ini, k = 0; i <= fim; i++, k++)
        vetor[i] = auxiliar[k];

}


void ordenar_intercalacao(int vetor[], int ini, int fim) {
    int meio;
    
    if (ini < fim) {
        meio = (ini + fim) / 2;
        ordenar_intercalacao(vetor, ini, meio);
        ordenar_intercalacao(vetor, meio + 1, fim);
        intercalar(vetor, ini, meio, fim);
    }  
}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[8] = {4, 5, 1, 0, 7, 6, 3, 2};
    int tamanho = sizeof(vetor) / sizeof(int); /* Uma das formas de descobrir o tamanho de um vetor. */

    for (int i = 0; i < tamanho; i++)
    {
        printf(" %d ", vetor[i]);
    }
    printf("\n\n\n");


    ordenar_intercalacao(vetor, 0, 7);


    for (int i = 0; i < tamanho; i++)
    {
        printf(" %d ", vetor[i]);
    }
    printf("\n\n\n");

    return 0;
}