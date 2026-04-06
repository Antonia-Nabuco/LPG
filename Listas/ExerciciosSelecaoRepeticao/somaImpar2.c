#include <stdio.h>

int main(){
    int x,y,n,i,j,somaImpar,aux;
    printf("Digite n valores:");
    scanf("%d",&n);
    i=0;
    while(i<n){
       printf("Digite o valor de x");
       scanf("%d",&x);
       printf("Digite o valor de y");
       scanf("%d",&y);
       if(y<x){
        aux = x; x = y; y= aux;
       }
       j= x+1;
       somaImpar = 0;
       while(j<y){
            if(j%2 !=0){
                somaImpar+= j;
            }
            j++;
        }
      i++;
      printf("Valor da soma dos valores impares: %d",somaImpar);
    }


}