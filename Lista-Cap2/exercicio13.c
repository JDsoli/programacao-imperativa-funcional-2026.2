#include <stdio.h>

int main()
{
    float lado;
    float base, altura;
    float area_quadrado, area_retangulo, area_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    area_quadrado = lado * lado;

    printf("Digite a base do retangulo e do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo e do triangulo: ");
    scanf("%f", &altura);

    area_retangulo = base * altura;
    area_triangulo = (base * altura) / 2.0f;

    printf("Area do quadrado: %.2f\n", area_quadrado);
    printf("Area do retangulo: %.2f\n", area_retangulo);
    printf("Area do triangulo retangulo: %.2f\n", area_triangulo);

    return 0;
}