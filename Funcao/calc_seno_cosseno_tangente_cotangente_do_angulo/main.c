float grau_para_radiano(float angulo){
    return angulo * M_PI / 180.0;
}

float seno(float angulo){
    float radiano = grau_para_radiano(angulo);
    return sin(radiano);
}

float cosseno(float angulo){
    float radiano = grau_para_radiano(angulo);
    return cos(radiano);
}

float tangente(float angulo){
    return seno(angulo) / cosseno(angulo);
}

float cotangente(float angulo){
    return 1 / tangente(angulo);
}

int main()
{
    float angulo1,angulo2,angulo3;
    printf("Escreva o 1º angulo em graus:");
    scanf("%f", &angulo1);
    printf("Escreva o 2º angulo em graus:");
    scanf("%f", &angulo2);
    
    printf("====AS RESPOSTAS DO ANGULO %.2f====\n",angulo1);
    printf("O seno do angulo: %.4f\nO cosseno do angulo: %.4f\nA tangente do angulo: %.4f\nA cotangente do angulo: %.4f",seno(angulo1),cosseno(angulo1),tangente(angulo1),cotangente(angulo1));

    printf("\n====AS RESPOSTAS DO ANGULO %.2f====\n",angulo2);
    printf("O seno do angulo: %.4f\nO cosseno do angulo: %.4f\nA tangente do angulo: %.4f\nA cotangente do angulo: %.4f",seno(angulo2),cosseno(angulo2),tangente(angulo2),cotangente(angulo2));
    
    angulo3=angulo1+angulo2;
    printf("\n====AS SOMA DOS ANGULOS %.2f====\n",angulo3);
    printf("O seno do angulo: %.4f\nO cosseno do angulo: %.4f",seno(angulo3),cosseno(angulo3));
    return 0;
}