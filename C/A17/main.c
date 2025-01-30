#include <stdio.h>

int main (){
    char tabela[3][3];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            tabela = tabela[i];
        }
        tabela = tabela[i];
    }
    

    printf("%s ", tabela);
}