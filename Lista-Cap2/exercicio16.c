#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura_degrau;
    float altura_total_metros;
    float altura_total_centimetros;
    int quantidade_degraus;

    printf("Digite a altura de cada degrau em centimetros: ");
    scanf("%f", &altura_degrau);

    printf("Digite a altura total que deseja alcancar em metros: ");
    scanf("%f", &altura_total_metros);

    altura_total_centimetros = altura_total_metros * 100;

    quantidade_degraus = ceil(altura_total_centimetros / altura_degrau);

    printf("Quantidade minima de degraus: %d\n", quantidade_degraus);

    system("PAUSE");
    return 0;
}