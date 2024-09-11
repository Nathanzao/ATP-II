#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que preencha um array de 10
inteiros com n�meros aleat�rios entre 50 e 150. Calcule e imprima a m�dia dos
elementos do array.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
srand(time(0));
int vetor[10];
float soma = 0;
    for (int i = 0; i < 10; i++){
        vetor[i] = 50 + rand() % 100; /*veja que, estamos usando a soma para aumentar o valor m�nimo. Afinal, se aparecer alguma
        parte que seja menor que cinquenta, ser� somada. Se aparecer maior que 50 ser� somada e dar� at� 150, afinal, se eu
        botar algum n�mero maior que 100 como valor m�ximo, o resultado pode dar 120 ou qualquer coisa +100 e ser� maior que 150*/
        soma += vetor[i];
        printf("%d\n", vetor[i]);
    }
    printf("\nM�dia do vetor �: %f\n", soma/10);

return 0;
}
