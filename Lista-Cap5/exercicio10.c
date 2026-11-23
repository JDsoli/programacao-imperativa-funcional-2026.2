#include <stdio.h>

#define PI 3.141593

float area(float r);

int main() {
    float raio;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    printf("Area = %.2f\n", area(raio));

    return 0;
}

float area(float r) {
    return 4 * PI * r * r;
}