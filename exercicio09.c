#include <stdio.h>

int main() {
    int inicio, fim, k, i;

    printf("Digite inicio, fim e k: ");
    scanf("%d %d %d", &inicio, &fim, &k);

    for (i = inicio; i <= fim; i++) {
        if (i % k == 0)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
