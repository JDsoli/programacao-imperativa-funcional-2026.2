#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main()
{
    float preco;
    float subtotal;
    float total;
    float pago;
    float troco;
    int quantidade;
    int opcaoPagamento;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    subtotal = calculaSubtotal(preco, quantidade);

    printf("1 - Pagamento a vista\n");
    printf("2 - Outro tipo de pagamento\n");
    printf("Escolha a forma de pagamento: ");
    scanf("%d", &opcaoPagamento);

    total = aplicaDesconto(subtotal, opcaoPagamento);

    printf("Subtotal = R$ %.2f\n", subtotal);
    printf("Total a pagar = R$ %.2f\n", total);

    printf("Digite o valor pago: ");
    scanf("%f", &pago);

    if (pago < total)
    {
        printf("Valor pago insuficiente.\n");
    }
    else
    {
        troco = calculaTroco(total, pago);
        printf("Troco = R$ %.2f\n", troco);
    }

    return 0;
}

float calculaSubtotal(float preco, int quantidade)
{
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento)
{
    if (opcaoPagamento == 1)
        return valor * 0.90;

    return valor;
}

float calculaTroco(float total, float pago)
{
    return pago - total;
}