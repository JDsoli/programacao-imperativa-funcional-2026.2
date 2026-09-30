#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    float raio;
    float area;
    float volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4 * PI * pow(raio, 2);
    volume = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("Area da superficie: %.3f\n", area);
    printf("Volume da esfera: %.3f\n", volume);

    system("PAUSE");
    return 0;
}