#include <stdio.h>

int main(){
    int num1=1, num2=2;

    printf("Insira 2 valores, o programa so ira parar com dois valores '0'\n");

    while((num1!=0) || (num2!=0)){
        scanf("%d", &num1);
        scanf("%d", &num2);
    }
    return 0;
}