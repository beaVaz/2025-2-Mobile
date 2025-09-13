#include <stdio.h>

int main() {
    int n, i, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= 2 * n; i += 2) {
        soma += i;
    }

    printf("Soma dos %d primeiros impares = %d\n", n, soma);

    return 0;
}
