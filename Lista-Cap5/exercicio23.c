#include <stdio.h>

#define DOBRO(x) x*2

int dobro(int x);

int main()
{
    printf("Macro sem parenteses = %d\n", DOBRO(2+3));
    printf("Funcao = %d\n", dobro(2+3));

    /*
    A macro sem parenteses vira:
    2 + 3 * 2
    resultado = 8

    A funcao primeiro recebe 2 + 3 = 5
    e depois calcula 5 * 2
    resultado = 10
    */

    #undef DOBRO
    #define DOBRO(x) ((x) * 2)

    printf("Macro corrigida = %d\n", DOBRO(2+3));

    /*
    Depois da correcao, a macro vira:
    ((2 + 3) * 2)
    resultado = 10
    */

    return 0;
}

int dobro(int x)
{
    return x * 2;
}