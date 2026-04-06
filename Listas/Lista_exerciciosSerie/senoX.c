#include <stdio.h>

int main() {
    double x;
    int n;
    printf("Digite o valor de x (em radianos): ");
    scanf("%lf", &x);
    printf("Digite a quantidade de termos n: ");
    scanf("%d", &n);

    double seno = 0.0;
    double termo = x; 
    int i;
    for (i = 0; i < n; i++) {
        seno += termo;
        printf("Termo %d: %.15lf\n", i+1, termo);
        termo = -termo * x * x / ((2*i+2)*(2*i+3));
    }

    printf("Aproximacao de sin(%.5lf) com %d termos: %.15lf\n", x, n, seno);

    return 0;
}