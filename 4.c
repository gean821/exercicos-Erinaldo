#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//5. Faça um programa que receba o salário de um 
//funcionário e o percentual de aumento, calcule e 
//mostre o valor do aumento e o novo salário.
float salario, aumento, novo_salario;
	printf("informe seu salário : ");
	scanf("%f", &salario);
	printf("insira um percentual de aumento para o salário : ");
	scanf("%f", &aumento);
	aumento=aumento*salario;
	printf("o valor do aumento foi de %.2f\n" : , aumento);
	novo_salario=aumento+salario;
	printf("o valor do novo salário com o aumento é de : %.2f\n" , novo_salario);


}

