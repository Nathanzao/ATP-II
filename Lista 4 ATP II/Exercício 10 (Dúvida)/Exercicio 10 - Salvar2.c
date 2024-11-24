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
    arq = fopen("Dados_Binario2.bin", "wb");
    

    if(arq == NULL){
        printf("O arquivo nao abriu direito!\n");
    }else{
        printf("O arquivo abriu.\n");
    }

    printf("So criando um novo arquivo binario que ira receber o conteudo do outro.");

fclose(arq);
return 0;
}
