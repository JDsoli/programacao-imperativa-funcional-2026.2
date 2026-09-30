#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_segundos;
    int horas;
    int minutos;
    int segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n",
           horas, minutos, segundos);

    system("PAUSE");
    return 0;
}