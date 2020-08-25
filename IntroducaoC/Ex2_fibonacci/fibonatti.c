#include <stdio.h>
int main(){
    int n, fib=1, fibanterior=1, soma;
    scanf("%d", &n);
    while (fib<n){
        printf("%d ", fib);
        soma = fib + fibanterior;
        fibanterior = fib;
        fib = soma;   
    }
    return 0;
}