#include <stdio.h>
// Faça um programa que leia idade, altura e o peso de 15 pessoas. Calcule e mostre:
// a quantidade de pessoas com idades superior a 50 anos
// a média das alturas das pessoas com idade entre 10 e 20 anos
// a porcentagem de pessoas com peso inferior a 40 quilos
int main(){
    int idade, altura, peso, cinquentoes = 0, somaaltura = 0, alturamedia, i = 0;
    float desnutridos = 0, porcentomagro;
    while (i < 15){
       printf("Insira a idade da pessoa\n");
       scanf("%d", &idade);
       printf("Insira a altura em cm da pessoa\n");
       scanf("%d", &altura);
       printf("Insira o peso em Kg da pessoa\n");
       scanf("%d", &peso);
       somaaltura = somaaltura + altura;
        if (idade > 50){
        cinquentoes++;
        }
        if (peso > 40){
        desnutridos++;
        } 
        i++;
    }
    printf("%d pessoas possuem mais de 60 anos\n", cinquentoes);
    alturamedia = somaaltura/15;
    printf("A media da altura das 15 pessoas: %d cm\n", alturamedia);
    porcentomagro = (desnutridos * 100)/15;
    printf("A porcentagem de pessoas com menos de 40Kg entre os 15: %.2f\n", porcentomagro);
    return 0;
}