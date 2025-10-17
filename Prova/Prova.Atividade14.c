#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int contador = 0, numero, soma = 0, qtd_primos = 0;
    while (contador < 10) {
        printf("Digite um inteiro positivo: ");
        scanf("%d", &numero);
        if (numero > 0) {
            contador++;
            if (ehPrimo(numero)) {
                soma += numero;
                qtd_primos++;
            }
        }
    }
    if (qtd_primos > 0)
        printf("Media dos primos: %.2f\n", (float)soma / qtd_primos);
}
