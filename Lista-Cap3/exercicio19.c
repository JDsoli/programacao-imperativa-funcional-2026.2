#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    long long int primeiro = 1;
    long long int segundo = 1;
    long long int proximo;

    printf("Digite o numero do termo: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Valor invalido.\n");
    }
    else if (n == 1)
    {
        printf("1\n");
        printf("Termo desejado: 1\n");
    }
    else
    {
        printf("1 1 ");

        for (i = 3; i <= n; i++)
        {
            proximo = primeiro + segundo;

            printf("%lld ", proximo);

            primeiro = segundo;
            segundo = proximo;
        }

        printf("\nTermo desejado: %lld\n", segundo);
    }

    system("PAUSE");
    return 0;
}