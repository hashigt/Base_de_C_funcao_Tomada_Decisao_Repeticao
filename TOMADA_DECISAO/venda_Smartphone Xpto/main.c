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
*/

void sitacaoEstoque(int estoque,int vendaProx){
    if(estoque < 10){ //1: Estoque Muito Baixo
        printf("ATENCAO! Estoque muito baixo. E necessario fazer um pedido GRANDE de reabastecimento imediatamente!");
    }
    else if(estoque > 50){ //4: Estoque Muito Alto
        printf("Estoque muito alto! Considere uma promocao para girar o estoque.");
    }
    else if(estoque > 10 && estoque < 50){
        if(vendaProx > estoque){ //2: Estoque Adequado, mas Abaixo da Previsão de Vendas
        printf("Estoque em nivel razoavel, mas a previsao de vendas e alta. Considere fazer um pedido MEDIO de reabastecimento.");
        }
        else{ //3: Estoque Adequado e Suficiente para as Vendas
            printf("Estoque em nivel adequado. Nao e necessario reabastecimento no momento.");
        }
    }
    
}
int main()
{
    int estoque,vendaProx; // lembrar de identificar variaveis

    printf("Qual e a quantidade atual em estoque de Smartphone Xpto?");
    scanf("%i", &estoque);

    printf("Qual e a previsao de vendas para a proxima semana?");
    scanf("%i", &vendaProx); //guardando na variavel
    

    sitacaoEstoque(estoque,vendaProx); // chamando a função
    printf("\nQuantidade atual no estoque: %i",estoque);
    printf("\nPrevisao de vendas para proxima semana: %i",vendaProx);
    return 0;
}
