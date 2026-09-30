#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisores++;
        }
    }

    if (n > 1 && divisores == 2)
    {
        printf("%d e primo.\n", n);
    }
    else
    {
        printf("%d nao e primo.\n", n);
    }

    printf("Quantidade de divisores: %d\n", divisores);

    system("PAUSE");
    return 0;
}