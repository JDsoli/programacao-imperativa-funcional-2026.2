#include <stdio.h>

long fibonacci(int n);

int main()
{
    int quantidade;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0)
    {
        printf("Quantidade invalida.\n");
        return 0;
    }

    for (int i = 0; i < quantidade; i++)
    {
        printf("%ld ", fibonacci(i));
    }

    printf("\n");

    return 0;
}

long fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

/*
A versao recursiva fica lenta para valores grandes
porque varias chamadas fazem os mesmos calculos
repetidas vezes.
*/