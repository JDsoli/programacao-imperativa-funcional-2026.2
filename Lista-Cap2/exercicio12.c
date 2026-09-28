#include <stdio.h>

int main()
{
    int numero;
    int antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero;
    sucessor = numero;

    antecessor--;
    sucessor++;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}