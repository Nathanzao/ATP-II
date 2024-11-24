#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para verificar se um numero especifico esta
presente em um arquivo binario contendo numeros inteiros.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
    FILE *arq;
    arq = fopen("Arquivo_Salvar.bin","wb");
    int vetor[5];

    if(arq == NULL){
        printf("O arquivo nao abriu corretamente.\n");
    }else{
        printf("O arquivo abriu corretamente.\n");
    }

    for(int i = 0; i < 5; i++){
        printf("Digite a posicao %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);
        fwrite(&vetor[i], sizeof(int), 1, arq);
    }

fclose(arq);
return 0;
}
