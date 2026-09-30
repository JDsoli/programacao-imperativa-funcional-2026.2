#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    float soma = 0;
    float media;
    int quantidade = 0;

    while (1)
    {
        printf("Digite um valor positivo ou negativo para encerrar: ");
        scanf("%f", &valor);

        if (valor < 0)
        {
            break;
        }

        if (valor > 0)
        {
            soma += valor;
            quantidade++;
        }
    }

    if (quantidade > 0)
    {
        media = soma / quantidade;

        printf("Quantidade: %d\n", quantidade);
        printf("Soma: %.2f\n", soma);
        printf("Media: %.2f\n", media);
    }
    else
    {
        printf("Nenhum valor positivo foi informado.\n");
    }

    system("PAUSE");
    return 0;
}