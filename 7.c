#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//8. Fa�a um programa que receba um n�mero positivo e 
//maior que zero, calcule e mostre:
//a) o n�mero digitado ao quadrado;
//b) o n�mero digitado ao cubo;
//c) a raiz quadrada do n�mero digitado;
//d) a raiz c�bica do n�mero digitado.

float numero;
	printf("informe um n�mero : ");
	scanf("%f", &numero);
	numero=numero*numero;
	printf("O n�mero ao quadrado � %.2f\n ", numero);
	
//b
float numero2;
	printf("informe um numero : ");
	scanf("%f",&numero2);
	numero2=numero2*numero2*numero2;
	printf("O n�mero ao cubo � %.2f\n ",numero2);

//c
float numero3;
	printf("informe um n�mero  : ");
	scanf("%f", &numero3);
	numero3= sqrt(numero3);
	printf("A raiz quadrada do n�mero informado � %.2f\n ", numero3);

//d
double numero4;
	printf("informe um n�mero : ");
	scanf("%lf", &numero4);
	numero4=cbrt(numero4);
	printf("a raiz c�bica do n�mero informado � %.5f\n ", numero4);

	
	



}

