#include <stdio.h>

float valor();
void apresen_result (float val1, float val2, char operador, float res);

int main(){
    char teclado;
    do {
        float num1, num2, result;
        char op;
        
        printf("\nInsira a operacao que deseja realizar [+] [-] [*] [/]: ");
        fflush(stdin);
        scanf("%c", &op);

        switch (op){
        case '+':
            num1 = valor(); 
            num2 = valor();
            result=num1+num2;
            apresen_result(num1, num2, op, result);
            break;
        case '-':
            num1 = valor(); 
            num2 = valor();
            result=num1-num2;
            apresen_result(num1, num2, op, result);
            break;
        case '*':
            num1 = valor(); 
            num2 = valor();
            result=num1*num2;
            apresen_result(num1, num2, op, result);
            break;
        case '/':
            num1 = valor(); 
            num2 = valor();
            result=num1/num2;
            apresen_result(num1, num2, op, result);
            break;
        default:
            printf("\n Voce insiriu um valor incorreto, tente novamente.\n");
            break;
        }
        printf("Para continuar fazendo operacoes pressione [Y] ou [y]: ");
        fflush(stdin);
        scanf("%c", &teclado);

    } while (teclado == 'Y' || teclado == 'y');
    }

float valor (){
    float num;
    printf("\nInsira um numero: ");
    fflush(stdin);
    scanf("%f", &num);
    return num;
}
void apresen_result (float arg1, float arg2, char op, float res){
    printf("%.2f %c %.2f tem como resultado = %.2f\n", arg1, op, arg2, res);
}