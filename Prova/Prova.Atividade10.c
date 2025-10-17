#include <stdio.h>

int main() {
    float num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    if(num1 > num2)
        printf("O maior número é: %.2f\n", num1);
    else if(num2 > num1)
        printf("O maior número é: %.2f\n", num2);
    else
        printf("números iguais\n");
}
