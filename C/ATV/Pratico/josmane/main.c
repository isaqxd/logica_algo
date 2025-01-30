#include <stdio.h>
#include <math.h>

#define MAX_ELEMENTOS 80
#define IPCA 30.87 // Valor fixo para IPCA

// Função para formatar o valor em duas casas decimais
float formatar(float valor) {
    return floor(valor * 100) / 100; // Ignorar valores após a segunda casa decimal
}

int main() {
    float amortizacao[MAX_ELEMENTOS]; // Vetor para amortização
    int i, n;
    float entrada; // Valor recebido
    float juros; // Juros a ser calculado
    float valor_juros; // Para armazenar o valor atualizado dos juros

    // Solicitar o valor de entrada
    printf("Digite o valor de entrada: ");
    scanf("%f", &entrada);

    // Solicitar o numero de amortizacoes
    do {
        printf("Digite o numero de amortizacoes (maximo %d): ", MAX_ELEMENTOS);
        scanf("%d", &n);
    } while (n < 1 || n > MAX_ELEMENTOS); // Garantir que o numero esteja no intervalo

    // Solicitar os valores de amortizacao
    for (i = 0; i < n; i++) {
        printf("Digite o valor da amortizacao %d: ", i + 1);
        scanf("%f", &amortizacao[i]);
    }

    // Calculo dos juros
    juros = entrada * 0.5 / 100;
    valor_juros = formatar(juros); // Formatar o valor de juros

    // Exibir o primeiro vetor e juros
    float total = formatar(amortizacao[0] + valor_juros + IPCA); // Calculo do total
    printf("Valor Amortizacao 1: %.2f + Juros: %.2f + IPCA: %.2f = Total: %.2f\n", 
           amortizacao[0], valor_juros, IPCA, total);
    
    // Calcular os valores para os outros vetores
    for (i = 1; i < n; i++) {
        float amortizacao_atual = amortizacao[i];
        // Calcular e formatar o valor de amortizacao atual
        float calculo = formatar((amortizacao_atual * 0.5) / 100); 
        valor_juros = formatar(valor_juros - calculo); // Atualizar juros
        
        // Calcular o total para a linha atual
        total = formatar(amortizacao_atual + valor_juros + IPCA); // Calculo do total

        // Exibir os resultados, ocultando o calculo
        printf("Valor Amortizacao %d: %.2f + Juros: %.2f + IPCA: %.2f = Total: %.2f\n", 
               i + 1, amortizacao_atual, valor_juros, IPCA, total);
    }

    return 0; // Finaliza o programa com sucesso
}
