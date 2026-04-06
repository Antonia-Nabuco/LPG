#include <stdio.h>

double ln2Rec(int i, int k) {
    if (i > k) return 0.0;

    double termo = (i % 2 == 1 ? 1.0 : -1.0) / i;
    printf("Termo %d: %.5lf\n", i, termo);

    return termo + ln2Rec(i + 1, k);
}

int main() {
    int k;
    printf("Digite o numero de termos da serie que converge para ln(2): ");
    scanf("%d", &k);
    double soma = ln2Rec(1, k);
    printf("Somatorio dos %d termos: %.5lf\n", k, soma);

    return 0;
}