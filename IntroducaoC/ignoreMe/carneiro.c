#include <stdio.h>
int main(){
    char dormiu = 'n';
    int carneiro = 1;
    while(dormiu == 'n')
    {
        printf("%d carneiros\n", carneiro);
        printf("Dormiu?\n");
        scanf(" %c", &dormiu);
        carneiro++;
    }
    return 0;
}