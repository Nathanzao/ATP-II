#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para ler registros em um arquivo bin ́ario us-
ando acesso aleat ́orio.

*/

typedef struct{
    int valor;
    char nome[30];
}reg;

void imprimirStruct(reg variavel_aux){
    printf("\nO nome: %s.\n", variavel_aux.nome);
    printf("O valor de compra: %d.\n", variavel_aux.valor);
}

void criarArquivoBinario(char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "wb");

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo, quando criado.\n");
    }

    reg registros[5] = {
        {1, "Alice"},
        {2, "Bob"},
        {3, "Carol"},
        {4, "Dave"},
        {5, "Eve"}
    };

    fwrite(registros, sizeof(reg), 5, arq);
    fclose(arq);
}

void lerRegistroIndice (char *nomeArquivo, int indice){
    FILE *arq = fopen(nomeArquivo, "rb");
    reg registros;

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo para ler.\n");
    }

    fseek(arq, indice * sizeof(reg), SEEK_SET); /* Colocando o ponteiro no registro desejado. */

    fread(&registros, sizeof(reg), 1, arq); /* Armazenando a struct do indice desejado. */

    imprimirStruct(registros);

    fclose(arq);
}

int main (){
setlocale(LC_ALL, "Portuguese");
int indice = 0;

    printf("Digite o indice desejado: ");
    scanf("%d", &indice);


    printf("\n\n");
    criarArquivoBinario("ArquivoBinario.bin");
    lerRegistroIndice("ArquivoBinario.bin", indice - 1); /* -1 é apenas para pegar o elemento certo. Mera questão de começar o vetor em 0 em C. */


return 0;
}
