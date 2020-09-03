#include <stdio.h>
int main(){
int mulheres = 0, homens = 0;
float media = 0, altura, MaiorAltura = 0, MenorAltura = 999, matematicz;
char sexo;

 for (int i = 0; i < 4; i++){
     printf("Digite sexo (f/m)");
    scanf(" %c", &sexo);
     printf("Digite altura");
    scanf("%f", &altura);

    if (sexo == 'f') {
     media = media+altura;
     mulheres++;
    }

    else {
        if (sexo == 'm'){
           homens++;
        }
    }
 }

matematicz = media/mulheres;
printf("Media de alturas: %f, %d, %f", matematicz, mulheres, media);

return 0;
}