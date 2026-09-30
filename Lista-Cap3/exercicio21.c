#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char secreta;
    char tentativa;
    int quantidade = 0;

    srand(time(NULL));

    secreta = rand() % 26 + 'a';

    do
    {
        printf("Digite uma letra entre a e z: ");
        scanf(" %c", &tentativa);

        quantidade++;

        if (tentativa < secreta)
        {
            printf("A letra secreta vem depois.\n");
        }
        else if (tentativa > secreta)
        {
            printf("A letra secreta vem antes.\n");
        }

    } while (tentativa != secreta);

    printf("Parabens! Voce acertou!\n");
    printf("Tentativas: %d\n", quantidade);

    system("PAUSE");
    return 0;
}