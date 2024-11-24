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
    arq = fopen("Arquivo_Salvar.bin","rb");
    int vetor[5];
    int numero_desejado = 14;

    if(arq == NULL){
        printf("O arquivo nao abriu corretamente.\n");
    }else{
        printf("O arquivo abriu corretamente.\n");
    }

    for(int i = 0; i < 5; i++){
        fread(&vetor[i], sizeof(int), 1, arq);
    }

fclose(arq);
return 0;
}
