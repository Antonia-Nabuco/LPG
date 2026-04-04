#include <stdio.h>

int main(){
    float a,b,c,aux;
    printf("Digite o valor do lado A:");
    scanf("%f",&a);
    printf("Digite o valor do lado B:");
    scanf("%f",&b);
    printf("Digite o valor do lado C:");
    scanf("%f",&c);
    
    if(a<b){
        aux = a; a = b; b = aux;
    }if(a<c){
        aux = a; a = c; c = aux;
    }if(b<c){
        aux = b; b = c; c = aux;
    }

    if(a>= b + c){
        prinf("Nao eh um triangulo");
    }else{
        if(a*a== b*b + c*c){
            printf("Eh triangulo retangulo");
        }else if(a*a>b*b+c*c){
            printf("Eh um triangulo obtusangulo");
        }else if(a*a<b*b+c*c){
            printf("Eh um triangulo acutangulo");
        }if(a==b && b==c ){
            printf("Eh um triangulo equilatero");
        }else if(a==b || b==c || c==a){
            printf("Eh um triangulo Isoceles");
        }
    }
}