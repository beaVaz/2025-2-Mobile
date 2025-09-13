#include <stdio.h>

int main() {
    float preco, total = 0;
    int qtd = 0;

    printf("Digite os precos dos itens (0 para encerrar):\n");

    while (1) {
        scanf("%f", &preco);
        if (preco == 0) break;
        if (preco < 0) {
            printf("Preco invalido, ignorado!\n");
            continue;
        }
        total += preco;
        qtd++;
    }

    printf("Total = R$ %.2f | Itens = %d\n", total, qtd);

    return 0;
}
