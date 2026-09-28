#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias_trabalhados;
    float salario_bruto, imposto, salario_liquido;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);

    salario_bruto = dias_trabalhados * 30.0f;
    imposto = salario_bruto * 0.08f;
    salario_liquido = salario_bruto - imposto;

    printf("Salario bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto descontado: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    system("PAUSE");
    return 0;
}