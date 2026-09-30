#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    float p;
    float area;

    printf("Digite o lado A: ");
    scanf("%f", &a);

    printf("Digite o lado B: ");
    scanf("%f", &b);

    printf("Digite o lado C: ");
    scanf("%f", &c);

    p = (a + b + c) / 2.0;

    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Semiperimetro: %.2f\n", p);
    printf("Area do triangulo: %.2f\n", area);

    system("PAUSE");
    return 0;
}