#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int invertido = 0;
    int digito;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    while (numero > 0)
    {
        digito = numero % 10;

        invertido = invertido * 10 + digito;

        numero = numero / 10;
    }

    printf("Numero invertido: %d\n", invertido);

    system("PAUSE");
    return 0;
}