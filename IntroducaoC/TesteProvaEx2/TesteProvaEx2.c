#include <stdio.h>
int main(){
    float idade=999, media, soma=0, contador=0;
    printf("Informe a idade das pessoas para fazer a media, 0 para parar\n");
    while(idade != 0){
        scanf("%f", &idade);
        if(idade == 0){
            break;
        }else{
            soma=soma+idade;
            contador++;
        }
    }
    media = soma/contador;
    printf("Media das idades das pessoas: %.2f", media);
    return 0;
}