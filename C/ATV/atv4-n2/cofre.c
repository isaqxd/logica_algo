#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define L (20)

void armazena_login(char* nome);
void armazena_senha(char* passw);

int main (){
    char user[7] = "isaque";
    char senha[5] = "1234";
    char l[L], pass [L];

    printf("----SEJA BEM VINDO----\n");
    printf("\n");

    armazena_login(l);
    armazena_senha(pass);
        
    if (strcmp(user, l) == 0 && strcmp(senha, pass) == 0) {
        printf("Login e senha verificados com sucesso.\n");
    } else {
        printf("Login ou senha incorretos.\n");
    }

    return 0;
}

void armazena_login(char* nome) {
    printf("Insira seu nome de usuario: ");
    fgets(nome, L, stdin);
    nome[strcspn(nome, "\n")] = 0;
    return nome;
}

void armazena_senha (char* passw){
    printf("Insira a sua senha de usuario: ");
    fgets(passw, L, stdin);
    passw[strcspn(passw, "\n")] = 0;
    return passw;
}