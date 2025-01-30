#include <stdio.h>
int main(){

    int val1 = 100;
    int val2 = 200;
    int resultado = 0;
    int chute;
     
   while (resultado == 0 ) {
        printf("Chute um numero: ");  
        scanf("%d", &chute);
        resultado = funcao(val1, val2, chute);
        if (resultado == 1) {
            printf("Acertou a miseravi!\n");
        } else {
            printf("Errow, tente novamente.\n");
        }
    }
    
    return 0;
}

int funcao(int val1, int val2, int chute) {
    return((chute >= val1) && (chute <= val2));
}