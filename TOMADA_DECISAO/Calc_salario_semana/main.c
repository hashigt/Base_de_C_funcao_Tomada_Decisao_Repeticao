#include <stdio.h>
//multiplica a hora pelo valor da hora para ter como resultado o salario sem bonus//
float calcula_valor_hora(float hora, float valor_hora){
    return hora * valor_hora;
}
float calcula_bonus(float hora, float valor_hora){
    //sem bonus nenhum//
    if(hora <= 40){
        return 0;
    }
    //bonus de 100%//
    else if(hora > 60){
        return calcula_valor_hora(hora,valor_hora);
    }
    //bonus de 50%//
    else{
        return calcula_valor_hora(hora,valor_hora) / 2.0;
    }
}

int main()
{
    float hora,valor_hora,salario_bruto,bonus,salario_liquido;
    printf("Quantas horas você trabalhou na semana?");
    scanf("%f", &hora);
    printf("Qual é o valor da hora?");
    scanf("%f", &valor_hora);
    //chamar função para ter o salário sem bonus//
    salario_bruto=calcula_valor_hora(hora,valor_hora);
    //chamar a função para ter o valor do bonus//
    bonus=calcula_bonus(hora,valor_hora);
    //soma o salário + bonus = salário final//
    salario_liquido=salario_bruto + bonus;
    
    printf("\nO bonus com base nas horas trabalhadas na semana R$%.2f", bonus);
    printf("\nO seu salário bruto da semana R$%.2f", salario_bruto);
    printf("\nO seu salário da semana será R$%.2f", salario_liquido);

    return 0;
}