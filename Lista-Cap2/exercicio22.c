#include <stdio.h>
#include <stdlib.h>

int main()
{
    char maiuscula;
    char minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);

    minuscula = maiuscula - 'A' + 'a';

    printf("Letra minuscula: %c\n", minuscula);

    system("PAUSE");
    return 0;
}