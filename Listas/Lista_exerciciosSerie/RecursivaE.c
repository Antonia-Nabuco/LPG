#include <stdio.h>
double eRec(int n) {
    if (n == 0) {
        printf("Termo 0:");
        return 1.0; // 0! = 1
    }
    double soma = eRec(n - 1);
    long long fatorial = 1;
    for (int i = 1; i <= n; i++) fatorial *= i;

    double termo = 1.0 / fatorial;
    printf("Termo %d: %.10lf\n", n, termo);

    return soma + termo;
}

int main() {
    int n;
    printf("Digite o numero de termos da serie para aproximar e: ");
    scanf("%d", &n);

    double e_aprox = eRec(n - 1);
    printf("Aproximacao de e com %d termos: %.10lf\n", n, e_aprox);

    return 0;
}