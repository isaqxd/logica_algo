#include <stdio.h>
#include <stdlib.h>


#define MAX_L (124)

int main (){

    char nome[MAX_L];
    int count;

    printf("Insira seu nome: ");
    scanf("%[^\n]", &nome);

    for(count = 0; count < MAX_L; count++){
        if (nome[count] == '\0'){
            break;
        }
    }

    printf("\n Existem %d numeros presente.", count);
}
