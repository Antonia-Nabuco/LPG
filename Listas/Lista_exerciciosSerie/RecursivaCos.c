#include <stdio.h>

double cosRec(double x, int n, int i, double termo) {
    if (i == n) return 0.0;

    printf("Termo %d: %.15lf\n", i+1, termo);
    double proximoTermo = -termo * x * x / ((2*i + 1)*(2*i + 2));

    return termo + cosRec(x, n, i + 1, proximoTermo);
}

int main() {
    double x;
    int n;

    printf("Digite o valor de x (em radianos): ");
    scanf("%lf", &x);
    printf("Digite a quantidade de termos n: ");
    scanf("%d", &n);

    double cosseno = cosRec(x, n, 0, 1.0);
    printf("Aproximacao de cos(%.5lf) com %d termos: %.15lf\n", x, n, cosseno);

    return 0;
}