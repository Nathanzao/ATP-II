#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C para concatenar dois arquivos de texto em um
terceiro arquivo.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
char caractere1, caractere2;

    FILE *ArqCopia1;
    ArqCopia1 = fopen("Arquivo_Texto1.txt", "r");

        if(ArqCopia1 == NULL){
                printf("Erro na abertura do 1º arquivo para ser copiado.\n");
            }else{
                printf("1º Arquivo abriu para ser copiado abriu corretamente.\n");
            }

    FILE *ArqCopia2;
    ArqCopia2 = fopen("Arquivo_Texto2.txt", "r");

        if(ArqCopia2 == NULL){
                    printf("Erro na abertura do 2º arquivo para ser copiado.\n");
                }else{
                    printf("2º Arquivo abriu para ser copiado abriu corretamente.\n");
                }

    FILE *ArqCola;
    ArqCola = fopen("Arquivo_Escrever.txt", "w");

        if(ArqCola == NULL){
            printf("O arquivo para ser concatenado não abriu corretamente.\n");
        }else{
            printf("O arquivo para ser concatenado abriu corretamente.\n");
        }

    while((fscanf(ArqCopia1, "%c", &caractere1)) != EOF){
        fprintf(ArqCola, "%c", caractere1);
    }

    fprintf(ArqCola, " "); //dar um espaço.
    while((fscanf(ArqCopia2, "%c", &caractere2)) != EOF){
        fprintf(ArqCola, "%c", caractere2);
    }

fclose(ArqCola);
fclose(ArqCopia1);
fclose(ArqCopia2);
return 0;
}
