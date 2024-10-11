#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
                                    BÁSICO:
Uma busca binária só é realizada em um vetor previamente ordenado.
É usada para descobrir se existe um determinado número em um vetor.
Usamos while(inicio <= fim) pois, tanto o caso em que o valor é menor que o meio quanto o que o valor
é maior que o meio funcionam.

                                    INICIO
Vai ser a posição zero do vetor. Caso o elemento que estamos procurando seja maior que o meio,
o incio vai passar a ser: inicio = meio + 1;
No caso em que o inicio é maior que o fim, é porque acabou o vetor e invadimos o espaço de outra
variável.

                                    MEIO
Meio é a metade do vetor, calculamos por: meio = (inicio+fim)/2.
Usamos ele para descobrir para qual lado do vetor o elemento que queremos está. Caso esteja para 
direita, o início vai assumir o meio e o novo meio do vetor será calculado pela mesma fórmula.

                                    FIM
Vai ser a posição maior do vetor. Caso o elemento que estamos procurando seja menor que o meio,
o fim vai passar a ser: fim = meio - 1.
No caso em que o fim é menor que o início, é porque acabou o vetor e invadimos o espaço de outra
variável.



*/

int main (){
setlocale(LC_ALL, "Portuguese");

return 0;
}