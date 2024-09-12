#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que leia uma string e conte o n�mero
de caracteres, palavras e linhas na string.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
char vetor[50];
int numero_caracteres = 0, numero_palavras = 0, numero_linhas = 1;
        printf("Digite a String desejada: ");
        fgets(vetor, 50, stdin); // com gets nao da. Ele nao pega os espacos em branco.
        numero_caracteres = strlen(vetor);
        for (int i = 0; i < numero_caracteres; i++){
            if (vetor[i] == ' ' || vetor[i] == '\n'){
                numero_palavras++;
            }
            if(vetor[i] == '\0'){
                numero_linhas++;
            }
        }
    printf("Quantidade de caractere(s) � %d, com %d palavra(s) e %d linha(s). ", numero_caracteres, numero_palavras, numero_linhas);

return 0;
}
