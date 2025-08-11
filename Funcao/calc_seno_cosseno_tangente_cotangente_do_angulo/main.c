#include <math.h>
#include <stdio.h>

float grau_para_radiano(float angulo){
    // Converte um ângulo de graus para radianos.
    // A fórmula é: radianos = graus * PI / 180.
    // M_PI é uma constante para o valor de PI, geralmente disponível em <math.h>.
    return angulo * M_PI / 180.0;
}

float seno(float angulo){
    // Calcula o seno de um ângulo, esperando a entrada em graus.
    // Primeiro, converte o ângulo para radianos usando a função acima.
    float radiano = grau_para_radiano(angulo);
    // Depois, usa a função padrão 'sin' da biblioteca C, que espera radianos.
    return sin(radiano);
}

float cosseno(float angulo){
    // Similar ao seno, calcula o cosseno de um ângulo em graus.
    // Converte para radianos primeiro e depois usa a função 'cos' da biblioteca C.
    float radiano = grau_para_radiano(angulo);
    return cos(radiano);
}

float tangente(float angulo){
    // Calcula a tangente usando a identidade trigonométrica fundamental:
    // tangente = seno / cosseno.
    // Ele chama as funções personalizadas 'seno' e 'cosseno' que já lidam com graus.
    return seno(angulo) / cosseno(angulo);
}

float cotangente(float angulo){
    // Calcula a cotangente, que é o inverso da tangente.
    // A fórmula é: cotangente = 1 / tangente.
    // Novamente, usa a função personalizada 'tangente'.
    return 1 / tangente(angulo);
}

int main()
{
    // Declara três variáveis para armazenar os ângulos.
    float angulo1,angulo2,angulo3;

    // Solicita ao usuário que digite dois ângulos em graus.
    printf("Escreva o 1º angulo em graus:");
    scanf("%f", &angulo1);
    printf("Escreva o 2º angulo em graus:");
    scanf("%f", &angulo2);
    
    // Imprime os resultados trigonométricos para o primeiro ângulo.
    // %.2f formata o ângulo para 2 casas decimais.
    // %.4f formata os resultados para 4 casas decimais.
    printf("====AS RESPOSTAS DO ANGULO %.2f====\n",angulo1);
    printf("O seno do angulo: %.4f\nO cosseno do angulo: %.4f\nA tangente do angulo: %.4f\nA cotangente do angulo: %.4f",seno(angulo1),cosseno(angulo1),tangente(angulo1),cotangente(angulo1));

    // Repete o processo para o segundo ângulo.
    printf("\n====AS RESPOSTAS DO ANGULO %.2f====\n",angulo2);
    printf("O seno do angulo: %.4f\nO cosseno do angulo: %.4f\nA tangente do angulo: %.4f\nA cotangente do angulo: %.4f",seno(angulo2),cosseno(angulo2),tangente(angulo2),cotangente(angulo2));
    
    // Calcula a soma dos dois ângulos e armazena em angulo3.
    angulo3=angulo1+angulo2;
    
    // Imprime o seno e o cosseno do ângulo resultante da soma.
    printf("\n====AS SOMA DOS ANGULOS %.2f====\n",angulo3);
    printf("O seno do angulo: %.4f\nO cosseno do angulo: %.4f",seno(angulo3),cosseno(angulo3));
    
    
    return 0;
}