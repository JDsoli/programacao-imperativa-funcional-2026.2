#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha_correta = 2026;
    int senha = 0;
    int tentativa;

    for (tentativa = 1; tentativa <= 3; tentativa++)
    {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == senha_correta)
        {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", tentativa);
            break;
        }

        printf("Senha incorreta.\n");
    }

    if (senha != senha_correta)
    {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    system("PAUSE");
    return 0;
}