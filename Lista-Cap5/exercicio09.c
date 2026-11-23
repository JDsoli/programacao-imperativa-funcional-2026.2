#include <stdio.h>

int maior(int a, int b);

int main() {
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("Maior = %d\n", maior(a, b));

    return 0;
}

int maior(int a, int b) {
    if (a > b)
        return a;

    return b;
}