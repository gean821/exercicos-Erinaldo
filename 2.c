#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//3. Fa�a um programa que receba tr�s notas e seus respectivos pesos, 
//calcule e mostre a m�dia ponderada.
float nota1,nota2,nota3,media;
int peso1,peso2,peso3;
	printf("informe tr�s n�meros : ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	printf("informe tr�s pesos para as notas informadas acima : ");
	scanf("%d %d %d", &peso1, &peso2, &peso3);
	media=(nota1*peso1+nota2*peso2+nota3*peso3) / (peso1+peso2+peso3);
	printf("a m�dia ponderada das notas acima � %2.f : ", media);
 

}

