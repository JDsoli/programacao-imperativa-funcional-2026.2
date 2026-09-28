#include <stdio.h>
#include <stdlib.h>

int main()
{
    float velocidade_kmh;
    float velocidade_ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidade_kmh);

    velocidade_ms = velocidade_kmh / 3.6f;

    printf("Velocidade em m/s: %.2f\n", velocidade_ms);

    system("PAUSE");
    return 0;
}