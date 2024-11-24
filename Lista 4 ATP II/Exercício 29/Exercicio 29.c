#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para criar um arquivo de texto com conte ́udo
criptografado e depois descriptografar.
*/
void criarArquivoTextoCriptografado(char *nomeArquivo) {
    FILE *arq = fopen(nomeArquivo, "w");
    char mensagem[30];

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("Abrimos o arquivo, quando criado.\n");
    }

    printf("Digite a palavra que quer criptografar: ");
    fgets(mensagem, 30, stdin);

    for(int i = 0; i < strlen(mensagem) - 1; i++){
        mensagem[i] = mensagem[i] - 33;
    }

    printf("\nConteudo Criptografado: %s", mensagem);

    fprintf(arq, "%s", mensagem);
    

fclose(arq);
}

void LerDescriptografando(char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "r");
    char mensagem, conteudoDescri[30];
    int i = 0;

    if (arq == NULL) {
        printf("Erro ao criar o arquivo.\n");
    }else{
        printf("\nAbrimos o arquivo, para ler.\n");
    }

    while((fscanf(arq, "%c", &mensagem)) != EOF){
        mensagem = mensagem + 33;
        conteudoDescri[i] = mensagem;
        i++;
    }

    printf("\n\nO conteudo descriptografado e: %s.\n", conteudoDescri);

fclose(arq);
}


int main (){
setlocale(LC_ALL, "Portuguese");

    criarArquivoTextoCriptografado("ArquivoTexto.txt");
    LerDescriptografando("ArquivoTexto.txt");

return 0;
}
