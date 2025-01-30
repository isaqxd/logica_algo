#include <stdio.h>
#include <string.h>

#define L (20)
#define S (20)

int main (){

    char user_1[] = "isaque", user_2 [] = "gilmar", user_3 [] = "enzo", user_4 [] = "guilherme", user_5 [] = "carlos";

    char senha_1[] = "123", senha_2[] = "456", senha_3[] = "789", senha_4[] = "147", senha_5[] = "258",;

    char login [L], pass [L]; // variaveis usadas para login e senha
    
    printf("Insira o seu nome de usuario: ");
    scanf("%[^\n]", login);

    printf("Insira a sua senha: ");
    scanf("%[^\n]", pass [L]);
    
    int confirmacao = strncmp(pass, senha_1, senha_2);    
}