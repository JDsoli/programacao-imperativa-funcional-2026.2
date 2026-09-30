#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;

    printf("Decimal\tHexadecimal\tCaractere\n");

    for (codigo = 32; codigo <= 126; codigo++)
    {
        printf("%d\t%X\t\t%c\n",
               codigo, codigo, codigo);
    }

    system("PAUSE");
    return 0;
}