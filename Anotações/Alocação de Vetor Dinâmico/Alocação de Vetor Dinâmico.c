#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
                                            UTILIDADE
No geral, é útil criar vetores de forma dinâmica para poder definir coisas que com a forma normal não são
possíveis. Por exemplo, o tamanho do vetor (tem formas de definir sem usar alocação dinâmica, mas é melhor
usar a alocação mesmo).

                                            MALLOC
Todas as outras coisas sobre a alocação dinâmica já são conhecidas, menos o MALLOC. Ele basicamente aloca
o tamanho de um tipo de variável (inteiro = 4 bytes, float = 8 bytes, ...) em um tipo de memória diferente.
Para vetores, vamos usar assim: nome_ponteiro = malloc(tamanho_vetor * sizeof(int));
Também colocaremos logo em baixo um if verificando se há memória suficiente para alocar o tamanho do vetor
inteiro: if (nome_ponteiro == NULL){ printf("Não há memória suficiente!") }.

                                            OBSERVAÇÃO
Veja que, para usar o conteúdo do vetor em uma função, apenas colocamos ele sem o arroba. Se quisermos usar
o endereço, ai sim colocariamos o '&'. No scanf, não colocamos o arroba para armazenar os valores.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int *vetor, tamanho_vetor = 0, num = 0;
    printf("Digite o tamanho desejado para o vetor: ");
    scanf("%D", &tamanho_vetor);
    vetor = malloc(tamanho_vetor * sizeof(int));
    if (vetor == NULL){
        printf("Não há memória suficiente!");
        exit (0); // encerra o programa na hora.
    }

    for (int i = 0; i < tamanho_vetor; i++){
        printf("\nDigite o valor que quer para a %dª posição do vetor:", i+1);
        scanf("%d", &num);
        *(vetor + i) = num;
        printf("Valor da %dª posição do vetor: %d\n", i+1, *(vetor + i));
    }

free(vetor);
return 0;
}
