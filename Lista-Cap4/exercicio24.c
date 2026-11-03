#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro angulo: ");
    scanf("%d", &a);

    printf("Digite o segundo angulo: ");
    scanf("%d", &b);

    printf("Digite o terceiro angulo: ");
    scanf("%d", &c);

    if (a + b + c != 180) {
        printf("Os angulos nao formam um triangulo valido.\n");
        return 0;
    }

    if (a == 90 || b == 90 || c == 90) {
        printf("Triangulo retangulo.\n");

    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triangulo obtusangulo.\n");

    } else {
        printf("Triangulo acutangulo.\n");
    }

    return 0;
}