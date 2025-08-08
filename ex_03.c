#include <stdio.h>
void main(){
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);
    float media =(nota1 + nota2 + nota3) / 3;
    printf("Primeira nota: %.2f\n", nota1);
    printf("Segunda nota: %.2f\n", nota2);
    printf("Terceira nota: %.2f\n", nota3);
    printf("A média do aluno é: %.2f\n", media);
}
