#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("FOR:\n");

    for (i = 0; i <= 100; i++)
    {
        printf("%d ", i);
    }

    printf("\n\nWHILE:\n");

    i = 0;

    while (i <= 100)
    {
        printf("%d ", i);
        i++;
    }

    printf("\n\nDO-WHILE:\n");

    i = 0;

    do
    {
        printf("%d ", i);
        i++;
    }
    while (i <= 100);

    /*
       Para este problema, o for e a estrutura mais adequada,
       pois sabemos exatamente o intervalo da repeticao.
    */

    printf("\n");

    system("PAUSE");
    return 0;
}