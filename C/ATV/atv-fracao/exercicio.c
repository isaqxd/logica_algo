#include <stdio.h>
#include <math.h>


int main() {
    double num;
    int numera;   
    int denomina = 1;

    printf("(DIGITE O NUMERO QUE DESEJA VER FRACIONADO (INTEIRO E DECIMAL): ");
    scanf("%lf", &num);

    while (num != floor(num)) { //ENQUANTO DOUBLE CONVERTIDO A INTEIRO FOR DIFERENTE DE DOUBLE EXECUTA A CONTA
        num = num * 10;          
        denomina = denomina * 10;
    }

    numera = (int)num; // TRANSFORMA MEU DOUBLE EM INTEIRO
    printf("A FRACAO EQUIVALENTE E %d/%d\n", numera, denomina);

    return 0;
}
