#include <stdio.h>
/******************************************************************************
Faça um programa que receba para cada uma das n (fornecidos pelo usuário) partidas de uma
rodada do campeonato municipal de futebol, o código e o número de gols feitos por um dos times e o
código e o número de gols feitos pelo outro time da partida, mostrando, para cada partida, o código do
time vencedor ou a mensagem "empate".

Como funciona:
A função calc_jogo recebe os códigos dos dois times (cod1, cod2) e os gols que cada um marcou (time1, time2). Ela então exibe o placar e declara o vencedor (ou empate) usando lógica condicional.
No main, o programa primeiro pergunta quantas partidas serão simuladas. Em seguida, um loop while se repete pelo número de partidas, solicitando ao usuário os dados de cada jogo (código do time e gols) e chamando a função calc_jogo para exibir o resultado.
*******************************************************************************/

void calc_jogo(int cod1, int cod2, int time1, int time2){
    // Esta função analisa o resultado de um jogo.
    // Ela recebe o código (sigla) e o número de gols para cada um dos dois times.
    
    if(time1 == time2){
        // Se a pontuação for a mesma, o jogo é um empate.
        printf("(%i) %i x %i (%i)\n", cod1, time1, time2, cod2);
        printf("empate\n");
    }
    else if(time1 > time2){
        // Se o time 1 tiver mais gols, ele é o vencedor.
        printf("(%i) %i x %i (%i)\n", cod1, time1, time2, cod2);
        printf("***%i Ganhou***\n", cod1);
    }
    else{
        // Caso contrário (se time2 > time1), o time 2 é o vencedor.
        printf("(%i) %i x %i (%i)\n", cod1, time1, time2, cod2);
        printf("***%i Ganhou***\n", cod2); 
    }
}

int main()
{
    // Declara variáveis para os códigos dos times, pontuações,
    // o número total de partidas e um contador para o loop.
    int cod1, cod2;
    int time1, time2, partidas, cont;
    
    // Pergunta ao usuário quantas partidas serão jogadas no campeonato.
    printf("Quantas partidas tem no campeonato?");
    scanf("%i", &partidas);
    
    // Inicializa o contador do loop.
    cont = 0;
    
    // Inicia um loop 'while' para processar cada partida.
    // O loop continua enquanto 'cont' for menor ou igual a 'partidas'.
    while(cont <= partidas){
        // Solicita ao usuário os dados do primeiro time.
        printf("1° Qual é a sigla do time?(Só pode ser número)");
        scanf("%i", &cod1);
        printf("Quantos gols ele fez?");
        scanf("%i", &time1);
        
        // Solicita ao usuário os dados do segundo time.
        printf("2° Qual é a sigla do time?(Só pode ser número)");
        scanf("%i", &cod2);
        printf("Quantos gols ele fez?");
        scanf("%i", &time2);
        
        // Chama a função 'calc_jogo' para processar e exibir o resultado da partida.
        calc_jogo(cod1, cod2, time1, time2);
        
        // Incrementa o contador para avançar para a próxima partida.
        cont++;
    }

   
    return 0;
}
