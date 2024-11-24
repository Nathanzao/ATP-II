#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Implemente uma função recursiva para resolver o problema da Torre de
Hanoi.
*/

void calcular_hanoi(int disco, int origem, int destino, int auxiliar){
    if(disco == 1){
        printf("O disco 1 vai para a posicao: %d\n", destino);
        return;
    }
    calcular_hanoi(disco - 1, origem, auxiliar, destino);
    printf("O disco %d vai para a posicao: %d\n", disco, destino);
    calcular_hanoi(disco - 1, auxiliar, destino, origem);



}



int main (){
setlocale(LC_ALL, "Portuguese");
int discos = 0;

    printf("Digite a quantidade de discos desejados: ");
    scanf("%d", &discos);

    printf("\n\n\n");
    calcular_hanoi(discos, 1, 3, 2);


return 0;
}