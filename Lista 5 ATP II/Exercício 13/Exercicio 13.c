#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva uma fun��o recursiva para encontrar o n�mero de ocorr�ncias de
um elemento em um array.
*/

int achar_numero(int *vetor, int numero_desejado, int tamanho, int inicio, int contador)
{

    if (inicio == tamanho - 1)
    {
        return contador;
    }
    else
    {
        if (vetor[inicio] == numero_desejado)
        {
            contador++;
        }
        return achar_numero(vetor, numero_desejado, tamanho, inicio + 1, contador);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *vetor, qntd_num = 0, numero_desejado = 0, contador = 0;
    
    
    printf("Digite a quantidade de n�meros que haver� no vetor: ");
    scanf("%d", &qntd_num);
    
    
    vetor = malloc(sizeof(int) * qntd_num);
    for (int i = 0; i < qntd_num; i++)
    {
        printf("Digite o valor na %d� posi��o do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o elemento que deseja achar no vetor: ");
    scanf("%d", &numero_desejado);

    printf("\n\nO n�mero desejado aparece %d vezes.", achar_numero(vetor, numero_desejado, qntd_num, 0, contador));

    free(vetor);
    return 0;
}
