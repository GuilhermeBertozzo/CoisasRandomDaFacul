#include <stdio.h> //Inclui a biblioteca principal

int main(){//a funcao principal do C, todo o código principal estará no main()

    /* Tipos de vairaveis
    int = numeros inteiros
    char = caracter
    float = numeros reais com precisao simples
    double = numeros reais com precisão dupla
    void = sem valor/vazio
    */

    int numero1, numero2; // Declarando variaveis do tipo int, ou seja, armazena apenas numeros inteiros (sem casa decimal, nao fracionarios)
    float float1; // Declarando variaveis do tipo float, ou seja, armazena quaisquer numeros reais
    char caractere; // Declarando variaveis do tipo char, ou seja, armazena um unico caracter
    char nome[99]; // Declarando variaveis do tipo char em vetor, tornando-se uma string. Armazena uma sequencia de caracteres

      /* especificadores de variaveis (scanf e printf)
    %d = inteiro decimal
    %c = caractere
    %f = float 
    %s = string
    %lf = double
    %.xf = define o float para x casas decimais
     */
    
    printf("Hello world\n");// funcao printf - imprime algo na tela

    numero1 = 10;// define um valor para uma variavel
    float1 = 2.123;// usar virgula para separar as casas decimais
    caractere = 'n';// usar aspas unicas para definir um caractere

    printf("%d\n", numero1);// usa-se os especificadores para "chamar" uma variavel, no caso de uma variavel int, usa-se o %d

    numero2 = 7;

    printf("%d depois %d\n", numero1, numero2);// note que os numeros aparecerao na ordem em que forem colocados depois do fim das aspas

    printf("um numero fracionario: %f\n", float1);// %f para chamar uma variavel do tipo float, serao imprimidas todas as casas decimais
    printf("quero apenas a primeira casa decimal: %.1f\n", float1);// %.xf onde x limita o numero de casas decimais de um float, nesse caso 1

    printf("a terra e plana? %c\n", caractere);// %c chama uma variavel do tipo char

    /* regra para Scanf
    sempre sera nescessario o uso do '&' para acessar a memoria de uma variavel, menos para strings (vetores de char)
    */
    printf("digite um valor inteiro\n");
    scanf("%d", &numero2);// le um valor inteiro para a variavel numero2, o valor e informado pelo usuario
    printf("digite um valor real\n");
    scanf("%f", &float1);// le um valor real para a variavel numero2, o valor e informado pelo usuario
    printf("digite um caractere\n");
    scanf("%c", &caractere);// le um caractere informado pelo usuario

    printf("digite o seu nome\n");
    scanf("%s", nome);// note que nao precisa usar o & para ler uma string

    printf("ola %s, tudo bem?", nome);

    return 0; // usado para terminar seu algoritmo
}