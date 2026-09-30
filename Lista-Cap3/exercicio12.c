#include <stdio.h>
#include <stdlib.h>

int main()
{
    int celsius;
    float fahrenheit, kelvin;

    printf("Celsius\tFahrenheit\tKelvin\n");

    for (celsius = 0; celsius <= 100; celsius += 5)
    {
        fahrenheit = (9.0 * celsius) / 5.0 + 32;
        kelvin = celsius + 273.15;

        printf("%d\t%.2f\t\t%.2f\n",
               celsius, fahrenheit, kelvin);
    }

    system("PAUSE");
    return 0;
}