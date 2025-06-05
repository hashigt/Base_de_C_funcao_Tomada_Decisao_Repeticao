/******************************************************************************

Faça um algoritmo para calcular a conta final de um hóspede de um hotel fictício, considerando que serão
lidos o número do quarto do hóspede, o tipo do apartamento utilizado (1, 2, 3 ou 4), o número de diárias
utilizadas pelo hóspede e o valor do consumo interno do hóspede.

tipo 1 = 450,0 diaria
tipo 2 = 300,0 diaria
tipo 3 = 180,0 diaria
tipo 4 = 90,0 diaria

O valor total das diárias é calculado pela multiplicação do número de diárias utilizadas pelo valor da diária.
Uma taxa de serviço de 10% é cobrada sobre o valor do consumo interno do hóspede e de 6% sobre o total
das diárias. O valor a pagar resulta a da soma do subtotal com a taxa de serviço.
Seu programa deve mostrar o número do quarto do hóspede, o tipo do apartamento, o número de diárias
utilizadas, o valor unitário da diária, o valor total das diárias, o valor do consumo interno, o subtotal, o
valor da taxa de serviço e o total geral.

*******************************************************************************/
#include <stdio.h>
int cal_diaria(int tipo){
    if(tipo == 1){
        return 450;
    }
    else if(tipo ==2){
        return 300;
    }
    else if(tipo ==3){
        return 180;
    }
    else if(tipo ==4){
        return 90;
    }
}

float taxa_consumo(float consumo_interno){
    return (consumo_interno * 0.10) + consumo_interno;
}
float total_diaria(int diaria, int diarias){
    return diaria * diarias;
}
float taxa_diaria(int total_diaria1){
    return total_diaria1 * 0.06;
}

int main()
{
    int tipo,apartamento,diarias,diaria,total_diaria1;
    float consumo_interno,total_taxa,total_geral;
    printf("(1) -> Premium-plus / (2) -> Premium / (3) -> Confortável / (4) -> Barato\n");
    printf("Qual tipo do seu apartamento?(1 a 4)");
    scanf("%i", &tipo);
    printf("Qual é o número do seu quarto?");
    scanf("%i", &apartamento);
    printf("Quantas diárias ficou?");
    scanf("%i", &diarias);
    printf("Qual foi seu valor do consumo interno?");
    scanf("%f", &consumo_interno);
    
diaria=cal_diaria(tipo);

total_diaria1=total_diaria(diaria,diarias);

total_taxa=taxa_diaria(total_diaria1) + taxa_consumo(consumo_interno);

total_geral=consumo_interno+total_taxa+total_diaria1;

printf("Apartamento Nº%i\n", apartamento);
printf("tipo do Apartamento %i\n", tipo);
printf("Ficou %i dias.\n", diarias);
printf("Valor da diaria R$%i.\n",diaria);
printf("Valor total da diaria R$%i.\n",total_diaria1);
printf("Valor do consumo interno R$%.2f.\n",consumo_interno);
printf("Valor total da taxa de serviço R$%.2f.\n",total_taxa);
printf("Valor total geral R$%.2f.\n",total_geral);




    return 0;
}
