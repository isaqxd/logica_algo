#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Q (1000)

int busca(int vetor[], int inicio, int fim, int procura){
    while (inicio <= fim){
        int meio = inicio + (fim - inicio) / 2;
        if (vetor[meio] == procura)
            return meio;
        if (vetor[meio] < procura)
            inicio = meio +1;
        else
            fim = meio -1;
    }
    return -1; 
}

int main (){
    int vetor[Q], aux;
    srand(time(NULL));

    for(int i = 0; i < Q ;i++){
        vetor[i] = 1 + rand() % 1100;   
    }

    for (int i = 0; i < (Q -1); i++) {
        if (vetor[i] > vetor[i+1]){
            aux = vetor[i];
            vetor[i] = vetor[i+1];
            vetor[i+1] = aux;
            i = -1;
        }
    }
    
    int valor;
    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &valor);
    
    int resultado = busca(vetor, 0, Q - 1, valor);    
    
    if (resultado != -1) {
        printf("Valor encontrado na posicao: %d\n", resultado);  
    } else {
        printf("Valor nao encontrado no vetor.\n");
    }

    return 0;

}