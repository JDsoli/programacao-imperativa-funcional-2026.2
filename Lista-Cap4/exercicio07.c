#include <stdio.h>
#include <math.h>

int main() {
    double x;

    printf("Digite um numero real: ");
    scanf("%lf", &x);

    if (x >= 0) {
        printf("Raiz quadrada: %.2lf\n", sqrt(x));
    } else {
        printf("Quadrado: %.2lf\n", x * x);
    }

    return 0;
}