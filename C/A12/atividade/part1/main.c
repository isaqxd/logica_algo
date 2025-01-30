#include <stdio.h>
#include <string.h>

#define LETRAS (256)

int main (){

    char nome[LETRAS];
    char user[] = "isaque";

    printf("\n Insira seu user name: ");
    scanf("%[^\n]", &nome);

    int resultado = strcmp(nome, user);

    if (resultado == 0){
        printf("Seu usuario e valido!");
    } else {
        printf("Seu nome de usuario nao e valido!");
    }

    return 0;
}