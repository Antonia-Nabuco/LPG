#include <stdio.h>

int main(){
    int n,x,i,ehpar,ehimpar,ehpositivo,ehnegativo;
    printf("Digite um valor N");
    scanf("%d",&n);
    i = 0;
    ehpar = 0;
    ehimpar = 0;
    ehpositivo = 0;
    ehnegativo = 0;
    while(i<n){
      i++;
      printf("Digite um valor de x:");
      scanf("%d",&x);
      if(x%2 == 0){
        ehpar++;
      }else{
        ehimpar++;
      }if(x>0){
        ehpositivo++;
      }if(x<0){
        ehnegativo++;
      }
    } 
    printf("%d valor(es) par(es)",ehpar);
    printf("%d valor(es) impar(es)",ehimpar);
    printf("%d valor(es) positivo(s)",ehpositivo);
    printf("%d valor(es) negativo(s)",ehnegativo);
}