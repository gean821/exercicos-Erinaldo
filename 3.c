#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//4. Fa�a um programa que receba o sal�rio de um 
//funcion�rio, calcule e mostre o novo sal�rio, 
//sabendo-se que este sofreu um aumento de 25%
float salario,aumento,novo_salario;
	printf("informe o seu sal�rio : ");
	scanf("%f", &salario);
	aumento=salario*0.50;
	novo_salario=(aumento+salario);
	printf("o novo sal�rio com o aumento de 25%% ficou no valor de %2.f : ",novo_salario); 

}

