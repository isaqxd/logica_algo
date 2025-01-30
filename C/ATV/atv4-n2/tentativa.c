#include <stdio.h>

#define K (20)

int main (){
    int op;

    char usuario_1 [K] = "isaque"; char usuario_2 [K] = "lorenzo"; char usuario_3 [K] = "over"; char usuario_4 [K] = "lobo"; char usuario_5 [K] = "allax";
    char senha_1 [K] = "123"; char senha_2 [K] = "456"; char senha_3 [K] = "789"; char senha_4 [K] = "000"; char senha_5 [K] = "157";
    
    char troca_user [K];
    char troca_senha [K];


    printf("------ BEM VINDO -------\nSUAS CONFIGURACOES ESTAO ABAIXO:\n");
    printf("1 - USUARIO: %s | SENHA: %s\n", usuario_1, senha_1);
    printf("2 - USUARIO: %s | SENHA: %s\n", usuario_2, senha_2);
    printf("3 - USUARIO: %s | SENHA: %s\n", usuario_3, senha_3);
    printf("4 - USUARIO: %s | SENHA: %s\n", usuario_4, senha_4);
    printf("5 - USUARIO: %s | SENHA: %s\n", usuario_5, senha_5);
    printf("------------------------\n");
    printf("Qual usuario ou senha que deseja alterar?? (DIGITE O NUMERO COMPATIVEL.)");
    fflush(stdin);
    scanf(" %d", &op);

    switch (op)
    {
    case '1':
        for (int i = 0; i <= K; i++){
            
            usuario_1[i] = troca_user[i];
        }
        break;

    default:
        break;
    }

    }



