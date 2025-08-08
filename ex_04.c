#include <stdio.h>
void main(){
    float metro = 0;
    float cm = 0;
    char escolha;
    printf("Para converter centímetros para metros pressione A, caso queira converter metros para centímetros pressione B: \n");
    scanf("%c", &escolha);
    if (escolha == 'A') {
        printf("Digite a quantidade em centímetros: ");
        scanf("%f", &cm);
        float resultado = cm / 100;
        printf("%.2f centímetros é igual a %.2f metros\n", cm, resultado);
        } else if (escolha== 'B') {
            printf("Digite a quantiade em metros: ");
            scanf("%f", &metro);
            float resultado = metro * 100;
            printf("%.3f metros é igual a %.3f centímetros\n", metro, resultado);
    }
    
}
