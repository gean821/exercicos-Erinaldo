#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//7. Fa�a um programa que calcule e mostre a �rea de 
//um c�rculo. Sabe-se que: �rea = p * R2.
float area,raio;
	printf(" informe um valor para o raio : ");
	scanf("%f", &raio);
	area=(3.1416* raio * raio);
	printf("O valor da �rea � %.2f\n  ", area);
	
	



}

