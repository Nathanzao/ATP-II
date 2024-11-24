#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para calcular a m ́edia de valores armazenados
em um arquivo bin ́ario contendo n ́umeros reais.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
    FILE *arq = fopen("ArquivoBinario.bin", "wb");
    int vetor[3];

    if(arq == NULL){
        printf("O arquivo nao abriu corretamente.\n");
    }else{
        printf("O arquivo abriu corretamente.\n");
    }

    for(int i = 0; i < 3; i++){ /* Armazenando os valores */
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 3; i++){ /* Colocando os valores no arquivo binario. */
        fwrite(&vetor[i], sizeof(int), 1, arq); /* PRECISAMOS PASSAR COMO ENDERECO? */
    }
    
fclose(arq);
return 0;
}
