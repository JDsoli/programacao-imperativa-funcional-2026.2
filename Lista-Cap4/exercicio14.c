#include <stdio.h>

int main() {
    float nota;
    int faltas;

    printf("Digite a nota final: ");
    scanf("%f", &nota);

    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0 && nota <= 10.0) {
        if (faltas <= 20) {
            printf("Conceito A\n");
        } else {
            printf("Conceito B\n");
        }

    } else if (nota >= 7.5) {
        if (faltas <= 20) {
            printf("Conceito B\n");
        } else {
            printf("Conceito C\n");
        }

    } else if (nota >= 5.0) {
        if (faltas <= 20) {
            printf("Conceito C\n");
        } else {
            printf("Conceito D\n");
        }

    } else if (nota >= 4.0) {
        if (faltas <= 20) {
            printf("Conceito D\n");
        } else {
            printf("Conceito E\n");
        }

    } else if (nota >= 0.0) {
        printf("Conceito E\n");

    } else {
        printf("Nota invalida\n");
    }

    return 0;
}