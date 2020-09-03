#include <stdio.h>
int main(){
    float celso, fernaldo;
    for ( int i = 50; i <= 150; i++){
        fernaldo = i;
        celso = (fernaldo - 32)*5/9;
        printf("%.2f Farenheit = %.2f graus centigrados\n", fernaldo, celso);
    }
    return 0;
}