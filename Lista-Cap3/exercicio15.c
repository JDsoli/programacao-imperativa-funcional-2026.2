#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    int encontrou = 0;

    printf("Digite um limite positivo: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (encontrou == 0)
    {
        printf("Nenhum numero encontrado.");
    }

    printf("\n");

    system("PAUSE");
    return 0;
}