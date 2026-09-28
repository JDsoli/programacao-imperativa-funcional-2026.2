#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora, minuto, segundo;
    int duracao_segundos;
    int total_segundos;
    int hora_final, minuto_final, segundo_final;

    printf("Digite a hora inicial: ");
    scanf("%d", &hora);

    printf("Digite os minutos iniciais: ");
    scanf("%d", &minuto);

    printf("Digite os segundos iniciais: ");
    scanf("%d", &segundo);

    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d", &duracao_segundos);

    total_segundos = hora * 3600 + minuto * 60 + segundo;
    total_segundos = total_segundos + duracao_segundos;

    hora_final = (total_segundos / 3600) % 24;
    minuto_final = (total_segundos % 3600) / 60;
    segundo_final = total_segundos % 60;

    printf("Horario final: %02d:%02d:%02d\n",
           hora_final, minuto_final, segundo_final);

    system("PAUSE");
    return 0;
}