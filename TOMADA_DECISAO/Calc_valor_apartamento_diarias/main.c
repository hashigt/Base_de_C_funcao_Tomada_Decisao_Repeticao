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


Como funciona:
A função cal_diaria define o preço da diária com base no tipo de apartamento (1 a 4).
A função taxa_consumo adiciona uma taxa de 10% ao valor do consumo interno.
A função total_diaria calcula o custo total das diárias.
A função taxa_diaria aplica uma taxa de serviço de 6% sobre o valor total das diárias.
No main, o programa solicita as informações do hóspede (tipo de apartamento, número do quarto, diárias e consumo) e, em seguida, calcula e exibe detalhadamente todos os custos, incluindo o valor da diária, o total das diárias, o consumo, as taxas e o valor total geral.

*******************************************************************************/
float cal_diaria(int tipo){
    // Esta função retorna o valor da diária com base no tipo de apartamento.
    // Ela recebe um número inteiro 'tipo' (de 1 a 4).
    // O valor da diária é fixo para cada tipo.
    if(tipo == 1){
        return 450.0;
    }
    else if(tipo == 2){
        return 300.0;
    }
    else if(tipo == 3){
        return 180.0;
    }
    else if(tipo == 4){
        return 90.0;
    }

    return 0.0;
}

float taxa_consumo(float consumo_interno){
    // Esta função calcula o valor da taxa de serviço sobre o consumo interno.
    // A taxa é de 10% do valor do consumo.
    return consumo_interno * 0.10;
}

float total_diaria(int diaria, int diarias){
    // Esta função calcula o valor total das diárias.
    // Recebe o valor de uma diária ('diaria') e o número de diárias ('diarias').
    return diaria * diarias;
}

float taxa_diaria(int total_diaria1){
    // Esta função calcula a taxa de serviço sobre o valor total das diárias.
    // A taxa é de 6% do valor total das diárias.
    // A função recebe um 'int' mas retorna um 'float', o que pode gerar um 'cast'.
    return total_diaria1 * 0.06;
}

int main()
{
    // Declara variáveis para o tipo de apartamento, número, diárias, consumo interno,
    // total das diárias, taxa e o total geral.
    int tipo, apartamento, diarias;
    float consumo_interno, diaria, total_diaria_valor, taxa_consumo_valor, taxa_diaria_valor, total_geral;

    // Menu e entrada de dados do usuário.
    printf("(1) -> Premium-plus / (2) -> Premium / (3) -> Confortável / (4) -> Barato\n");
    printf("Qual tipo do seu apartamento?(1 a 4)");
    scanf("%i", &tipo);
    printf("Qual é o número do seu quarto?");
    scanf("%i", &apartamento);
    printf("Quantas diárias ficou?");
    scanf("%i", &diarias);
    printf("Qual foi seu valor do consumo interno?");
    scanf("%f", &consumo_interno);
    
    // Processamento de dados:
    // Chama a função 'cal_diaria' para obter o valor da diária.
    diaria = cal_diaria(tipo);

    // Chama 'total_diaria' para calcular o custo total das diárias.
    total_diaria_valor = total_diaria(diaria, diarias);

    taxa_diaria_valor = taxa_diaria(total_diaria_valor);

    taxa_consumo_valor = taxa_consumo(consumo_interno);

    // Ele soma o custo das diarias, o consumo interno e as duas taxas.
    total_geral = total_diaria_valor + consumo_interno + taxa_diaria_valor + taxa_consumo_valor;


    // Exibição dos resultados.
    printf("\n--- Detalhes da Fatura ---\n");
    printf("Apartamento No%i\n", apartamento);
    printf("Tipo do Apartamento %i\n", tipo);
    printf("Ficou %i dias.\n", diarias);
    printf("Valor da diaria: R$%.2f\n", diaria);
    printf("Valor total das diarias: R$%.2f\n", total_diaria_valor);
    printf("Valor do consumo interno: R$%.2f\n", consumo_interno);
    printf("Taxa de servico sobre as diarias (6%%): R$%.2f\n", taxa_diaria_valor);
    printf("Taxa de servico sobre o consumo (10%%): R$%.2f\n", taxa_consumo_valor);
    printf("--- Total a Pagar ---\n");
    printf("Valor total geral: R$%.2f\n", total_geral);

    return 0;
}
