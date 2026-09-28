#include <stdio.h>
#include <stdlib.h>

int main()
{
    float comprimento;
    float largura;
    float preco_metro;
    float perimetro;
    float quantidade_arame;
    float custo_total;

    printf("Digite o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &largura);

    printf("Digite o preco do metro de arame: ");
    scanf("%f", &preco_metro);

    perimetro = 2 * (comprimento + largura);

    quantidade_arame = perimetro * 3;

    custo_total = quantidade_arame * preco_metro;

    printf("Perimetro do terreno: %.2f metros\n", perimetro);
    printf("Quantidade de arame necessaria: %.2f metros\n", quantidade_arame);
    printf("Custo total: R$ %.2f\n", custo_total);

    system("PAUSE");
    return 0;
}