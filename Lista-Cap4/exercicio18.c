#include <stdio.h>

int main() {
    int opcao;
    float temperatura, resultado;

    printf("Escolha uma opcao:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (opcao) {
        case 1:
            resultado = temperatura * 1.8 + 32;
            printf("Resultado: %.2f F\n", resultado);
            break;

        case 2:
            resultado = temperatura + 273.15;
            printf("Resultado: %.2f K\n", resultado);
            break;

        case 3:
            resultado = (temperatura - 32) / 1.8;
            printf("Resultado: %.2f C\n", resultado);
            break;

        case 4:
            resultado = temperatura - 273.15;
            printf("Resultado: %.2f C\n", resultado);
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}