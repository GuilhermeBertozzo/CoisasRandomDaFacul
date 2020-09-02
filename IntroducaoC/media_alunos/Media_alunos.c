#include <stdio.h>

int main(){

    float v1, v2, v3, mf, exame;
    int x;

    printf("Insira as notas das 3 avaliacoes\n");
    scanf("%f", &v1);
    scanf("%f", &v2);
    scanf("%f", &v3);

    mf = (v1 + v2 + v3)/3;

    if(mf >= 0 && mf <= 2.9){
        x = 1;
     } else{ if(mf >= 3 && mf <= 6.9){
                x = 2;
            } else{ if(mf >= 7 && mf <= 10){
                    x = 3;
                     } else{
                         x = 4;
                     }
                     
                }
            }
    switch(x){
    case 1:
        printf("O aluno reprovou com %.2f de media\n", mf);
        break;
    case 2:
        exame = 12 - mf;
        printf("O aluno ficou de exame e precisa de uma nota %.2f no exame\n", exame);
        break;
    case 3:
        printf("O aluno foi aprovado com %.2f de media final", mf);
        break;
    default:
        printf("Erro, tente novamente");
        break;
    }
    return 0;
}