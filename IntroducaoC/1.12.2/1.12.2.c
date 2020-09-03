#include <stdio.h>
int main(){
    int mulheres = 0, homens = 0;
    float altura, maior = 0, menor = 999, somaAltura = 0, media; 
    char sexo;

    for (int i = 0; i < 50; i++){
        printf("informe a altura em centimetros:\n");
        scanf("%f", &altura);
        printf("informe o sexo da pessoa m/f:\n");
        scanf(" %c", &sexo);

        switch (sexo){
        case 'm':
            homens++;
            break;
        case 'f':
            mulheres++;
            somaAltura = somaAltura + altura;
        break;
        default:
            printf("Sexo invalido\n");
            break;
        }
        if(altura > maior){
        maior = altura;
        }
        if(altura < menor){
            menor = altura;
        }
    }
    media = somaAltura/mulheres;
    printf("A maior e a menor altura sao, respectivamente %.1fcm e %.1fcm\n", maior, menor);
    printf("A media da altura das mulheres: %.1fcm\n", media);
    printf("O total de homens entre os 50: %d", homens);
    return 0;
}