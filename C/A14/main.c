#include <stdio.h>
#include <stdlib.h>


#define DEZ (10)

int main()
{
    int nLinhas, nColunas;

    printf("Insira o numero de linhas da sua matriz: ");
    scanf("%d", &nLinhas);

    printf("\nInsira o numero de colunas da sua matriz: ");
    scanf("%d", &nColunas);
    
    int matriz [DEZ][DEZ];
    int transposta [DEZ][DEZ];
   
    for (int linhas = 0; linhas < nLinhas ; linhas++){
        for (int colunas = 0; colunas < nColunas; colunas++){
            printf("\nInsira o numero na linha %d e coluna %d: ", colunas, linhas);
            scanf("%d", &matriz[linhas][colunas]);

            transposta[colunas][linhas] = matriz[linhas][colunas];
        }    
    } 

    for (int linhas = 0; linhas < nLinhas ; linhas++){
        printf("\n");
        for (int colunas = 0; colunas < nColunas; colunas++){
            printf("%d", matriz[linhas][colunas]);
        }
    }

    for (int linhas = 0; linhas < nLinhas ; linhas++){
        printf("\n");
        for (int colunas = 0; colunas < nColunas; colunas++){
            printf("%d", transposta[linhas][colunas]);
        }
        
    }
    
    

}