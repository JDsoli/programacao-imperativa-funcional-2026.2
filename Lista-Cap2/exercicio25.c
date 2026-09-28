#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_base;
    float gratificacao;
    float imposto;
    float salario_liquido;

    printf("Digite o salario-base: ");
    scanf("%f", &salario_base);

    gratificacao = salario_base * 0.05f;
    imposto = salario_base * 0.07f;

    salario_liquido = salario_base + gratificacao - imposto;

    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    system("PAUSE");
    return 0;
}