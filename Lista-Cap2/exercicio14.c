#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float p, area;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &a);

    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &b);

    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &c);

    p = (a + b + c) / 2.0f;

    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Semiperimetro: %.2f\n", p);
    printf("Area do triangulo: %.2f\n", area);

    return 0;
}