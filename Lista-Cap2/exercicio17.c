#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main()
{
    float raio;
    float area, circunferencia;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    circunferencia = 2 * PI * raio;

    printf("Area do circulo: %.2f\n", area);
    printf("Circunferencia do circulo: %.2f\n", circunferencia);

    system("PAUSE");
    return 0;
}