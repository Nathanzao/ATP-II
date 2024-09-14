#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que leia uma string e verifique
se ela � um pal�ndromo.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
char vetor[30], inversa_vetor[30];
int comparacao = 1, tamanho_vetor = 0;
    printf("Digite a String desejada: ");
    gets(vetor);
    tamanho_vetor = strlen(vetor);
    for (int i = 0; i < tamanho_vetor; i++){ // tornando a STRING inteira maiúscula para usar strcmp.
        if(vetor[i] >= 97 && vetor[i] <= 122){
            vetor[i] = vetor[i] - 32;
            printf("\n Transformada em maiuscula: %c\n", vetor[i]);
        }
    }
    for (int i = 0; i < tamanho_vetor; i++){
        inversa_vetor[i] = vetor[tamanho_vetor -1 - i];
        printf("\nAquilo que a inversa est� recebendo: %c\n", inversa_vetor[i]);
    }
    comparacao = strcmp(vetor, inversa_vetor);
    if (comparacao == 0){
        printf("\n� pal�ndromo!\n");
    }else{
        printf("\nN�o � pal�ndromo!\n");
    }


return 0;
}
