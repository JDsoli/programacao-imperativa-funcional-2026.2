#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int linha, coluna;

    do
    {
        printf("Digite um numero impar entre 3 e 19: ");
        scanf("%d", &n);

    } while (n < 3 || n > 19 || n % 2 == 0);

    for (linha = 1; linha <= n; linha++)
    {
        for (coluna = 1; coluna <= n; coluna++)
        {
            if (coluna == linha ||
                coluna == n - linha + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    system("PAUSE");
    return 0;
}