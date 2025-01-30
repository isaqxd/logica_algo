#include <stdio.h>

#define K (20)

int main (){

    int op;
    
    char usuario_1 [K] = "isaque";
    char senha_1 [K] = "1234";
    
    char usuario_2 [K];
    char senha_2 [K];
    
    printf("Qual usuario deseja alterar?\n");
    scanf("%d", &op);
    
    switch (op) {
        case 1:
        printf("Seu usuario eh: %s \nSua senha eh: %s", usuario_1, senha_1);
        printf("\nDigite 1 para alterar o usuario e 2 para alterar a senha\n");
        scanf("%d", &op);
            switch (op){
                case 1:
                    user(usuario_1);
                    printf("Usuario alterado para: %s\n", usuario_1);
                    break;
                case 2:
                pass(senha_1);
                printf("Senha alterada para: %s\n", senha_1);
            }
    
        break;
    
    default:
    
        break;
    }
}

void user(char *usuario) {
    char func [K];
    printf("Digite o Novo usuario: ");
    scanf("%s", func);
    for (int i = 0; i <= K; i++){
     usuario[i] = func[i];
    }
}

void pass(char *senha) {
    char func [K];
    printf("Digite a nova senha: ");
    scanf("%s", func);
    for (int i = 0; i <= K; i++){
     senha[i] = func[i];
    }
}