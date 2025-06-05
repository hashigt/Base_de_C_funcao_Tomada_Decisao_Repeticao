/******************************************************************************

Faça um programa que receba para cada uma das n (fornecidos pelo usuário) partidas de uma
rodada do campeonato municipal de futebol, o código e o número de gols feitos por um dos times e o
código e o número de gols feitos pelo outro time da partida, mostrando, para cada partida, o código do
time vencedor ou a mensagem "empate".
*******************************************************************************/
#include <stdio.h>

void calc_jogo(int cod1, int cod2, int time1, int time2){
    if(time1 == time2){
        printf("(%i) %i x %i (%i)\n",cod1,time1,time2,cod2);
        printf("empate\n");
    }
    else if(time1 > time2){
        printf("(%i) %i x %i (%i)\n",cod1,time1,time2,cod2);
        printf("***%i Ganhou***\n", cod1);
    }
    else{
        printf("(%i) %i x %i (%i)\n",cod1,time1,time2,cod2);
        printf("***%i Ganhou***\n", cod2); 
    }
}

int main()
{
    int cod1,cod2;
    int time1, time2,partidas,cont;
    
    printf("Quantas partidas tem no campeonato?");
    scanf("%i", &partidas);
    cont = 0;
    while(cont <= partidas){
        printf("1° Qual é a sigla do time?(Só pode ser número)");
        scanf("%i", &cod1);
        printf("Quantos gols ele fez?");
        scanf("%i", &time1);
        printf("2° Qual é a sigla do time?(Só pode ser número)");
        scanf("%i", &cod2);
        printf("Quantos gols ele fez?");
        scanf("%i", &time2);
        calc_jogo(cod1,cod2,time1,time2);
        cont++;
    }

    return 0;
}
