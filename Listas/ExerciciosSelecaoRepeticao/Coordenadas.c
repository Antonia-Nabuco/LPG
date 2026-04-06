#include <stdio.h>

int main(){
    float x,y;
    printf("Digite o ponto x:");
    scanf("%f", &x);
    printf("Digite o ponto y:");
    scanf("%f", &y);
    
    if(x==0 && y==0){
      printf("Origem");
    }else if(y==0 && x!=0){
      printf("Eixo X");
    }else if(x==0 && y!=0){
      printf("Eixo Y");
    }else if(x >0 && y>0){
      printf("Q1");
    }else if(x<0 && y>0){
      printf("Q2");
    }else if(x<0 && y<0){
      printf("Q3");
    }else if(x>0 && y<0 ){
      prinf("Q4");
    }
}