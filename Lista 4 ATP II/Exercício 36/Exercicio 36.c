#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para ler um arquivo bin ́ario e exibir estat ́ısticas
sobre seus dados (m ́edia, desvio padr ̃ao, etc.).
*/

void criarArquivoBinario(char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "wb");

    if(arq == NULL){
        printf("O arquivo nao foi criado corretamente.\n");
    }else{
        printf("O arquivo foi criado corretamente.\n");
    }

    int valor1 = 4235;
    int valor2 = 2;
    int valor3 = 4;

    fwrite(&valor1, sizeof(int), 1, arq);
    fwrite(&valor2, sizeof(int), 1, arq);
    fwrite(&valor3, sizeof(int), 1, arq);

fclose(arq);
}

void lerArquivoBinarioEMedia(char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "rb");

    if(arq == NULL){
        printf("O arquivo nao foi criado corretamente.\n");
    }else{
        printf("O arquivo foi criado corretamente.\n");
    }

    int valores[3];

    for(int i = 0; i < 3; i++){
        fread(&valores[i], sizeof(int), 1, arq);
    }

    int soma = 0;
    for(int i = 0; i < 3; i++){ /* Calculando a media. */
        soma += valores[i];
    }
    int media = soma / 3;

    printf("\n\nA media eh: %d.\n\n", media);

fclose(arq);
}
    

int main (){
setlocale(LC_ALL, "Portuguese");

    criarArquivoBinario("ArquivoBinario.bin");
    lerArquivoBinarioEMedia("ArquivoBinario.bin");

return 0;
}
