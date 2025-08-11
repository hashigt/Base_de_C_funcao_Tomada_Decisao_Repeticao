/*
(Sem acentuação, o meu VScode não exibe qualquer acento)
Considere que o nível mínimo ideal de estoque para este produto é de 10 unidades.
Considere que o nível máximo ideal de estoque para este produto é de 50 unidades.

Situação 1: Estoque Muito Baixo
Se a quantidade atual em estoque for menor que o nível mínimo ideal (10 unidades), o programa deve exibir a mensagem: "ATENÇÃO! Estoque muito baixo. É necessário fazer um pedido GRANDE de reabastecimento imediatamente!"

Situação 2: Estoque Adequado, mas Abaixo da Previsão de Vendas
Se a quantidade atual em estoque estiver entre o nível mínimo ideal (10 unidades) e o máximo ideal (50 unidades), E a previsão de vendas for maior que a quantidade em estoque, o programa deve exibir: "Estoque em nível razoável, mas a previsão de vendas é alta. Considere fazer um pedido MÉDIO de reabastecimento."

Situação 3: Estoque Adequado e Suficiente para as Vendas
Se a quantidade atual em estoque estiver entre o nível mínimo ideal (10 unidades) e o máximo ideal (50 unidades), E a previsão de vendas for menor ou igual à quantidade em estoque, o programa deve exibir: "Estoque em nível adequado. Não é necessário reabastecimento no momento."

Situação 4: Estoque Muito Alto
Se a quantidade atual em estoque for maior que o nível máximo ideal (50 unidades), o programa deve exibir: "Estoque muito alto! Considere uma promoção para girar o estoque."

Descrição Resumida do Código C: Gerenciamento de Estoque com Tomada de Decisão
Este programa em C simula um sistema de gerenciamento de estoque para um produto (como um "Smartphone Xpto"), usando tomada de decisão para recomendar ações com base nos níveis de estoque e previsão de vendas.

Como funciona:
A função sitacaoEstoque avalia a quantidade atual em estoque e a previsão de vendas.
Ela emite diferentes recomendações:
Pedido grande: Se o estoque for inferior a 10 unidades.
Promoção: Se o estoque for superior a 50 unidades.
Pedido médio: Se o estoque estiver entre 10 e 50, mas a previsão de vendas for maior que o estoque.
Sem reabastecimento: Se o estoque estiver entre 10 e 50 e for suficiente para a previsão de vendas.
No main, o programa solicita a quantidade em estoque e a previsão de vendas, chama a função para obter a recomendação e, em seguida, exibe os dados informados para confirmação.
*/

void sitacaoEstoque(int estoque, int vendaProx){
    // Esta função analisa o estoque e a previsão de vendas para dar uma recomendação.
    // Ela recebe a quantidade atual no 'estoque' e a 'vendaProx' (previsão de vendas).
    
    if(estoque < 10){
        // Caso 1: Estoque muito baixo.
        // Se o estoque for menor que 10, o programa avisa que é crítico.
        printf("ATENCAO! Estoque muito baixo. E necessario fazer um pedido GRANDE de reabastecimento imediatamente!");
    }
    else if(estoque > 50){
        // Caso 4: Estoque muito alto.
        // Se o estoque for maior que 50, a recomendação é fazer uma promoção.
        printf("Estoque muito alto! Considere uma promocao para girar o estoque.");
    }
    else if(estoque > 10 && estoque < 50){
        // Casos 2 e 3: Estoque em um nível razoável (entre 11 e 49).
        // A lógica entra neste bloco para avaliar a previsão de vendas.
        
        if(vendaProx > estoque){
            // Caso 2: Estoque adequado, mas abaixo da previsão de vendas.
            // Se o estoque atual for menor que a previsão de vendas, a sugestão é reabastecer.
            printf("Estoque em nivel razoavel, mas a previsao de vendas e alta. Considere fazer um pedido MEDIO de reabastecimento.");
        }
        else{
            // Caso 3: Estoque adequado e suficiente para as vendas.
            // Se o estoque for maior ou igual à previsão de vendas, não é preciso reabastecer.
            printf("Estoque em nivel adequado. Nao e necessario reabastecimento no momento.");
        }
    }

}

int main()
{
    // Declara variáveis para armazenar a quantidade em estoque e a previsão de vendas.
    int estoque, vendaProx;

    // Pergunta ao usuário a quantidade atual do produto em estoque.
    printf("Qual e a quantidade atual em estoque de Smartphone Xpto?");
    scanf("%i", &estoque);

    // Pergunta ao usuário a previsão de vendas para a próxima semana.
    printf("Qual e a previsao de vendas para a proxima semana?");
    scanf("%i", &vendaProx);

    // Chama a função 'sitacaoEstoque', passando os valores lidos.
    // A função irá analisar os dados e imprimir a recomendação diretamente.
    sitacaoEstoque(estoque, vendaProx);
    
    // Imprime os dados que foram lidos do usuário para confirmação.
    printf("\nQuantidade atual no estoque: %i", estoque);
    printf("\nPrevisao de vendas para proxima semana: %i", vendaProx);
    
    return 0;
}
