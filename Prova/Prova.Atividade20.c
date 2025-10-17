#include <stdio.h>
int main(void) {
    int dados[] = {12, -4, 57, 33, 8};
    size_t n = sizeof(dados) / sizeof(dados[0]);

    printf("Maior valor: %d\n", maior_valor(dados, n));
}
