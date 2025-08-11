#include <stdio.h>
/******************************************************************************** 
  
Escreva uma função chamada mostraTabuada que receba um valor inteiro. A função deve mostrar a tabuada de 1
a 10 deste de valor
b) Escreva um programa, utilizando a função mostraTabuada, que mostre a tabuada de números informados pelo
usuário. A entrada de dados é finalizada quando um número ≤ 0 for digitado. No final, o programa deve mostrar:.
1.quantidade de números digitados
2. % de números pares digitados

Exemplo:
Qtd de números digitados: 2
Percentual de números pares digitados: 50.0 %

Como funciona:
A função mostra_tabuada recebe um número inteiro e exibe sua tabuada de 1 a 10.
A função verificar_num checa se um número é par (retornando 0 se for par, ou 1 se for ímpar, usando o operador de módulo %).
No main, o programa entra em um loop while que continua enquanto o usuário digitar números positivos. A cada iteração:
Ele solicita um número ao usuário.
Chama mostra_tabuada para exibir a tabuada desse número.
Utiliza verificar_num para contar quantos números pares foram digitados.
Conta o total de números digitados.
Quando o usuário digita um número negativo, o loop termina. O programa então exibe a quantidade total de números digitados e o percentual de números pares entre eles.
*******************************************************************************/
int mostra_tabuada(int num){
    // Esta função exibe a tabuada de um número de 1 a 10.
    // Ela recebe um número inteiro 'num' como entrada.
    // A função declara 10 variáveis (um, dois, etc.) para armazenar
    // os resultados de cada multiplicação, o que é repetitivo.
    // Uma abordagem mais comum seria usar um loop (como 'for') para
    // calcular e imprimir os resultados, tornando o código mais conciso.
    int um, dois, tres, quatro, cinco, seis, sete, oito, nove, dez;
    um = 1 * num;
    dois = 2 * num;
    // ... (e assim por diante para todas as multiplicações) ...
    dez = 10 * num;
    
    // As próximas 10 linhas imprimem cada uma das multiplicações.
    // A função é do tipo 'int', mas não retorna nenhum valor.
    // O tipo de retorno deveria ser 'void', já que a função não retorna nada.
    printf("%i x 1 = %i\n", num, um);
    printf("%i x 2 = %i\n", num, dois);
    // ... (impressão de todas as linhas da tabuada) ...
 
   printf("%i x 10 = %i\n", num, dez);
}

int verificar_num(int num){
    // Esta função verifica se um número é par.
    // Ela usa o operador de módulo (%). Se o resto da divisão por 2 for 0,
    // o número é par. Caso contrário, é ímpar.
    // A função retorna 0 para par e um valor diferente de zero para ímpar.
    // Essa lógica é eficiente para determinar a paridade.
    return num % 2;
}

int main()
{
    // Declara variáveis para o número digitado, contadores e um booleano (bole).
    int num, num_dig, cont_par, bole;
    float resultado;
    
    // Inicializa contadores com 0. 'num_dig' conta todos os números digitados e 'cont_par'
    // conta os números pares.
    num_dig = 0;
    cont_par = 0;
    
    // Pede ao usuário que insira um número para começar.
    printf("Escreva um número(ou um número negativo para sair)");
    scanf("%i", &num);
    
    // Inicia um loop 'while' que continua enquanto o número digitado for positivo.
    // Se um número negativo for inserido, o loop termina.
    while(num > 0){
        // Chama a função 'mostra_tabuada' para exibir a tabuada do número.
        mostra_tabuada(num);
        
        // Chama a função 'verificar_num' para saber se o número é par.
        // O resultado (0 para par, 1 para ímpar) é armazenado em 'bole'.
        bole = verificar_num(num);
        
        // Se 'bole' for 0 (indicando um número par), incrementa o contador de pares.
        if(bole == 0){
            cont_par++;
        }
        
        // Incrementa o contador de números digitados.
        num_dig++;
        
        // Pede um novo número ao usuário, preparando a próxima iteração do loop.
        printf("Escreva um número(ou um número negativo para sair)");
        scanf("%i", &num);
    }
    
    // Após o loop, calcula a porcentagem de números pares.
    // O 'casting' (float) é usado para garantir que a divisão seja feita com
    // números de ponto flutuante e não com inteiros.
    resultado = ((float)cont_par / num_dig) * 100;
    
    // Imprime o total de números digitados e o percentual de números pares.
    printf("Qtn de números digitados %i\n", num_dig);
    // '%%' é usado para imprimir o caractere '%' literal.
    printf("percentual de números pares digitados %.1f%%", resultado);
    
    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}
