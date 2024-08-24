#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//3. Faça um programa que receba três notas e seus respectivos pesos, 
//calcule e mostre a média ponderada.
float nota1,nota2,nota3,media;
int peso1,peso2,peso3;
	printf("informe três números : ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	printf("informe três pesos para as notas informadas acima : ");
	scanf("%d %d %d", &peso1, &peso2, &peso3);
	media=(nota1*peso1+nota2*peso2+nota3*peso3) / (peso1+peso2+peso3);
	printf("a média ponderada das notas acima é %2.f : ", media);
 

}

