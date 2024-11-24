#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Desenvolva uma função recursiva para calcular a sequência de Ackermann.
*/

float acker(int mm, int nn){ // esse exercício é só seguir a fórmula.
    if (mm == 0){
        return nn + 1;
    }else{
        if (mm > 0 && nn == 0){
            return acker(mm - 1, 1);
        }else{
            if(mm > 0 && nn > 0){
                return acker(mm - 1, acker(mm, nn - 1));
            }
        }
    }
}


int main (){
setlocale(LC_ALL, "Portuguese");
int m = 0, n = 0;
    printf("Digite o valor de M, para a função de Ackermann: ");
    scanf("%d", &m);
    printf("Digite o valor de N, para a função de Ackermann: ");
    scanf("%d", &n);

    printf("A sequência de Ackermann para %d (m) e %d (n) é: %f", m, n, acker(m, n));


return 0;
}
