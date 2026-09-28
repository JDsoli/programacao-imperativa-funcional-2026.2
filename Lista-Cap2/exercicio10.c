#include <stdio.h>

int main()
{
    float celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
    kelvin = celsius + 273.15f;

    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Kelvin: %.2f\n", kelvin);

    return 0;
}