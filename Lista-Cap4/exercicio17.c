#include <stdio.h>

int main() {
    float valorCompra, valorFinal, parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valorCompra);

    printf("Escolha a forma de pagamento:\n");
    printf("1 - A vista com 10%% de desconto\n");
    printf("2 - Parcelado em 3x sem juros\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        valorFinal = valorCompra * 0.90;
        comissao = valorFinal * 0.05;

        printf("Valor final com desconto: R$ %.2f\n", valorFinal);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);

    } else if (opcao == 2) {
        parcela = valorCompra / 3;
        comissao = valorCompra * 0.05;

        printf("Valor de cada parcela: R$ %.2f\n", parcela);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);

    } else {
        printf("Opcao de pagamento invalida.\n");
    }

    return 0;
}