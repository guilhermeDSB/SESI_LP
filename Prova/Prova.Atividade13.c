#include <stdio.h>

int main() {
    int valor, soma = 0, contador = 0;
    while (contador < 10) {
        printf("Digite um inteiro positivo: ");
        scanf("%d", &valor);
        if (valor > 0) {
            soma += valor;
            contador++;
        }
    }
    printf("Média: %.2f\n", (float)soma / 10);
}
