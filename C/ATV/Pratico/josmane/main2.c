#include <stdio.h>
#include <math.h>

#define MAX_ELEMENTOS 80

double formatar(double valor) {
    return round(valor * 100) / 100;
}

double calcular_juros(double saldo, double taxa) {
    return formatar(saldo * taxa / 100);
}

int main() {
    float amortizacao[MAX_ELEMENTOS];
    int i, n;
    float entrada;
    double juros, saldo_devedor, soma_juros = 0.0;
    double taxa_juros;

    // Solicitar os dados de entrada
    printf("Digite o valor de entrada: ");
    scanf("%f", &entrada);

    printf("Digite o numero de amortizacoes (maximo %d): ", MAX_ELEMENTOS);
    scanf("%d", &n);

    printf("Digite a taxa de juros (em decimal): ");
    scanf("%lf", &taxa_juros);

    for (i = 0; i < n; i++) {
        printf("Digite o valor da amortizacao %d: ", i+1);
        scanf("%f", &amortizacao[i]);
    }

    saldo_devedor = entrada;

    for (i = 0; i < n; i++) {
        juros = calcular_juros(saldo_devedor, taxa_juros);
        double total = formatar(amortizacao[i] + juros);

        printf("Amortizacao %d: %.2f + Juros: %.2f = Total: %.2f\n",
               i + 1, amortizacao[i], juros, total);

        soma_juros += juros;
        saldo_devedor -= amortizacao[i];
    }

    printf("Soma total dos juros: %.2f\n", soma_juros);

    return 0;
}