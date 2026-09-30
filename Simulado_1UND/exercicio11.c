#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias;

    float salario_bruto;
    float gratificacao;
    float imposto;
    float salario_liquido;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dias);

    salario_bruto = dias * 45.0;

    gratificacao = salario_bruto * 0.05;
    imposto = salario_bruto * 0.08;

    salario_liquido =
        salario_bruto + gratificacao - imposto;

    printf("Salario bruto: R$ %.2f\n", salario_bruto);
    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    system("PAUSE");
    return 0;
}