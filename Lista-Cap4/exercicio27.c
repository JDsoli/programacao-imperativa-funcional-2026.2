#include <stdio.h>

int main() {
    int horas;
    float valor;

    printf("Digite a quantidade de horas estacionado: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Quantidade de horas invalida.\n");
        return 0;
    }

    if (horas <= 2) {
        valor = horas * 2.0;

    } else if (horas <= 4) {
        valor = 2 * 2.0;
        valor += (horas - 2) * 2.5;

    } else {
        valor = 2 * 2.0;
        valor += 2 * 2.5;
        valor += (horas - 4) * 3.0;
    }

    printf("Tempo total: %d horas\n", horas);
    printf("Valor total: R$ %.2f\n", valor);

    return 0;
}