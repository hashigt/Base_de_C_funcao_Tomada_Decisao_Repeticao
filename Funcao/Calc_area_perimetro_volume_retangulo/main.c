#include <stdio.h>

float calcula_area_retangulo(float base,float altura){
    return base*altura;
}

float calcula_perimetro_retangulo(float base,float altura){
    return base*2 + altura*2;
}
float calcula_volume_retangulo(float lado_a,float lado_b,float altura){
    return lado_a*lado_b*altura;
}
int main()
{
    float lado_a=2.0;//pode ser pedido por um printf
    float lado_b=2.0;//pode ser pedido por um printf
    float altura=4.0;//pode ser pedido por um printf
    calcula_volume_retangulo(lado_a,lado_b,altura);

    return 0;
}