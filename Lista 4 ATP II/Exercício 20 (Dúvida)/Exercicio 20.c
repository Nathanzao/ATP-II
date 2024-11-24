#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*

*/

int main (){
setlocale(LC_ALL, "Portuguese");
    FILE *arq = fopen("ArquivoBinario.bin", "rb");
    int vetor[3], soma = 0;

    if(arq == NULL){
        printf("O arquivo nao abriu corretamente.\n");
    }else{
        printf("O arquivo abriu corretamente.\n");
    }

    for(int i = 0; i < 3; i++){
        fread(&vetor[i], sizeof(int), 1, arq);
        soma += vetor[i];
    }

    printf("\nA media eh: %d.\n\n", soma/3);


fclose(arq);
return 0;
}
