#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i;

    printf("Digite A: ");
    scanf("%d", &a);

    printf("Digite B: ");
    scanf("%d", &b);

    if (a <= b)
    {
        for (i = a; i <= b; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (i = a; i >= b; i--)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    system("PAUSE");
    return 0;
}