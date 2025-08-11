#include <stdio.h>
float cal_sensacao_termica(float celcius, float vento){
    // Esta função calcula a sensação térmica.
    // Ela recebe a temperatura em Celsius ('celcius') e a velocidade do vento ('vento').
    // A fórmula usada é a versão simplificada da fórmula de sensação térmica para o padrão SI (graus Celsius).
    // A função 'sqrt(vento)' calcula a raiz quadrada da velocidade do vento.
    // O valor de retorno é um 'float', o que é apropriado para a precisão do cálculo.
    return 33 + (10 * sqrt(vento) + 10.45 - vento) * (celcius - 33) / 22;
}

int main()
{
    // Declara variáveis para o contador de horas e para os dados de entrada.
    int cont;
    float vento, celcius;
    
    // Inicializa o contador para começar na primeira hora.
    cont = 1;
    
    // Inicia um loop 'while' para processar dados para 24 horas.
    // O loop continua enquanto 'cont' for menor ou igual a 24.
    while(cont <= 24){
        // Solicita e lê a temperatura em Celsius para a hora atual.
        printf("qual e a temperatura em graus de %i horas?", cont);
        scanf("%f", &celcius);
        
        // Solicita e lê a velocidade do vento para a hora atual.
        printf("qual e a velocidade do vento as %i horas?", cont);
        scanf("%f", &vento);
        
        // Chama a função 'cal_sensacao_termica' e exibe o resultado.
        // O valor é formatado para uma casa decimal (%.1f).
        printf("A sensação termica de %i horas e de %.1f\n", cont, cal_sensacao_termica(celcius, vento));
        
        // Incrementa o contador para avançar para a próxima hora.
        cont++;
    }
    
    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}