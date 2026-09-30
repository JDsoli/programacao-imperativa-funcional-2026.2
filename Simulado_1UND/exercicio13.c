#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;

    long long int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Nao existe fatorial de numero negativo.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fatorial *= i;
        }

        printf("%d! = %lld\n", n, fatorial);
    }

    system("PAUSE");
    return 0;
}