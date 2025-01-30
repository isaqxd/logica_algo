#include <stdio.h>

int main(){
    int num1, num2, resultado;

    printf("\n Escolha a sua operacao");
    printf("\n Digite o simbolo desejado [+] [-] [*] [/]: ");

    char op;
    scanf("%c", &op);

    printf("\n Digite o numero desejado: ");
    fflush(stdin);
    scanf(" %d", &num1);

    printf("\n Digite o numero desejado: ");
    fflush(stdin);
    scanf(" %d", &num2);
    
    switch (op)
    {
    case '+':
        resultado=num1+num2;
        printf("%d + %d tem como resultado: %d", num1, num2, resultado);
        break;
    case '-':
        resultado=num1-num2;
        printf("%d - %d tem como resultado:  %d", num1, num2, resultado);
        break;
    case '*':
        resultado=num1*num2;
        printf("%d * %d tem como resultado: %d", num1, num2, resultado);
        break;
    case '/':
        resultado=num1/num2;
        printf("%d / %d tem como resultado: %d", num1, num2, resultado);
        break;
    default:
        break;
    }

}