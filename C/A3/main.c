#include <stdio.h>

main(){
    float impar;
    float par;

    printf("OPERACAO DE DIVISAO\n");
    printf("qual e o primeiro numero da divisao?\n");
    scanf("%f", &impar);
    printf("qual e o segundo numero?\n");
    scanf("%f", &par);
    float divisao = (impar / par);
    printf ("o resultado da divissao e %.2f", divisao);
    }