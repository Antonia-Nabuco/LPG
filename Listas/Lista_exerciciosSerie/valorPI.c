#include <stdio.h>

int main() {
    int k1,k2;
    
    // Série de Gregory-Leibniz
    double pi_gl = 0.0;
    printf("Digite o numero de termos da serie de Gregory-Leibniz: ");
    scanf("%d", &k1);

    for (int n = 0; n < k1; n++) {
        double termo = ((n % 2 == 0) ? 1.0 : -1.0) / (2 * n + 1);
        pi_gl += termo;
        printf("Gregory-Leibniz - Termo %d: %.10lf\n", n+1, termo * 4);
    }
    pi_gl *= 4;
    printf("Aproximacao de pi (Gregory-Leibniz): %.10lf\n\n", pi_gl);

    // Série de Nilakantha
    double pi_nil = 3.0;
    printf("Digite o numero de termos da serie de Nilakantha: ");
    scanf("%d", &k2);

    for (int n = 1; n <= k2; n++) {
        int a = 2 * n;
        int b = 2 * n + 1;
        int c = 2 * n + 2;
        double termo = 4.0 / (a * b * c);
        if (n % 2 == 0) termo = -termo;  // alterna o sinal
        pi_nil += termo;
        printf("Nilakantha - Termo %d: %.10lf\n", n, termo);
    }

    printf("Aproximacao de pi (Nilakantha): %.10lf\n", pi_nil);

    return 0;
}