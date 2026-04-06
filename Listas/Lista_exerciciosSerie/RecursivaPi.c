#include <stdio.h>

double piGregoryRec(int n) {
    if (n == 0) {
        printf("Gregory-Leibniz - Termo 1: %.10lf\n", 1.0*4);
        return 1.0;
    }
    double termo = ((n % 2 == 0) ? 1.0 : -1.0) / (2*n + 1);
    double soma = piGregoryRec(n-1);
    printf("Gregory-Leibniz - Termo %d: %.10lf\n", n+1, termo*4);
    return soma + termo;
}

double piNilakanthaRec(int n) {
    if (n == 0) return 3.0;
    int a = 2*n;
    int b = 2*n + 1;
    int c = 2*n + 2;
    double termo = 4.0 / (a*b*c);
    if (n % 2 == 0) termo = -termo;
    double soma = piNilakanthaRec(n-1);
    printf("Nilakantha - Termo %d: %.10lf\n", n, termo);
    return soma + termo;
}

int main() {
    int k1, k2;

    printf("Digite o numero de termos da serie de Gregory-Leibniz: ");
    scanf("%d", &k1);
    double pi_gl = piGregoryRec(k1-1) * 4;
    printf("Aproximacao de pi (Gregory-Leibniz): %.10lf\n\n", pi_gl);

    printf("Digite o numero de termos da serie de Nilakantha: ");
    scanf("%d", &k2);
    double pi_nil = piNilakanthaRec(k2);
    printf("Aproximacao de pi (Nilakantha): %.10lf\n", pi_nil);

    return 0;
}