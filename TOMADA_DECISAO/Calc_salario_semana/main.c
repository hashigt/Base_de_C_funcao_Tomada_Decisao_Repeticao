/*Como funciona:
A função calcula_valor_hora determina o salário bruto multiplicando as horas trabalhadas pelo valor da hora.
A função calcula_bonus aplica a lógica do bônus:
Sem bônus para até 40 horas trabalhadas.
50% de bônus sobre o valor da hora para horas entre 41 e 60.
100% de bônus (dobro do valor da hora) para mais de 60 horas.
No main, o programa solicita as horas trabalhadas e o valor da hora, calcula o salário bruto, o bônus e o salário líquido final, exibindo todos os valores.
*/
//multiplica a hora pelo valor da hora para ter como resultado o salario sem bonus//

#include <stdio.h>
float calcula_valor_hora(float hora, float valor_hora){
    // Esta função calcula o valor total das horas trabalhadas sem considerar bônus.
    // Ela recebe as 'hora' trabalhadas e o 'valor_hora' de cada hora.
    // A fórmula é simples: horas * valor_hora.
    return hora * valor_hora;
}

float calcula_bonus(float hora, float valor_hora){
    // Esta função calcula o valor do bônus com base no número de horas trabalhadas.
    // Ela recebe as 'hora' trabalhadas e o 'valor_hora' para calcular o valor do bônus.
    
    // Condição para horas normais (até 40 horas):
    if(hora <= 40){
        // Se a pessoa trabalhou 40 horas ou menos, não há bônus.
        return 0;
    }
    // Condição para bônus de 100% (mais de 60 horas):
    else if(hora > 60){
        // Se a pessoa trabalhou mais de 60 horas, o bônus é de 100% do valor total das horas.
        // A função 'calcula_valor_hora' é reutilizada para obter o valor total, que se torna o bônus.
        return calcula_valor_hora(hora, valor_hora);
    }
    // Condição para bônus de 50% (entre 41 e 60 horas):
    else{
        // Se a pessoa trabalhou entre 41 e 60 horas, o bônus é de 50% do valor total das horas.
        // O valor total é calculado e dividido por 2.0.
        return calcula_valor_hora(hora, valor_hora) / 2.0;
    }
}

int main()
{
    // Declara variáveis para as horas, valor da hora, salário bruto, bônus e salário líquido.
    float hora, valor_hora, salario_bruto, bonus, salario_liquido;
    
    // Solicita ao usuário o número de horas trabalhadas na semana.
    printf("Quantas horas você trabalhou na semana?");
    scanf("%f", &hora);
    
    // Solicita o valor de cada hora de trabalho.
    printf("Qual é o valor da hora?");
    scanf("%f", &valor_hora);
    
    // Chama a função 'calcula_valor_hora' para obter o salário base.
    salario_bruto = calcula_valor_hora(hora, valor_hora);
    
    // Chama a função 'calcula_bonus' para obter o valor do bônus.
    bonus = calcula_bonus(hora, valor_hora);
    
    // Soma o salário base com o bônus para obter o salário líquido (final).
    salario_liquido = salario_bruto + bonus;
    
    // Imprime os resultados formatados para duas casas decimais (%.2f).
    // O bônus, o salário bruto e o salário líquido são exibidos.
    printf("\nO bonus com base nas horas trabalhadas na semana R$%.2f", bonus);
    printf("\nO seu salário bruto da semana R$%.2f", salario_bruto);
    printf("\nO seu salário da semana será R$%.2f", salario_liquido);

    return 0;
}