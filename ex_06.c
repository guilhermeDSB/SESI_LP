#include <stdio.h>
void main(){
    char nome[50];
    float salario = 0;
    int meses = 0;
    printf("Insira o nome do funcionário: ");
    scanf("%49s", nome);
    printf("Insira o salário mensal: ");
    scanf("%f", &salario);
    printf("Insira a quantidade de meses: ");
    scanf("%d", &meses);
    float total =(salario * meses);
    printf("Funcionário %s ganhou R$%.3f em %d meses\n", nome, total, meses);
}
