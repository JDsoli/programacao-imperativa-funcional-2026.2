#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Seu numero é par\n");
    } else {
        printf("Seu numero é impar\n");
    }

    if (num > 0) {
        printf("Seu numero é positivo\n");
    } else if (num < 0) {
        printf("Seu numero é negativo\n");
    } else {
        printf("Este é o numero 0\n");
    }

    return 0;
}