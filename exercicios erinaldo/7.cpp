#include<stdio.h>
int main(void){
int valor1,valor2,soma;
float valor3;
printf("insira um valor : ");
scanf("%d", &valor1);
printf("insira o segundo valor : ");
scanf("%d", &valor2);
soma=valor1+valor2;
valor3=soma*0.45;
printf("45%% da soma das duas variaveis é %f : ", valor3);
}
