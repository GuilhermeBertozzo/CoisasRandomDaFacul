#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    /* Tipos de vairaveis
    int = numeros inteiros
    char = caracter
    floar = numeros reais com precisao simples
    double = numeros reais com precisão dupla
    void = sem valor/vazio
    */
    /* especificadores de variaveis
    %d = inteiro decimal
    %c = caractere
    %f = float 
    %s = string
    %lf = double
    %.xf = define o float para x casas decimais
     */
int main(){
    float A, B, C, delta, x1, x2;
    printf("Bem vindo a calculadora de expressoes de segundo grau!\n");
    printf("Digite o valor de A da expressao: ");
    scanf("%f", &A);
    printf("Digite o valor de B da expressao: ");
    scanf("%f", &B);
    printf("Digite o valor de C da expressao: ");  
    scanf("%f", &C);

    delta = (B*B)-4*A*C;
    x1 = (-B + sqrt(delta))/(2*A);
    x2 = (-B - sqrt(delta))/(2*A);
    
    if(delta < 0){
        printf("A equacao nao possui raizes reais \n");
    } else  {
    printf("o valor de x1: %.2f\n", x1);
    printf("o valor de x2: %.2f", x2);

    return 0;
    }
}