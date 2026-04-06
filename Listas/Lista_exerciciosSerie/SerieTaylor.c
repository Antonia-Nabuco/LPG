#include <stdio.h>

int main(){
    double x;
    int n, i , j;
    printf("Digite o valor de x:");
    scanf("%lf",&x);
    printf("Digite a quantidade de termos n:");
    scanf("%d",&n);
    double e_x = 0;
    for(i = 0 ; i<=n; i++){
       double termo = 1;
       for(j = 1; j<=i; j++){
          termo *= x/j;
       }
       e_x += termo; //e_x = e_x  * termo
    }
    printf("e elevado a %.3lf = %.15lf\n",x, e_x);
    return 0;
}