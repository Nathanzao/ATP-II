#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que leia uma string e substitua
todas as ocorr�ncias de um caractere por outro.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
char vetor[30], nao_quero, quero, copia_vetor[30];
    
    printf("Digite a letra que n�o quer na String: \n");
    scanf("%c", &nao_quero);
    fflush(stdin);
    if (nao_quero >= 97 && nao_quero <= 122){ // deixando a letra que não queremos em maiúscula.
        nao_quero = nao_quero - 32;
    }
    printf("Digite a letra que quer substituir: ");
    scanf("%c", &quero);
    fflush(stdin);
    if (quero >= 97 && quero <= 122){ // deixando a letra que queremos em maiúscula.
        quero = quero - 32;
    }
    printf("Digite a String desejada: ");
    fgets(vetor, 30, stdin);
    for (int i = 0; i < 30; i++){
        if(vetor[i] >= 97 && vetor[i] <= 122){ // deixando a STRING toda maaiúscula (dessa forma, pega tanto minúscula quanto maiúscula).
            vetor[i] = vetor[i] - 32;
        }
    }
    for (int i = 0; i < 30; i++){
        if (vetor[i] == nao_quero){
            vetor[i] = quero;
        }
    }
    printf("%s", vetor);

return 0;
}
