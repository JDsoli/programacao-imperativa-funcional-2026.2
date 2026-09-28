#include <stdio.h>

int main()
{
    int numero1, numero2;
    int soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);

    if (numero2 != 0)
    {
        divisao = (float)numero1 / numero2;
        printf("Divisao: %.2f\n", divisao);
    }
    else
    {
        printf("Nao e possivel dividir por zero.\n");
    }

    return 0;
}