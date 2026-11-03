#include <stdio.h>

int main() {
    int valorCompra, valorPago, troco;
    int notas100, notas50, notas20, notas10, notas5, notas2;

    printf("Digite o valor total da compra: ");
    scanf("%d", &valorCompra);

    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &valorPago);

    if (valorPago < valorCompra) {
        printf("Erro: valor entregue insuficiente.\n");
        return 0;
    }

    troco = valorPago - valorCompra;

    printf("Troco: R$ %d\n", troco);

    notas100 = troco / 100;
    troco = troco % 100;

    notas50 = troco / 50;
    troco = troco % 50;

    notas20 = troco / 20;
    troco = troco % 20;

    notas10 = troco / 10;
    troco = troco % 10;

    notas5 = troco / 5;
    troco = troco % 5;

    notas2 = troco / 2;
    troco = troco % 2;

    printf("Cedulas de R$100: %d\n", notas100);
    printf("Cedulas de R$50: %d\n", notas50);
    printf("Cedulas de R$20: %d\n", notas20);
    printf("Cedulas de R$10: %d\n", notas10);
    printf("Cedulas de R$5: %d\n", notas5);
    printf("Cedulas de R$2: %d\n", notas2);

    if (troco != 0) {
        printf("Restou R$ %d que nao pode ser representado com essas cedulas.\n", troco);
    }

    return 0;
}