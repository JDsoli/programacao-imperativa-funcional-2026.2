#include <stdio.h>

int main() {
    float valorProduto, imposto, valorFinal;
    int estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Digite o codigo do estado:\n");
    printf("1 - MG\n");
    printf("2 - SP\n");
    printf("3 - RJ\n");
    printf("4 - MS\n");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            imposto = valorProduto * 0.07;
            break;

        case 2:
            imposto = valorProduto * 0.12;
            break;

        case 3:
            imposto = valorProduto * 0.15;
            break;

        case 4:
            imposto = valorProduto * 0.08;
            break;

        default:
            printf("Codigo de estado invalido.\n");
            return 0;
    }

    valorFinal = valorProduto + imposto;

    printf("Valor do imposto: R$ %.2f\n", imposto);
    printf("Preco final: R$ %.2f\n", valorFinal);

    return 0;
}