#include <stdio.h>
void main(){
    int numero1, numero2;
    int soma = 0;
    int contagem = 0;
    printf("Digite o primeiro número inteiro: ");
    scanf ("%d", &numero1);
    printf("Você digitou: %d\n", numero1);
    printf("Digite o segundo número inteiro: ");
    scanf ("%d", &numero2);
    printf("Você digitou: %d\n", numero2);
    soma =numero1 + numero2;
    printf("A soma dos dois números é: %d\n", soma);
}
