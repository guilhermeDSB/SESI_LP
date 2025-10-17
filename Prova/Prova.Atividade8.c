#include <stdio.h>

int main() {
    float preco_antigo, preco_novo, aumento;
    printf("Digite o preço antigo: ");
    scanf("%f", &preco_antigo);

    if (preco_antigo <= 50)
        aumento = preco_antigo * 0.05;
    else if (preco_antigo <= 100)
        aumento = preco_antigo * 0.10;
    else
        aumento = preco_antigo * 0.15;

    preco_novo = preco_antigo + aumento;

    printf("Preço novo: %.2f\n", preco_novo);
}
