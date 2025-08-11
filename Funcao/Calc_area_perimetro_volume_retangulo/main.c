#include <stdio.h>

float calcula_area_retangulo(float base, float altura){
    // Esta função calcula a área de um retângulo.
    // Ela recebe a 'base' e a 'altura' como entradas e retorna o produto delas.
    // A fórmula usada é: Area = base * altura.
    return base * altura;
}

float calcula_perimetro_retangulo(float base, float altura){
    // Esta função calcula o perímetro de um retângulo.
    // O perímetro é a soma de todos os lados.
    // A fórmula é: Perímetro = 2 * base + 2 * altura.
    return base * 2 + altura * 2;
}

float calcula_volume_retangulo(float lado_a, float lado_b, float altura){
    // Esta função calcula o volume de um paralelepípedo (ou bloco retangular).
    // Ela recebe os três lados (lado_a, lado_b e altura) e retorna o produto deles.
    // A fórmula é: Volume = lado_a * lado_b * altura.
    return lado_a * lado_b * altura;
}

int main()
{
    // Declara e inicializa quatro variáveis do tipo float para os lados do objeto.
    float lado_a = 2.0;
    float lado_b = 2.0;
    float altura = 4.0;
    float base = 3.0;
    
    // Chama a função 'calcula_area_retangulo' com os valores definidos acima.
    printf("A área do retângulo é -> %.2f",calcula_area_retangulo(base,altura));

    // Chama a função 'calcula_perimetro_retangulo' com os valores definidos acima.
    printf("Esse é o perimetro do retângulo -> %.2f",calcula_perimetro_retangulo(base,altura));

    // Chama a função 'calcula_volume_retangulo' com os valores definidos acima.
    printf("O volume do retângulo é %.2f",calcula_volume_retangulo(lado_a, lado_b, altura));

    

    return 0;
}