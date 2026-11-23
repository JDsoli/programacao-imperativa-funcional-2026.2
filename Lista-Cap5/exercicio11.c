#include <stdio.h>

int ehPar(int n);

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (ehPar(n))
        printf("O numero e par.\n");
    else
        printf("O numero e impar.\n");

    return 0;
}

int ehPar(int n) {
    return n % 2 == 0;
}