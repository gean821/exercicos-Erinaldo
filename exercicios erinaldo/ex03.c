#include<stdio.h>
#include<locale.h>

//Fa�a um programa que receba tr�s notas e seus respectivos pesos,
//calcule e mostre a m�dia ponderada
int main (void){
	setlocale(LC_ALL, "pt_BR.UTF-8");
	float nota1,nota2,nota3, media;
	int peso1,peso2,peso3;
	printf("informe tr�s notas : ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	printf("informe os tr�s pesos para as notas : ");
	scanf("%d %d %d", &peso1, &peso2, &peso3);
	media=(nota1*peso1+nota2*peso2+nota3*peso3)/ (peso1+peso2+peso3);
	printf("a m�dia ponderada das 3 notas informadas � %f : ", media); }



	

