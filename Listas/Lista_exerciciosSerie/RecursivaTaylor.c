#include <stdio.h>

double expTaylorRec(double x, int n, int i, double termo) {
    if (i > n) return 0.0;

    printf("Termo %d: %.15lf\n", i, termo);
    double proximoTermo = termo * x / (i + 1);
    return termo + expTaylorRec(x, n, i + 1, proximoTermo);
}

int main() {
    double x;
    int n;
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    printf("Digite a quantidade de termos n: ");
    scanf("%d", &n);
    double e_x = expTaylorRec(x, n, 0, 1.0);
    printf("e elevado a %.3lf = %.15lf\n", x, e_x);

    return 0;
}