#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//7. Faça um programa que calcule e mostre a área de 
//um círculo. Sabe-se que: Área = p * R2.
float area,raio;
	printf(" informe um valor para o raio : ");
	scanf("%f", &raio);
	area=(3.1416* raio * raio);
	printf("O valor da área é %.2f\n  ", area);
	
	



}

