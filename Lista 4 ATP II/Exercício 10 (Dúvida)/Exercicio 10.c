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
    arq = fopen("Dados_Binario.bin", "r+b");

    FILE *arq2;
    arq2 = fopen("Dados_Binario.bin2", "r+b");


    char caractere2[30], caractere3[30];

    if(arq == NULL){
        printf("O arquivo nao abriu direito!\n");
    }else{
        printf("O arquivo abriu.\n");
    }

    fread(caractere2, sizeof(char), 6, arq);
    fwrite(caractere2, sizeof(char), 6, arq2);
    fread(caractere3, sizeof(char), 6, arq2);

    printf("\n%s.\n", caractere3);

    

    printf("\n\nOperacoes no arquivo realizadas com sucesso.\n\n");
fclose(arq);
fclose(arq2);
return 0;
}
