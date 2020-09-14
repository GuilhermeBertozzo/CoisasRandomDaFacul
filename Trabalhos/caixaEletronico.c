#include <stdio.h>
int main(){
    int quantidade100, quantidade50, quantidade20, quantidade10, saque, total, contador100 = 0, contador50 = 0, contador20 = 0, contador10 = 0;
    printf("Quantidade de notas de 100 reais no caixa: \n");  
    scanf("%d", &quantidade100); 
    printf("Quantidade de notas de 50 reais no caixa: \n");   
    scanf("%d", &quantidade50); 
    printf("Quantidade de notas de 20 reais no caixa: \n");   
    scanf("%d", &quantidade20); 
    printf("Quantidade de notas de 10 reais no caixa: \n");   
    scanf("%d", &quantidade10);  
    printf("Total a ser sacado: \n");   
    scanf("%d", &saque);  

    total = saque;

    while(saque >= 100 && quantidade100 > 0){
        saque = saque - 100;
        quantidade100--;
        contador100++;
    }
    while(saque >= 50 && quantidade50 > 0){
        saque = saque - 50;
        quantidade50--;
        contador50++;
    }
    while(saque >= 20 && quantidade20 > 0){
        saque = saque - 20;
        quantidade20--;
        contador20++;
    }
    while(saque >= 10 && quantidade10 > 0){
        saque = saque - 10;
        quantidade10--;
        contador10++;
    }

    if(saque != 0){
        
        saque = total;
        quantidade100 = quantidade100 + contador100;
        quantidade50 = quantidade50 + contador50;
        quantidade20 = quantidade20 + contador20;
        quantidade10 = quantidade10 + contador10;

        contador100 = 0;
        contador50 = 0;
        contador20 = 0;
        contador10 = 0;

        while(saque >= 100 && quantidade100 > 0){
        saque = saque - 100;
        quantidade100--;
        contador100++;
        }
        while(saque >= 20 && quantidade20 > 0){
        saque = saque - 20;
        quantidade20--;
        contador20++;
        }
        while(saque >= 10 && quantidade10 > 0){
        saque = saque - 10;
        quantidade10--;
        contador10++;
        }        
    }

    // printf("%d %d %d %d", contador100, contador50, contador20, contador10);
    // debugger dos contadores

    if(saque != 0 && quantidade100 == 0 && quantidade50 == 0 && quantidade20 == 0 && quantidade10 == 0){
    printf("O caixa nao possui notas o suficiente para o saque: \n");
    }
    if(saque != 0){
        printf("Nao foi possivel realizar o saque do valor informado");
    }
    if(saque == 0){
        printf("Foram retiradas %d nota(s) de 100 reais, %d nota(s) de 50 reais, %d nota(s) de 20 reais e %d nota(s) de 10 reais, totalizando %d reais", contador100, contador50, contador20, contador10, total);
    }
    // system("pause");
    // pausa para .exe
    return 0;
}