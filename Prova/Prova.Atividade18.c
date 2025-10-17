#include <stdio.h>

int maior(int a, int b) {
    return (a > b) ? a : b;
}

int main(void) {
    int x = 10, y = 25;
    printf("%d\n", maior(x, y));  // Saída: 25
}
