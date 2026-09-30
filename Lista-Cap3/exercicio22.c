#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int linha, coluna;
    int numero = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    for (linha = 1; linha <= n; linha++)
    {
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("%d ", numero);

            numero++;
        }

        printf("\n");
    }

    system("PAUSE");
    return 0;
}