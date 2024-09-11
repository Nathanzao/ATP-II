#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Escreva um programa em C que leia 8 caracteres e verifique
quantos são vogais.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
char vetor[8];
int i = 0, quantas_vogais = 0;
    for (i = 0; i < 8; i++){
        printf("Digite o caracter da %dª posição: ", i+1);
        scanf("%s", &vetor[i]); // usar %s pois seria uma string
        fflush(stdin);
    }
    for (i = 0; i < 8; i++){
        switch (vetor[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                quantas_vogais++;
        }
    }
    printf("Quantidade de vogais: %d", quantas_vogais);

return 0;
}
/*     while (i != 8){
        if (vetor[i] == 'a' || vetor[i] == 'e' || vetor[i] == 'i' || vetor[i] == 'o' || vetor[i] == 'u'){
            quantas_vogais = quantas_vogais + 1;
        }
        if (vetor[i] == 'A' || vetor[i] == 'E' || vetor[i] == 'I' || vetor[i] == 'O' || vetor[i] == 'U'){
            quantas_vogais = quantas_vogais + 1;
        }
        i++;
    } POR QUE NAO DEU DESSA FORMA?
*/
