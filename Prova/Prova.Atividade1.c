#include <stdio.h>

int main() {
    float celsius;
    float fah;
    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fah = (celsius * 9.0 / 5.0) + 32.0;
    printf("%.2f graus Celsius = %.2f graus Fahrenheit\n", celsius, fah);
}
