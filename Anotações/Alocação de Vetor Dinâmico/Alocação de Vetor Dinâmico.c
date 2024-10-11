#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
                                            UTILIDADE
No geral, � �til criar vetores de forma din�mica para poder definir coisas que com a forma normal n�o s�o
poss�veis. Por exemplo, o tamanho do vetor (tem formas de definir sem usar aloca��o din�mica, mas � melhor
usar a aloca��o mesmo).

                                            MALLOC
Todas as outras coisas sobre a aloca��o din�mica j� s�o conhecidas, menos o MALLOC. Ele basicamente aloca
o tamanho de um tipo de vari�vel (inteiro = 4 bytes, float = 8 bytes, ...) em um tipo de mem�ria diferente.
Para vetores, vamos usar assim: nome_ponteiro = malloc(tamanho_vetor * sizeof(int));
Tamb�m colocaremos logo em baixo um if verificando se h� mem�ria suficiente para alocar o tamanho do vetor
inteiro: if (nome_ponteiro == NULL){ printf("N�o h� mem�ria suficiente!") }.

                                            OBSERVA��O
Veja que, para usar o conte�do do vetor em uma fun��o, apenas colocamos ele sem o arroba. Se quisermos usar
o endere�o, ai sim colocariamos o '&'. No scanf, n�o colocamos o arroba para armazenar os valores.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int *vetor, tamanho_vetor = 0, num = 0;
    printf("Digite o tamanho desejado para o vetor: ");
    scanf("%D", &tamanho_vetor);
    vetor = malloc(tamanho_vetor * sizeof(int));
    if (vetor == NULL){
        printf("N�o h� mem�ria suficiente!");
        exit (0); // encerra o programa na hora.
    }

    for (int i = 0; i < tamanho_vetor; i++){
        printf("\nDigite o valor que quer para a %d� posi��o do vetor:", i+1);
        scanf("%d", &num);
        *(vetor + i) = num;
        printf("Valor da %d� posi��o do vetor: %d\n", i+1, *(vetor + i));
    }

free(vetor);
return 0;
}
