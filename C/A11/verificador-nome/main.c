#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N (9)
int main (){
    char nome[N];
    int pos = 0;
    bool valido = false;

    printf("Insira o seu Nome: ");
    scanf("%9s", nome);


    if ((nome[0] >= 'A') && (nome[0] <= 'Z')){
        valido = true;
        for (pos = 1; (pos < N); pos++){
            if (nome[pos] == '\0'){
            break;
            }
        }
    }

    if ((nome[pos] < 'a') || (nome[pos] > 'z')){
        valido = false;
        break;
    }
return 0;  
}