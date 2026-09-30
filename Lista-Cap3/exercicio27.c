#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    int restante;

    int n100 = 0;
    int n50 = 0;
    int n20 = 0;
    int n10 = 0;
    int n5 = 0;
    int n2 = 0;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    restante = valor;

    while (restante >= 100)
    {
        restante -= 100;
        n100++;
    }

    while (restante >= 50)
    {
        restante -= 50;
        n50++;
    }

    while (restante >= 20)
    {
        restante -= 20;
        n20++;
    }

    while (restante >= 10)
    {
        restante -= 10;
        n10++;
    }

    while (restante >= 5)
    {
        restante -= 5;
        n5++;
    }

    while (restante >= 2)
    {
        restante -= 2;
        n2++;
    }

    if (restante != 0)
    {
        printf("Nao e possivel fornecer exatamente esse valor ");
        printf("com as cedulas disponiveis.\n");
    }
    else
    {
        printf("Cedulas de 100: %d\n", n100);
        printf("Cedulas de 50: %d\n", n50);
        printf("Cedulas de 20: %d\n", n20);
        printf("Cedulas de 10: %d\n", n10);
        printf("Cedulas de 5: %d\n", n5);
        printf("Cedulas de 2: %d\n", n2);
    }

    system("PAUSE");
    return 0;
}