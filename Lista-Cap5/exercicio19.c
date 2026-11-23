#include <stdio.h>

void contagemRegressiva(int n);
void contagemCrescente(int n);

int main()
{
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Valor invalido.\n");
        return 0;
    }

    printf("Contagem regressiva:\n");
    contagemRegressiva(n);

    printf("\nContagem crescente:\n");
    contagemCrescente(n);

    return 0;
}

void contagemRegressiva(int n)
{
    if (n == 0)
    {
        printf("Fogo!\n");
        return;
    }

    printf("%d\n", n);
    contagemRegressiva(n - 1);
}

void contagemCrescente(int n)
{
    if (n == 0)
        return;
    contagemCrescente(n - 1);

    printf("%d\n", n);
}