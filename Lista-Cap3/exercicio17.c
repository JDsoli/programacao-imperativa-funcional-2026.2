#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;
    float soma = 0;
    float maior = 0;
    float menor = 0;
    float media;
    int quantidade = 0;

    while (1)
    {
        printf("Digite uma nota ou -1 para encerrar: ");
        scanf("%f", &nota);

        if (nota == -1.0)
        {
            break;
        }

        if (nota < 0 || nota > 10)
        {
            printf("Nota invalida.\n");
            continue;
        }

        if (quantidade == 0)
        {
            maior = nota;
            menor = nota;
        }
        else
        {
            if (nota > maior)
            {
                maior = nota;
            }

            if (nota < menor)
            {
                menor = nota;
            }
        }

        soma += nota;
        quantidade++;
    }

    if (quantidade > 0)
    {
        media = soma / quantidade;

        printf("Total de alunos: %d\n", quantidade);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", media);
    }
    else
    {
        printf("Nenhuma nota registrada.\n");
    }

    system("PAUSE");
    return 0;
}