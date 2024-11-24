#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Crie uma função recursiva para encontrar o maior divisor comum de um array de números.
*/

int menor(int *vetor, int tamanho, int inicio, int menorr){

    if(inicio == tamanho - 1){ // caso base.
        return menorr;
    }else{
        if(vetor[inicio] > vetor[tamanho - 1] && inicio == 0){ // implementando o a posição final como menor, caso seja.
            menorr = vetor[tamanho - 1];
            return menor(vetor, tamanho, inicio + 1, menorr);
        }else{
            if(inicio == 0){ // implementando o a posição inicial como menor, caso seja.
                menorr = vetor[inicio];
                return menor(vetor, tamanho, inicio + 1, menorr);
            }
        }
        if(menorr > vetor[inicio]){ // verificando cada elemento do vetor para ver se é menor.
            menorr = vetor[inicio];
            return menor(vetor, tamanho, inicio + 1, menorr);
        }
        return menor(vetor, tamanho, inicio + 1, menorr);
    }



}

int mdc(int *vetor, int contador, int *ponteiro){
    int valor = 0;
    int menorr = 0;
    valor = menor(vetor, 5, 0, menorr);
    if(contador <= valor){
        if(valor % contador == 0){
            ponteiro = &contador;
            return mdc(vetor, contador + 1, ponteiro);
        }else{
            return mdc(vetor, contador + 1, ponteiro);
        }
    }else{
        return *ponteiro;
    }

}


int main (){
setlocale(LC_ALL, "Portuguese");
int vetor[5], menorrr = 0, *ponteir;
    for (int i = 0; i < 5; i++){
        printf("Digite o valor da %dª posição do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\n\nO menor dos números do vetor é: %d, e o MDC é: %d\n\n", menor(vetor, 5, 0, menorrr), mdc(vetor, 1, ponteir));


return 0;
}
