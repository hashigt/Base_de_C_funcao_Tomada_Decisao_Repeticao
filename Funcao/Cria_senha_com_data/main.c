int cria_numero(int xx, int yy){
  int numero;
  numero=xx*100+yy;
  return numero;
}

int cria_senha(int dia, int mes, int ano){
    int senha,x1,x2;
    x1=cria_numero(mes,dia);
    x2=cria_numero(dia,mes);
    senha=x1+x2+ano;
    return senha;
}
int main() {
    int dia1,mes1,ano1,dia,mes,ano,senha,senha1;
    printf("Qual sua data de nascimento?(dia/mes/ano)");
    scanf("%d/%d/%d", &dia1, &mes1 ,&ano1);
    printf("Qual data de nascimento de sua mãe?(dia/mes/ano)");
    scanf("%d/%d/%d" ,&dia ,&mes ,&ano);
    
    senha=cria_senha(dia1,mes1,ano1);
    senha1=cria_senha(dia,mes,ano);
    
    printf("A sua senha é: %d\nA senha da sua mãe: %d",senha,senha1 );
    
    

    return 0;
}