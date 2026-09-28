#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas_normais;
    float horas_extras;
    float salario_bruto;
    float imposto;
    float salario_liquido;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horas_extras);

    salario_bruto = (horas_normais * 10.0f) + (horas_extras * 15.0f);

    imposto = salario_bruto > 12000.0f
                  ? (salario_bruto - 12000.0f) * 0.10f
                  : 0.0f;

    salario_liquido = salario_bruto - imposto;

    printf("Salario bruto anual: R$ %.2f\n", salario_bruto);
    printf("Imposto devido: R$ %.2f\n", imposto);
    printf("Salario liquido anual: R$ %.2f\n", salario_liquido);

    system("PAUSE");
    return 0;
}