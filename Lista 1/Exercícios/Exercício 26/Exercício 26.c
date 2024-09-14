#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que leia duas strings e concatene-
as. Imprima a string resultante.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
char nome[20], sobrenome[20];
    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu sobrenome: ");
    gets(sobrenome);
    strcat (nome, " ");
    strcat(nome, sobrenome);
    printf("%s", nome);

return 0;
}
