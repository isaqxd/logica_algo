#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int girarDado(int lados) {
    return rand() % lados + 1;
}

void verResultado(char *dado) {
    int lados = 0;
    char tipoDado[10];

    int len = strlen(dado);
    if (len > 0 && dado[len - 1] == '\n') {
        dado[len - 1] = '\0';
    }

    if (sscanf(dado, "/r d%d", &lados) == 1) {
        if (lados > 0) {
            printf("Voce rolou um dado de %d lados e tirou %d\n", lados, girarDado(lados));
        } else {
            printf("Numero de lados invalido.\n");
        }
    } else {
        printf("Comando invalido. Use o formato /r d[numero].\n");
    }
}

int main() {
    char dado[20];
    
    srand(time(NULL));

    printf("Digite (/r d[numero]):\n");
    fgets(dado, sizeof(dado), stdin);

    verResultado(dado);

    return 0;
}