#include <stdio.h>
#include <string.h>

int main (){
    char certo [] = "\nSeu saldo e BRL 0,001!";
    char errado [] = "\nSeu nome de usuario esta incorreto!";
    char login [10] = "isaque";
    char input [10];
    char tamanho[100];

    printf("insira seu nome de usuario: ");
    scanf("%s", &input);

    if (strcmp(login, input) == 0){
        strcpy(tamanho, certo);
        printf("%s", tamanho);
    }else{
        strcpy(tamanho, errado);
        printf("%s", tamanho);
    }

}