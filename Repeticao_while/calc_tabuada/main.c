/******************************************************************************

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
    int um,dois,tres,quatro,cinco,seis,sete,oito,nove,dez;
    um=1 * num;
    dois=2 * num;
    tres=3 * num;
    quatro=4 * num;
    cinco=5 * num;
    seis=6 * num;
    sete=7 * num;
    oito=8 * num;
    nove=9 * num;
    dez=10 * num;
    printf("%i x 1 = %i\n", num, um);
    printf("%i x 2 = %i\n", num, dois);
    printf("%i x 3 = %i\n", num, tres);
    printf("%i x 4 = %i\n", num, quatro);
    printf("%i x 5 = %i\n", num, cinco);
    printf("%i x 6 = %i\n", num, seis);
    printf("%i x 7 = %i\n", num, sete);
    printf("%i x 8 = %i\n", num, oito);
    printf("%i x 9 = %i\n", num, nove);
    printf("%i x 10 = %i\n", num, dez);
    
}
int verificar_num(int num){
    return num%2;
}

int main()
{
    int num,num_dig,cont_par,bole;
    float resultado;
    num_dig=0;
    cont_par=0;
    printf("Escreva um número(ou um número negativo para sair)");
    scanf("%i", &num);
    
    while(num > 0){
        mostra_tabuada(num);
        bole =verificar_num(num);
        
        if(bole == 0){
            cont_par++;
        }
        
        num_dig++;
        printf("Escreva um número(ou um número negativo para sair)");
        scanf("%i", &num);
    }
    
    resultado=((float)cont_par/num_dig)*100;
    
    printf("Qtn de números digitados %i\n",num_dig);
    printf("percentual de números pares digitados %.1f%%",resultado);
    return 0;
}
