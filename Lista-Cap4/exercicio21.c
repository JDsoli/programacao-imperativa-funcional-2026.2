#include <stdio.h>

int main() {
    float salario, aumento, novoSalario;
    int cargo;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    printf("Digite o codigo do cargo:\n");
    printf("1 - Tecnico\n");
    printf("2 - Gerente\n");
    printf("3 - Demais cargos\n");
    scanf("%d", &cargo);

    if (cargo == 1) {

        if (salario <= 3000) {
            aumento = salario * 0.15;
        } else {
            aumento = salario * 0.10;
        }

    } else if (cargo == 2) {

        if (salario <= 5000) {
            aumento = salario * 0.10;
        } else {
            aumento = salario * 0.05;
        }

    } else if (cargo == 3) {

        aumento = salario * 0.08;

    } else {
        printf("Codigo de cargo invalido.\n");
        return 0;
    }

    novoSalario = salario + aumento;

    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}