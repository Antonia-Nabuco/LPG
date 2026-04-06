#include <stdio.h>

double sinRec(double x, int n, int i, double termo) {
    if (i == n) return 0.0;

    printf("Termo %d: %.15lf\n", i + 1, termo);
    return termo + sinRec(x, n, i + 1, -termo * x * x / ((2*i + 2)*(2*i + 3)));
}

int main() {
    double x;
    int n;
    printf("Digite o valor de x (em radianos): ");
    scanf("%lf", &x);
    printf("Digite a quantidade de termos n: ");
    scanf("%d", &n);

    double seno = sinRec(x, n, 0, x);
    printf("Aproximacao de sin(%.5lf) com %d termos: %.15lf\n", x, n, seno);

    return 0;
}