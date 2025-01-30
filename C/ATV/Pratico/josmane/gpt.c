#include <stdio.h>
#include <math.h>

#define MAX_ELEMENTOS 80

// Funcao para formatar o valor em duas casas decimais
double formatar(double valor) {
    return round(valor * 100) / 100;
}

// Funcao para calcular os juros sobre um saldo
double calcular_juros(double saldo, double taxa_nominal) {
    return formatar(saldo * taxa_nominal / 100);
}

int main() {
    float amortizacao[MAX_ELEMENTOS];
    int n;
    float entrada;
    double juros, saldo_devedor, soma_juros = 0.0, soma_ipca = 0.0;
    double taxa_juros, ipca_fixo;

    // Solicitar o valor de entrada
    printf("Digite o valor de entrada: ");
    if (scanf("%f", &entrada) != 1) {
        printf("Entrada invalida!\n");
        return 1;
    }

    // Calcular e exibir o saldo devedor total
    saldo_devedor = entrada;
    printf("Saldo devedor total: %.2f\n", saldo_devedor);

    // Solicitar os dados de entrada
    printf("Digite o numero de amortizacoes (maximo %d), taxa de juros (percentual) e IPCA fixo (em decimal): ", MAX_ELEMENTOS);
    if (scanf("%d %lf %lf", &n, &taxa_juros, &ipca_fixo) != 3 || n < 1 || n > MAX_ELEMENTOS) {
        printf("Entrada invalida!\n");
        return 1;
    }

    printf("Digite os valores das amortizacoes (separados por espaco): ");
    for (int i = 0; i < n; i++) {
        if (scanf("%f", &amortizacao[i]) != 1 || amortizacao[i] < 0) {
            printf("Amortizacao invalida!\n");
            return 1;
        }
    }

    printf("\nRelatorio de Amortizacoes:\n");
    printf("---------------------------------------------\n");
    printf("%-10s %-10s %-10s %-10s\n", "Amortizacao", "Juros", "IPCA", "Total");
    printf("---------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        juros = calcular_juros(saldo_devedor, taxa_juros);
        double total = formatar(amortizacao[i] + juros + ipca_fixo);
        saldo_devedor -= amortizacao[i];

        printf("%-10.2f %-10.2f %-10.2lf %-10.2f\n",
               amortizacao[i], juros, ipca_fixo, total);
        soma_juros += juros;
        soma_ipca += ipca_fixo;
    }

    double total_aplicado = soma_juros + soma_ipca + entrada;

    printf("\nSoma total de juros: %.2f\n", soma_juros);
    printf("Soma total do IPCA: %.2f\n", soma_ipca);
    printf("Soma total de juros e IPCA: %.2f\n", soma_juros + soma_ipca);
    printf("Total aplicado (juros + IPCA + entrada): %.2f\n", total_aplicado);

    return 0;
}
