#include <stdio.h>

int main() {
    int opcao;
    float num;

    do {
        printf("\nMenu:\n");
        printf("1 - Dobrar um numero\n");
        printf("2 - Metade de um numero\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite um numero: ");
            scanf("%f", &num);
            printf("Dobro = %.2f\n", num * 2);
        } else if (opcao == 2) {
            printf("Digite um numero: ");
            scanf("%f", &num);
            printf("Metade = %.2f\n", num / 2);
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
