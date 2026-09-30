#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int quadrado;
    long long int soma = 0;

    for (i = 1; i <= 100; i++)
    {
        quadrado = i * i;

        printf("%d -> %d\n", i, quadrado);

        soma += quadrado;
    }

    printf("Soma total dos quadrados: %lld\n", soma);

    system("PAUSE");
    return 0;
}