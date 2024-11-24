#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para copiar o conteudo de um arquivo binario
para outro arquivo.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
    FILE *arq;
    arq = fopen("Dados_Binario.bin", "wb");
    char caractere[30];

    if(arq == NULL){
        printf("O arquivo nao abriu direito!\n");
    }else{
        printf("O arquivo abriu.\n");
    }

    printf("Digite a palavra que deseja colocar no arquivo binario: ");
    fgets(caractere, 30, stdin);
    fflush(stdin);

    fwrite(caractere, sizeof(char), sizeof(caractere), arq);

    printf("Operacoes no arquivo realizadas com sucesso.");
fclose(arq);
return 0;
}
