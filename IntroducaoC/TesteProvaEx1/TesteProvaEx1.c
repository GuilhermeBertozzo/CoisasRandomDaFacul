#include <stdio.h>
int main(){
    int L1, L2, L3;
    printf("Digite o valor do lado 1");
    scanf("%d", &L1);
    printf("Digite o valor do lado 2");
    scanf("%d", &L2);
    printf("Digite o valor do lado 3");
    scanf("%d", &L3);
    if(L1==L2 && L2==L3){
        printf("Triangulo Equilatero");
    }else{
    if (L1!=L2 && L2!=L3 && L3!=L1){
        printf("Triangulo Escaleno");
    }else{
        printf("Triangulo Isosceles");
        }
    }
    return 0;
}