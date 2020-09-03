#include <stdio.h>
int main (){
int horas, horasExtras, dependentes;
float salarioMin, valHora, valExtra, salLiq, salBrt;

    printf("Informe o valor do salario minimo: \n");
    scanf("%f", &salarioMin);
        valHora = salarioMin/5;
        valExtra = valHora*1.5;
    printf("Informe o numero de horas trabalhadas: \n");
        scanf("%d", &horas);
    printf("Informe o numero de dependentes do funcionario: \n");
        scanf("%d", &dependentes);
    printf("Informe o numero de horas extras trabalhadas: \n");
        scanf("%d", &horasExtras);


    salBrt = (horas*valHora)+(dependentes*32)+(horasExtras*valExtra);


    if(salBrt < 200){
        salLiq = salBrt;
            }else{ if(salBrt >= 200 && salBrt <= 500){
                salLiq = salBrt*0.9;
                    }else {if (salBrt > 500){
                        salLiq = salBrt*0.8;
                    }
                }    
            }

    if(salLiq < 350){
        salLiq = salLiq+100;
    }
    if(salLiq >= 350){
        salLiq = salLiq+50;
    }
    printf("Salario bruto do funcionario: R$%.2f\n", salBrt);
    printf("Salario liquido do funcionario: R$%.2f\n", salLiq);  

    return 0;
}