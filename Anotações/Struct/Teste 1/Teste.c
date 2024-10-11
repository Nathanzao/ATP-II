#include <stdio.h>


struct retangulo
{
    char cor[10];
    float largura, altura;
};


void ler_retangulo(struct retangulo *ret)
{
    
    scanf("%f%f%s", &(ret.largura), &(ret.altura), ret.cor);
    return ret;
};

/*float area_retangulo(struct retangulo ret)
{
    return ret.largura * ret.altura;
} */


int main()
{
    struct retangulo ret;
    ret = ler_retangulo();
    /*printf("A área é %f.\n", area_retangulo(ret)); */
}