#include <stdio.h>

int main() {
    float AvaliacaoSimestral, TrabalhoLab, Examefinal;

    printf("Digite a nota da sua Avaliação semestral:\n");
    scanf("%f", &AvaliacaoSimestral);

    printf("Digite a nota do Trabalho de laboratório:\n");
    scanf("%f", &TrabalhoLab);

    printf("Digite a nota do Exame final:\n");
    scanf("%f", &Examefinal);

    float media = (TrabalhoLab * 2 + AvaliacaoSimestral * 3 + Examefinal * 5) / 10;

    if (media <= 2.9) {
        printf("Reprovado\n");
    } else if (media >= 3.0 && media <= 4.9) {
        printf("Em recuperação\n");
    } else if (media >= 5.0) {
        printf("Aprovado\n");
    } else {
        printf("Nota incorreta\n");
    }

    return 0;
}