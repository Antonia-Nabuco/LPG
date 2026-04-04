#include<stdio.h>

int main(){
    int x,y,aux,somaImpar,i;
    printf("Digite um valor para x:");
    scanf("%d",&x);
    printf("Digite um valor para y:");
    scanf("%d",&y);
    somaImpar=0;
    i=0;
    if(x>y){
        aux = x; x = y; y = aux;
    }
    i= x+1;
    while(i<y){
     if(i%2 !=0){
        somaImpar+= i;
     }
     i++;
    }
    printf("Valor da soma dos valores impares: %d \n",somaImpar);
}