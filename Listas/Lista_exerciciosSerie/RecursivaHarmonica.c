#include <stdio.h>

double harmonicaRec(int i, int k) {
    if (i > k) return 0.0;

    double termo = 1.0 / i;
    printf("Termo %d: %.5lf\n", i, termo);

    return termo + harmonicaRec(i + 1, k);
}

int main() {
    int k;
    printf("Digite o numero de termos da serie harmonica: ");
    scanf("%d", &k);

    double soma = harmonicaRec(1, k);
    printf("Somatorio dos %d termos: %.5lf\n", k, soma);

    return 0;
}