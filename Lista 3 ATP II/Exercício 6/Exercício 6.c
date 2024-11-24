#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
Declare e inicialize uma união para armazenar um valor inteiro ou um valor
flutuante e imprima seus valores.
*/

typedef union {
    int inteiro;
    float flutuante;
}Uniao;


int main (){
setlocale(LC_ALL, "Portuguese");
    Uniao unions;
    int operacao = 0;

    printf("Digite qual valor você deseja armazenar: 1 para inteiro e 2 para float. ");
    scanf("%d", &operacao);

    if(operacao == 1){
        printf("Digite o valor inteiro: ");
        scanf("%d", &unions.inteiro);
        printf("\n%d\n", unions.inteiro);
    }else{
        printf("Digite o valor float: ");
        scanf("%f", &unions.flutuante);
        printf("%.2f\n", unions.flutuante);
    }





return 0;
}
