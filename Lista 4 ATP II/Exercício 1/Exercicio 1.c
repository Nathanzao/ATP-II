#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para criar um arquivo de texto e escrever uma
mensagem nele.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
    FILE *arquivo;
    arquivo = fopen("arquivo_texto.txt", "w");
    char mensagem[30];


    printf("Digite aquilo que deseja escrever no arquivo: ");
    fgets(mensagem, 30, stdin);

    fprintf(arquivo, " %s ", mensagem);



fclose(arquivo);
return 0;
}