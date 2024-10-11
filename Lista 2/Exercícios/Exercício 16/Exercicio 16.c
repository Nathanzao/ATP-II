#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva um programa em C que preencha uma matriz 5x5 com
n�meros primos.
*/

int eh_primo_repeticao(int valor, int valor_reduzindo){ // função retirada da lista 5.
    if (valor_reduzindo == 1){
        return 1;
    }else{
        if((valor % valor_reduzindo) >= 1){
            return eh_primo_repeticao(valor, valor_reduzindo - 1);
        }else{
            return 0;
        }
    }
}

int eh_primo(int valor){
    if(valor == 0 || valor == 1){
        return 0;
    }else{
        return eh_primo_repeticao(valor, valor - 1);
    }
}

int main (){
setlocale(LC_ALL, "Portuguese");
int matriz[5][5], valores = 0;
srand(time(0));

    for(int i = 0; i < 3; i++){ // armazenando os valores primos ale�torios na matriz.
        for (int j = 0; j < 3; j++){
            valores = rand() % 10;
            if(eh_primo(valores) == 1){
                matriz[i][j] = valores;
            }else{
                valores = rand() % 10;
                while (eh_primo(valores) != 1){
                    valores = rand () % 10;
                }
                matriz[i][j] = valores;
            }
        }
    }

    printf("Matriz: \n");
    for (int i = 0; i < 3; i++){ //exibindo a matriz.
        if (i != 0){
            printf("\n");
        }
        for(int j = 0; j < 3; j++){
            printf(" %d ", matriz[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");


return 0;
}
