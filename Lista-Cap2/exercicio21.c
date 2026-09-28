#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("Caractere digitado: %c\n", caractere);
    printf("Codigo ASCII: %d\n", caractere);

    system("PAUSE");
    return 0;
}