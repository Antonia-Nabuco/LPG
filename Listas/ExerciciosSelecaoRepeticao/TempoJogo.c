#include <stdio.h>

int main(){
    int hora_inicial, hora_final, hora_total;
    printf("Digite a hora inicial do jogo:");
    scanf("%d",&hora_inicial);
    printf("Digite a hora que finalizou o jogo:");
    scanf("%d",&hora_final);

    hora_total = (hora_final - hora_inicial +24) % 24;

    if(hora_total==0){
        printf("O JOGO DUROU 24 HORA(S)");
    }else{
        printf("O JOGO DUROU %d HORA(S)",hora_total);
    }
}