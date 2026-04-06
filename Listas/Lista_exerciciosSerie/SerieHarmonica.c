#include <stdio.h>

int main(){
    int k,i;
    double soma = 0.0;
    printf("Digite o numero de termos da serie harmonica:");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
      double termo = 1.0 / i;
      printf("Termo %d: %.5lf\n", i, termo);
      soma += termo;
    }
    printf("Somatorio dos %d termos: %.5lf\n", k, soma);
    
    return 0;
}