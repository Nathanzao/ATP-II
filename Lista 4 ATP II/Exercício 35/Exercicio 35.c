#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para calcular a frequˆencia de cada caractere
em um arquivo de texto.
*/

void criarArquivoTexto(char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "w");

    if(arq == NULL){
        printf("O arquivo nao foi criado corretamente.\n");
    }else{
        printf("O arquivo foi criado corretamente.\n");
    }

    char palavra[30] = "meu cachorro morreu hj";

    fprintf(arq, "%s", palavra);

fclose(arq);
}

void lerArquivoTextoEContar(char *nomeArquivo){
    FILE *arq = fopen(nomeArquivo, "r");

    if(arq == NULL){
        printf("O arquivo nao foi criado corretamente.\n");
    }else{
        printf("O arquivo foi criado corretamente.\n");
    }

    char palavra;
    int vetor[26];

    for(int i = 0; i < 26; i++){ /* Zerando o vetor. */
        vetor[i] = 0;
    }

    while((fscanf(arq, "%c", &palavra)) != EOF){ /* Jogada de mestre. */
        vetor[palavra - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        printf("%c : %d vezes.\n", i + 'a', vetor[i]); /* Outra jogada de mestre. */
    }

fclose(arq);
}


int main (){
setlocale(LC_ALL, "Portuguese");

    criarArquivoTexto("ArquivoTexto.txt");
    lerArquivoTextoEContar("ArquivoTexto.txt");

return 0;
}
