#include <stdio.h>

int cria_numero(int xx, int yy){
    // Esta função cria um número de 4 dígitos combinando dois números de 2 dígitos.
    // Ela recebe 'xx' e 'yy' como entrada.
    // A fórmula é: numero = xx * 100 + yy.
    // Por exemplo, se xx=12 e yy=34, o resultado será 1234.
    int numero;
    numero = xx * 100 + yy;
    return numero;
}

int cria_senha(int dia, int mes, int ano){
    // Esta função cria uma senha com base em uma data (dia, mês, ano).
    // Ela usa a função 'cria_numero' para combinar o mês e o dia de duas maneiras diferentes.
    // 'x1' combina mês e dia (ex: 05 e 12 vira 512).
    // 'x2' combina dia e mês (ex: 12 e 05 vira 1205).
    // A senha final é a soma desses dois números mais o ano.
    int senha, x1, x2;
    x1 = cria_numero(mes, dia);
    x2 = cria_numero(dia, mes);
    senha = x1 + x2 + ano;
    return senha;
}

int main() {
    // Declara variáveis para armazenar a data de nascimento do usuário e da mãe.
    int dia1, mes1, ano1, dia, mes, ano, senha, senha1;
    
    // Solicita ao usuário que insira sua data de nascimento.
    // O formato 'scanf("%d/%d/%d", ...)' garante que a entrada seja lida corretamente
    // com as barras ('/') entre os números.
    printf("Qual sua data de nascimento?(dia/mes/ano)");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);
    
    // Solicita a data de nascimento da mãe do usuário.
    printf("Qual data de nascimento de sua mãe?(dia/mes/ano)");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    // Chama a função 'cria_senha' para gerar a senha do usuário e da mãe.
    // Os resultados são armazenados nas variáveis 'senha' e 'senha1'.
    senha = cria_senha(dia1, mes1, ano1);
    senha1 = cria_senha(dia, mes, ano);
    
    // Imprime as senhas geradas para o usuário e para a mãe, formatando a saída.
    printf("A sua senha é: %d\nA senha da sua mãe: %d", senha, senha1);
    
    return 0;
}