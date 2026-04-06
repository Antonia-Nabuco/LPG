#include <stdio.h>

int main() {
    int k;
    double soma = 0.0;

    printf("Digite o numero de termos da serie que converge para ln(2): ");
    scanf("%d", &k);

    for (int i = 1; i <= k; i++) {
        double termo = (i % 2 == 1 ? 1.0 : -1.0) / i;
        printf("Termo %d: %.5lf\n", i, termo);
        soma += termo;
    }

    printf("Somatorio dos %d termos: %.5lf\n", k, soma);

    return 0;
}