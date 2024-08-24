#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//8. Faça um programa que receba um número positivo e 
//maior que zero, calcule e mostre:
//a) o número digitado ao quadrado;
//b) o número digitado ao cubo;
//c) a raiz quadrada do número digitado;
//d) a raiz cúbica do número digitado.

float numero;
	printf("informe um número : ");
	scanf("%f", &numero);
	numero=numero*numero;
	printf("O número ao quadrado é %.2f\n ", numero);
	
//b
float numero2;
	printf("informe um numero : ");
	scanf("%f",&numero2);
	numero2=numero2*numero2*numero2;
	printf("O número ao cubo é %.2f\n ",numero2);

//c
float numero3;
	printf("informe um número  : ");
	scanf("%f", &numero3);
	numero3= sqrt(numero3);
	printf("A raiz quadrada do número informado é %.2f\n ", numero3);

//d
double numero4;
	printf("informe um número : ");
	scanf("%lf", &numero4);
	numero4=cbrt(numero4);
	printf("a raiz cúbica do número informado é %.5f\n ", numero4);

	
	



}

