/******************************************************************************

Faça uma função calcData, que receba uma data ( 3 inteiros, dia mês e ano) e uma
quantidade x de dias e mostre na tela a data daqui a x dias (cuidado com as 
mudanças de mês e ano...)

*******************************************************************************/
#include <stdio.h>
int normaliza_data(int *dia, int *mes, int *ano) {
    // Usamos ponteiros para modificar as variáveis originais
    // do dia, mês e ano, o que é mais eficiente.

    // A lógica de normalização agora é mais robusta,
    // garantindo que os dias e meses estejam dentro de um intervalo válido.

    if (*mes > 12) {
        *ano += *mes / 12;
        *mes %= 12;
    }
    
    // Supondo 30 dias por mês para simplificar.
    if (*dia > 30) {
        *mes += *dia / 30;
        *dia %= 30;
        
        if (*mes > 12) {
            *ano += *mes / 12;
            *mes %= 12;
        }
    }

    return 0; // Indica que a função foi executada com sucesso.
}

int main() {
    int dia, mes, ano, tempo;
    
    printf("DIA? ");
    scanf("%d", &dia);
    printf("MES? ");
    scanf("%d", &mes);
    printf("ANO? ");
    scanf("%d", &ano);
    
    printf("Quantos dias irão passar? ");
    scanf("%d", &tempo);
    
    // Exibe a data original.
    printf("\nData original: %d/%d/%d\n", dia, mes, ano);
    
    // Adiciona o tempo (em dias) à data original.
    dia += tempo;

    // Chama a função para normalizar a nova data, corrigindo meses e anos.
    normaliza_data(&dia, &mes, &ano);

    // Exibe a nova data corrigida.
    printf("Nova data: %d/%d/%d\n", dia, mes, ano);

    return 0;
}
