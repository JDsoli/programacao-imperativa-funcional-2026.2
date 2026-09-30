#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float salario;
    float novo_salario;
    float imposto;

    do
    {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1 - Reajuste Salarial\n");
        printf("2 - Retencao de Imposto de Renda\n");
        printf("3 - Encerrar Programa\n");

        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:

                printf("Digite o salario: R$ ");
                scanf("%f", &salario);

                if (salario <= 2000)
                {
                    novo_salario = salario * 1.15;
                }
                else
                {
                    novo_salario = salario * 1.10;
                }

                printf("Novo salario: R$ %.2f\n", novo_salario);

                break;

            case 2:

                printf("Digite o salario: R$ ");
                scanf("%f", &salario);

                if (salario <= 3000)
                {
                    imposto = salario * 0.08;
                }
                else
                {
                    imposto = salario * 0.15;
                }

                printf("Imposto retido: R$ %.2f\n", imposto);
                printf("Salario apos desconto: R$ %.2f\n",
                       salario - imposto);

                break;

            case 3:

                printf("Programa encerrado.\n");

                break;

            default:

                printf("Opcao invalida!\n");
        }

    } while (opcao != 3);

    system("PAUSE");
    return 0;
}