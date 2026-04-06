#include <stdio.h>

int main() {
    double x;
    int n;
    printf("Digite o valor de x (em radianos): ");
    scanf("%lf", &x);
    printf("Digite a quantidade de termos n: ");
    scanf("%d", &n);

    double cosseno = 0.0;
    double termo = 1.0;
    for (int i = 0; i < n; i++) {
        cosseno += termo;
        printf("Termo %d: %.15lf\n", i+1, termo);
        termo = -termo * x * x / ((2*i + 1)*(2*i + 2));
    }

    printf("Aproximacao de cos(%.5lf) com %d termos: %.15lf\n", x, n, cosseno);

    return 0;
}