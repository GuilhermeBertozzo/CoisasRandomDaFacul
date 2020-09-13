#include <stdio.h>
#include <string.h>
int main(){

    double valorTotal;
    int contadorMilhar = 0, contadorCentena = 0, contadorDezena = 0, contadorUnidade = 0, contadorDecimo = 0, contadorCentezimo = 0;
    char milhar[99], dezena[99], centena[99], unidade[99], decimo[99], centezimo[99];

    printf("Informe o valor numerico em reais ate R$9999.99: \n");
    scanf("%lf", &valorTotal);
    if(valorTotal > 9999.99){
        printf("Valor maximo ultrapassado");
        return 0;
    }
    while(valorTotal >= 1000.00){
        valorTotal = valorTotal - 1000.00;
        contadorMilhar++;
    }
    while (valorTotal >= 100.00){
        valorTotal = valorTotal - 100.00;
        contadorCentena++;
    }
    while (valorTotal >= 10.00){
        valorTotal = valorTotal - 10.00;
        contadorDezena++;
    }
     while (valorTotal >= 1.00){
        valorTotal = valorTotal - 1.00;
        contadorUnidade++;
    }
     while (valorTotal >= 0.10){
        valorTotal = valorTotal - 0.10;
        contadorDecimo++;
    }
    while (valorTotal >= 0.009){
        valorTotal = valorTotal - 0.01;
        contadorCentezimo++;   
    }

    if(contadorCentezimo == 10){
        contadorDecimo++;
        contadorCentezimo = 0;
    }
    // printf("%d %d %d %d %d %d\n", contadorMilhar, contadorCentena, contadorDezena, contadorUnidade, contadorDecimo, contadorCentezimo);
    // debuggador dos contadores
    switch(contadorMilhar){
    case 9:
        strcpy(milhar, "nove mil");
        break;
    case 8:
        strcpy(milhar, "oito mil");
        break;
    case 7:
        strcpy(milhar, "sete mil");
        break;
    case 6:
        strcpy(milhar, "seis mil");
        break;
    case 5:
        strcpy(milhar, "cinco mil");
        break;
    case 4:
        strcpy(milhar, "quatro mil");
        break;
    case 3:
        strcpy(milhar, "tres mil");
        break;
    case 2:
        strcpy(milhar, "dois mil");
        break; 
    case 1:
        strcpy(milhar, "mil");
        break;    
    default:
        break;
    }

        switch(contadorCentena){
    case 9:
        strcpy(centena, "novecentos");
        break;
    case 8:
        strcpy(centena, "oitocentos");
        break;
    case 7:
        strcpy(centena, "setecentos");
        break;
    case 6:
        strcpy(centena, "seiscentos");
        break;
    case 5:
        strcpy(centena, "quinhentos");
        break;
    case 4:
        strcpy(centena, "quatrocentos");
        break;
    case 3:
        strcpy(centena, "trezecentos");
        break;
    case 2:
        strcpy(centena, "duzentos");
        break; 
    case 1:
        if(contadorDezena != 0 || contadorUnidade != 0){
            strcpy(centena, "cento");
            break;
        }else{
            strcpy(centena, "cem");
        break;
        }           
    default:
        break;
    }
    switch(contadorDezena){
    case 9:
        strcpy(dezena, "noventa");
        break;
    case 8:
        strcpy(dezena, "oitenta");
        break;
    case 7:
        strcpy(dezena, "setenta");
        break;
    case 6:
        strcpy(dezena, "sessenta");
        break;
    case 5:
        strcpy(dezena, "cinquenta");
        break;
    case 4:
        strcpy(dezena, "quarenta");
        break;
    case 3:
        strcpy(dezena, "trinta");
        break;
    case 2:
        strcpy(dezena, "vinte");
        break; 
    case 1:

        switch(contadorUnidade){
        case 9:
            strcpy(dezena, "dezenove");
            contadorUnidade = 0;
            break;
        case 8:
            strcpy(dezena, "dezoito");
            contadorUnidade = 0;
            break;
        case 7:
            strcpy(dezena, "dezessete");
            contadorUnidade = 0;
            break;
        case 6:
            strcpy(dezena, "dezesseis");
            contadorUnidade = 0;
            break;
        case 5:
            strcpy(dezena, "quinze");
            contadorUnidade = 0;
            break;
        case 4:
            strcpy(dezena, "catorze");
            contadorUnidade = 0;
            break;
        case 3:
            strcpy(dezena, "treze");
            contadorUnidade = 0;
            break;
        case 2:
            strcpy(dezena, "doze");
            contadorUnidade = 0;
            break; 
        case 1:
            strcpy(dezena, "onze");
            contadorUnidade = 0;
            break;    
        default:
            strcpy(dezena, "dez");
            contadorUnidade = 0;
            break;
        }    
    default:
        break;
    }
    if(contadorDezena != 1){
       switch(contadorUnidade){
    case 9:
        strcpy(unidade, "nove");
        break;
    case 8:
        strcpy(unidade, "oito");
        break;
    case 7:
        strcpy(unidade, "sete");
        break;
    case 6:
        strcpy(unidade, "seis");
        break;
    case 5:
        strcpy(unidade, "cinco");
        break;
    case 4:
        strcpy(unidade, "quatro");
        break;
    case 3:
        strcpy(unidade, "tres");
        break;
    case 2:
        strcpy(unidade, "dois");
        break; 
    case 1:
        strcpy(unidade, "um");
        break;    
    default:
        break;
    } 
    }
    switch(contadorDecimo){
    case 9:
        strcpy(decimo, "noventa");
        break;
    case 8:
        strcpy(decimo, "oitenta");
        break;
    case 7:
        strcpy(decimo, "setenta");
        break;
    case 6:
        strcpy(decimo, "sessenta");
        break;
    case 5:
        strcpy(decimo, "cinquenta");
        break;
    case 4:
        strcpy(decimo, "quarenta");
        break;
    case 3:
        strcpy(decimo, "trinta");
        break;
    case 2:
        strcpy(decimo, "vinte");
        break; 
    case 1:

        switch(contadorCentezimo){
        case 9:
            strcpy(decimo, "dezenove");
            contadorCentezimo = 0;
            break;
        case 8:
            strcpy(decimo, "dezoito");
            contadorCentezimo = 0;
            break;
        case 7:
            strcpy(decimo, "dezessete");
            contadorCentezimo = 0;
            break;
        case 6:
            strcpy(decimo, "dezesseis");
            contadorCentezimo = 0;
            break;
        case 5:
            strcpy(decimo, "quinze");
            contadorCentezimo = 0;
            break;
        case 4:
            strcpy(decimo, "catorze");
            contadorCentezimo = 0;
            break;
        case 3:
            strcpy(decimo, "treze");
            contadorCentezimo = 0;
            break;
        case 2:
            strcpy(decimo, "doze");
            contadorCentezimo = 0;
            break; 
        case 1:
            strcpy(decimo, "onze");
            contadorCentezimo = 0;
            break;    
        default:
            strcpy(decimo, "dez");
            contadorCentezimo = 0;
            break;
        }    
    default:
        break;
    }
    if(contadorDecimo != 1){
       switch(contadorCentezimo){
    case 9:
        strcpy(centezimo, "nove");
        break;
    case 8:
        strcpy(centezimo, "oito");
        break;
    case 7:
        strcpy(centezimo, "sete");
        break;
    case 6:
        strcpy(centezimo, "seis");
        break;
    case 5:
        strcpy(centezimo, "cinco");
        break;
    case 4:
        strcpy(centezimo, "quatro");
        break;
    case 3:
        strcpy(centezimo, "tres");
        break;
    case 2:
        strcpy(centezimo, "dois");
        break; 
    case 1:
        strcpy(centezimo, "um");
        break;    
    default:
        break;
    } 
    }
    if(contadorMilhar != 0){
    printf("%s ", milhar);
    }
    if(contadorCentena != 0 && contadorMilhar != 0){
    printf("e %s ", centena);
    }
    if(contadorCentena != 0 && contadorMilhar == 0){
    printf("%s ", centena);
    }
    if((contadorDezena !=0 && contadorMilhar != 0) || (contadorDezena != 0 && contadorMilhar != 0)){
    printf("e %s ", dezena);    
    }
    if((contadorDezena !=0 && contadorMilhar == 0) && (contadorDezena != 0 && contadorMilhar == 0)){
    printf("%s ", dezena);    
    }
    if((contadorUnidade !=0 && contadorMilhar != 0) || (contadorUnidade != 0 && contadorCentena != 0) || (contadorUnidade != 0 && contadorDezena != 0)){
    printf("e %s ", unidade);     
    }
    if((contadorUnidade !=0 && contadorMilhar == 0) && (contadorUnidade != 0 && contadorCentena == 0) && (contadorUnidade != 0 && contadorDezena == 0)){
    printf("%s ", unidade);     
    }
    if(contadorMilhar != 0 || contadorCentena != 0 || contadorDezena != 0 || contadorUnidade != 0){
    printf("reais ");
    }
    if((contadorDecimo != 0 && contadorMilhar != 0) || (contadorDecimo != 0 && contadorCentena != 0) || (contadorDecimo != 0 && contadorDezena != 0) || (contadorDecimo != 0 && contadorUnidade != 0)){
    printf("e %s ", decimo);
    } 
    if((contadorDecimo != 0 && contadorMilhar == 0) && (contadorDecimo != 0 && contadorCentena == 0) && (contadorDecimo != 0 && contadorDezena == 0) && (contadorDecimo != 0 && contadorUnidade == 0)){
    printf("%s ", decimo);
    }
    if((contadorCentezimo != 0 && contadorMilhar != 0) || (contadorCentezimo != 0 && contadorCentena != 0) || (contadorCentezimo != 0 && contadorDezena != 0) || (contadorCentezimo != 0 && contadorUnidade != 0) || (contadorCentezimo != 0 && contadorDecimo != 0)){
    printf("e %s ", centezimo);    
    }
    if((contadorCentezimo != 0 && contadorMilhar == 0) && (contadorCentezimo != 0 && contadorCentena == 0) && (contadorCentezimo != 0 && contadorDezena == 0) && (contadorCentezimo != 0 && contadorUnidade == 0) && (contadorCentezimo != 0 && contadorDecimo == 0)){
    printf("%s ", centezimo);
    }
    if(contadorDecimo != 0 || contadorCentezimo != 0){
    printf("centavos\n");
    }    

    // system ("pause");
    // pause para executar como .exe

    return 0;
}
