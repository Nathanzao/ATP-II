#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para copiar o conteudo de um arquivo de texto
para outro arquivo.
*/

int main (){
    setlocale(LC_ALL, "Portuguese");
    char texto[100];
    char text;

    FILE *ArqCopia;
    ArqCopia = fopen("Arquivo.txt", "r");

        if(ArqCopia == NULL){
            printf("Erro na abertura do arquivo para ser copiado.");
        }else{
            printf("Arquivo abriu para ser copiado abriu corretamente.\n");
        }

    FILE *ArqCola;
    ArqCola = fopen("ArquivoCopia.txt", "w");

        if(ArqCola == NULL){
            printf("Erro na criação do arquivo para ser sobescrito.\n");
        }else{
            printf("O arquivo para ser sobrescrito foi criado corretamente.\n");
        }

    while((fscanf(ArqCopia, "%c", &text)) != EOF){
        //if(texto == "\n"){
        //    fprintf(ArqCola, "\n");
        //}
        fprintf(ArqCola, "%c", text);

    }



fclose(ArqCola);
fclose(ArqCopia);
return 0;
}
