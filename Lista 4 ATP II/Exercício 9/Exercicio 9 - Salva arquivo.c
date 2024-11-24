#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX 100

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
    arq = fopen("Dados_Aluno.bin", "wb");

    Registros registros[MAX];



    fwrite(registros,sizeof(Registros),MAX,arq);

    fclose(arq);
    return 0;
}
