#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int numero, divisor;
    int quantidade_divisores;
    int soma = 0;

    do
    {
        printf("Digite A: ");
        scanf("%d", &a);

        printf("Digite B: ");
        scanf("%d", &b);

    } while (a <= 0 || b <= 0 || a >= b);

    printf("Numeros primos:\n");

    for (numero = a; numero <= b; numero++)
    {
        quantidade_divisores = 0;

        for (divisor = 1; divisor <= numero; divisor++)
        {
            if (numero % divisor == 0)
            {
                quantidade_divisores++;
            }
        }

        if (numero > 1 && quantidade_divisores == 2)
        {
            printf("%d ", numero);

            soma += numero;
        }
    }

    printf("\nSoma dos primos: %d\n", soma);

    system("PAUSE");
    return 0;
}