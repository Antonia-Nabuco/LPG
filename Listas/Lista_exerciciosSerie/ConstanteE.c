#include <stdio.h>

int main() {
    int n;
    double e = 0.0;
    long long fatorial = 1;

    printf("Digite o numero de termos da serie para aproximar e: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i > 0) fatorial *= i;
        double termo = 1.0 / fatorial;
        printf("Termo %d: %.10lf\n", i, termo);
        e += termo;
    }

    printf("Aproximacao de e com %d termos: %.10lf\n", n, e);

    return 0;
}