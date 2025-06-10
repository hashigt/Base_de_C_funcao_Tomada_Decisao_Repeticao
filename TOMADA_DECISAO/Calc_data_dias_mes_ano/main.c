/******************************************************************************

Faça uma função calcData, que receba uma data ( 3 inteiros, dia mês e ano) e uma
quantidade x de dias e mostre na tela a data daqui a x dias (cuidado com as 
mudanças de mês e ano...)

*******************************************************************************/
void calc_data(int dia, int mes, int ano){
    int dias,meses,mes2;
    if(dia > 30 ){
        dias= dia/30;
        dia= dia%30;
        meses= dias + mes;
        if(meses > 12){
        mes2= meses/12;
        meses= meses%12;
        ano=mes2+ano;
        }
     printf("DATA: %i/%i/%i\n",dia,meses,ano);
    }
    else if(mes > 12){
        mes2= mes/12;
        meses= mes%12;
        ano=mes2+ano;
         printf("DATA: %i/%i/%i\n",dia,meses,ano);
    }
    else{
         printf("ERRO");
    }
}

int main()
{
    int dia,mes,ano,tempo,resultado,temp_dia;
    printf("DIA?");
    scanf("%i", &dia);
    printf("MÉS?");
    scanf("%i", &mes);
    printf("ANO?");
    scanf("%i", &ano);
    printf("Quantos tempo irá passar?");
    scanf("%i", &tempo);
    
temp_dia=tempo+dia;
    
calc_data(dia,mes,ano);

calc_data(temp_dia,mes,ano);




    return 0;
}
