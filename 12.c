#include<stdio.h>
#include<math.h>
int main(void){
//13. Cada degrau de uma escada tem X de altura. Fa�a 
//um programa que receba essa altura e a altura que o 
//usu�rio deseja alcan�ar subindo a escada, calcule e 
//mostre quantos degraus ele dever� subir para atingir 
//seu objetivo, sem se preocupar com a altura do 
//usu�rio. Todas as medidas fornecidas devem estar em metro
float altura_degrau,altura_desejada;
float degraus;
	printf("informe uma altura para o degrau em metro : ");
	scanf("%f",&altura_degrau);
	printf("Informe a altura desejada em metro : ");
	scanf("%f",&altura_desejada);
	degraus=altura_desejada/altura_degrau;
		printf("A quantidade de degraus subidos para alcancar a altura desejada ser� de %0.f\n", degraus); 
	}
	

	
	
	
	
	
	







