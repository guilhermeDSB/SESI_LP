#include <stdio.h>


const char *mes_por_extenso(int mes) {
    static const char *meses[] = {
        "janeiro",   "fevereiro", "março",     "abril",
        "maio",      "junho",     "julho",     "agosto",
        "setembro",  "outubro",   "novembro",  "dezembro"
    };

    if (mes < 1 || mes > 12) {
        return "mês inválido";
    }
    return meses[mes - 1];
}


void imprimir_data_extenso(int dia, int mes, int ano) {

    if (dia < 1 || dia > 31) {
        printf("Dia inválido!\n");
        return;
    }

    const char *nome_mes = mes_por_extenso(mes);
    if (nome_mes[0] == 'm') { 
        printf("%s!\n", nome_mes);
        return;
    }

    printf("%d de %s de %d\n", dia, nome_mes, ano);
}


int main(void) {
    int dia = 1, mes = 1, ano = 2000;
    imprimir_data_extenso(dia, mes, ano);  

    /* Teste com outra data */
    imprimir_data_extenso(15, 8, 2025);   
}
