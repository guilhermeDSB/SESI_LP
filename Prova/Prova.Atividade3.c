#include <stdio.h>

int main() {
    float PI = 3.14;
    float rad, graus;
    printf("Digite o ângulo em radianos: ");
    scanf("%f", &rad);
    graus = rad * 180 / PI;
    printf("%.4f radianos = %.4f graus\n", rad, graus);
}
