#include <stdio.h>
#include <stdlib.h>
int num,unidade,dezena,centena;


int main (){
    printf("digite um numero no formato UDC: \n");
    scanf("%d",&num);
    unidade = num % 10;
    printf("%d",unidade);
    dezena = (num % 100) / 10;
    printf("%d",dezena);
    centena = num /100;
    printf("%d",centena);
}