#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Escreva uma função recursiva para calcular o número de caminhos poss ́ıveis
em uma grade NxN.
*/

int passagens(int n, int m) {
    // 0x0;
    if (n == 0 || m == 0) {
        return 0;
    }
    // 1x1;
    if (n == 1 || m == 1) {
        return 1;
    }

    return passagens(m - 1, n) + passagens(m, n - 1);
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    int n = 0;


    printf("Digite o valor de N: ");
    scanf("%d", &n);


    printf("\n\nHa tal quantidade de caminhos para N: %d.\n\n", passagens(n,n));

    return 0;
}