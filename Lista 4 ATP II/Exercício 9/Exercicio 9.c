#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para contar o numero de registros em um
arquivo binario.
*/

typedef struct{
    int RA;
    char nome[30];
}Registros;




int main (){
    setlocale(LC_ALL, "Portuguese");


    FILE *arq;
    arq = fopen("Dados_Aluno.bin", "rb+");
    int contador=0;
    Registros registro;

    while(!feof(arq)){
        fread(&registro, sizeof(Registros), 1, arq);
        contador++;
    }

    printf("%d registros\n",contador-1); /* Contador pois ele vai considerar o EOF tambem. */

    fclose(arq);
    return 0;
}
