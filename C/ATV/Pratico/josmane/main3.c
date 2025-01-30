#include <stdio.h>
#include <math.h>

#define MAX_ELEMENTOS 80

// Função para formatar o valor em duas casas decimais
double formatar(double valor) {
    return round(valor * 100) / 100;
}

// Função para calcular os juros sobre um saldo
double calcular_juros(double saldo, double taxa_nominal) {
    return formatar(saldo * taxa_nominal / 100);
}

int main() {
    float amortizacao[MAX_ELEMENTOS];
    int i, n;
    float entrada;
    double juros, saldo_devedor, soma_juros = 0.0, soma_ipca = 0.0, total_aplicado;
    double taxa_juros, ipca_fixo;

    // Solicitar os dados de entrada
    printf("Digite o valor de entrada: ");
    scanf("%f", &entrada);

    printf("Digite o numero de amortizacoes (maximo %d): ", MAX_ELEMENTOS);
    scanf("%d", &n);

    printf("Digite a taxa de juros nominal (em decimal): ");
    scanf("%lf", &taxa_juros);

    printf("Digite o valor do IPCA fixo (em decimal): ");
    scanf("%lf", &ipca_fixo);

    for (i = 0; i < n; i++) {
        printf("Digite o valor da amortizacao %d: ", i + 1);
        scanf("%f", &amortizacao[i]);
    }

    saldo_devedor = entrada;

    for (i = 0; i < n; i++) {
        juros = calcular_juros(saldo_devedor, taxa_juros);
        double total = formatar(amortizacao[i] + juros + ipca_fixo);

        printf("Amortizacao %d: %.2f + Juros: %.2f + IPCA: %.2lf = Total: %.2f\n",
               i + 1, amortizacao[i], juros, ipca_fixo, total);

        soma_juros += juros;
        soma_ipca += ipca_fixo;
        saldo_devedor -= amortizacao[i];
    }

    total_aplicado = soma_juros + soma_ipca + entrada;

    printf("\nSoma total de juros: %.2f\n", soma_juros);
    printf("Soma total do IPCA: %.2f\n", soma_ipca);
    printf("Soma total de juros e IPCA: %.2f\n", soma_juros + soma_ipca);
    printf("Total aplicado (juros + IPCA + entrada): %.2f\n", total_aplicado);

    return 0;
}