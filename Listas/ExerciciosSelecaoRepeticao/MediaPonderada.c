#include <stdio.h>

int main(){
    int n,i;
    float media, a,b,c;
    printf("Digite o número de casos de n:");
    scanf("%d",&n);
    i=0;
    while(i<n){
      printf("Digite os valores:");
      scanf("%f %f %f",&a ,&b ,&c);
      media = (a*2 + b*3 + c*5) / 10;
      printf("%.1f\n", media);
      i++;
    }
}