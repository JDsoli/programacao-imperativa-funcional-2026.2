#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main()
{
    float raio;
    float area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4 * PI * raio * raio;
    volume = (4.0f / 3.0f) * PI * raio * raio * raio;

    printf("Area da esfera: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    system("PAUSE");
    return 0;
}