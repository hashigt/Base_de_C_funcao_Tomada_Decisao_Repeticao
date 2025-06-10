/*
Como funciona:
A função cal_sensacao_termica recebe a temperatura em Celsius e a velocidade do vento como parâmetros, aplicando uma fórmula matemática para retornar o valor da sensação térmica. (É importante notar que esta função requer a biblioteca <math.h> para a função sqrt() e que a fórmula utilizada pode ser uma simplificação ou variação de modelos de sensação térmica reais).
No main, um loop while executa 24 vezes, representando cada hora do dia. Em cada iteração, o programa solicita ao usuário a temperatura e a velocidade do vento para aquela hora específica.
Após receber os dados, ele chama a função cal_sensacao_termica e exibe a sensação térmica calculada para a hora correspondente.
*/
float cal_sensacao_termica(float celcius, float vento){
    return 33 + (10 * sqrt(vento) + 10.45 - vento) * (celcius - 33) / 22;
}

int main()
{
    int cont;
    float vento,celcius;
    cont=1;
    while(cont <= 24){
        printf("qual e a temperatura em graus de %i horas?", cont);
        scanf("%f", &celcius);
        printf("qual e a velocidade do vento as %i horas?", cont);
        scanf("%f", &vento);
        
        printf("A sensação termica de %i horas e de %.1f\n", cont,cal_sensacao_termica(celcius,vento));
        cont++;
    }
    

    return 0;
}