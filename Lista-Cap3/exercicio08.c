#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;

    do
    {
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);

        if (nota < 0 || nota > 10)
        {
            printf("Nota invalida!\n");
        }

    } while (nota < 0 || nota > 10);

    printf("Nota registrada com sucesso!\n");

    system("PAUSE");
    return 0;
}