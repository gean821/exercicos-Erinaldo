#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//4. Faça um programa que receba o salário de um 
//funcionário, calcule e mostre o novo salário, 
//sabendo-se que este sofreu um aumento de 25%
float salario,aumento,novo_salario;
	printf("informe o seu salário : ");
	scanf("%f", &salario);
	aumento=salario*0.50;
	novo_salario=(aumento+salario);
	printf("o novo salário com o aumento de 25%% ficou no valor de %2.f : ",novo_salario); 

}

