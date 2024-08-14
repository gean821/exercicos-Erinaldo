#include<stdio.h>
#include<locale.h>
int main (void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//. Faça um programa que receba o salário de um
//funcionário e o percentual de aumento, calcule e
//mostre o valor do aumento e o novo salário.
float salário, aumento, novo_salario;
printf("informe seu salário : ");
scanf("%f",&salario);
aumento=salario*0.40;
printf("o valor do aumento é %f : ", aumento);
novo_salario=aumento+salario;
printf("O valor do novo salário é %f : ", novo_salario);
	
	
	

}
