#include <stdio.h>

int main() {
    int N;
    do {
        printf("Digite um inteiro positivo ímpar: ");
        scanf("%d", &N);
    } while (N <= 0 || N % 2 == 0);

    for (int i = N; i >= 1; i -= 2) {
        printf("%d\n", i);
    }
}
