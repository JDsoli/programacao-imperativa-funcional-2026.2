#include <stdio.h>
#include "areas.h"

int main() {
    float raio, base, altura;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    printf("Digite base e altura: ");
    scanf("%f %f", &base, &altura);

    printf("Area do circulo = %.2f\n", A_CIRC(raio));
    printf("Area do retangulo = %.2f\n", A_RET(base, altura));
    printf("Area do triangulo = %.2f\n", A_TRI(base, altura));

    return 0;
}