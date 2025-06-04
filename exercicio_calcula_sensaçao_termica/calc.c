float cal_sensacao_termica(float celcius, float vento){
    return 33 + (10 * sqrt(vento) + 10.45 - vento) * (celcius - 33) / 22;
}

int main()
{
    int cont;
    float vento,celcius;
    cont=1;
    while(cont <= 24){
        printf("qual e a temperatura em graus de %i horas?", cont);
        scanf("%f", &celcius);
        printf("qual e a velocidade do vento as %i horas?", cont);
        scanf("%f", &vento);
        
        printf("A sensação termica de %i horas e de %.1f\n", cont,cal_sensacao_termica(celcius,vento));
        cont++;
    }
    

    return 0;
}