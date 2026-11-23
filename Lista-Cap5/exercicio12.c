#include <stdio.h>

void exibeMenu(void);

int main() {
    int opcao;

    exibeMenu();

    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Cadastrar selecionado.\n");
            break;

        case 2:
            printf("Listar selecionado.\n");
            break;

        case 3:
            printf("Remover selecionado.\n");
            break;

        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}

void exibeMenu(void) {
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
}