#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(void) {
setlocale(LC_ALL, "pt_BR.UTF-8");
//11. Fa�a um programa que receba o n�mero de horas 
//trabalhadas e o valor do sal�rio m�nimo, calcule e mostre o 
//sal�rio a receber, seguindo estas regras:
//a) a hora trabalhada vale a metade do sal�rio m�nimo.
//b) o sal�rio bruto equivale ao n�mero de horas 
//trabalhadas multiplicado pelo valor da hora trabalhada.
//c) o imposto equivale a 3% do sal�rio bruto.
//d) o sal�rio a receber equivale ao sal�rio bruto menos o 
//imposto.

int horas_trabalhadas;
float salario_minimo,valor_hora,salario_recebido, salario_bruto,imposto;
//a
	printf("Informe o seu sal�rio : ");
	scanf("%f", &salario_minimo);
	printf("informe o numero de horas trabalhadas : ");
	scanf("%d", &horas_trabalhadas);
	valor_hora=salario_minimo/2;
	salario_bruto=horas_trabalhadas*valor_hora;
	imposto=salario_bruto*0.03;
	salario_recebido=salario_bruto-imposto;
	printf("o Sal�rio recebido com todas as condi��es impostas � %.2f\n",salario_recebido); }
	
	
	
	
	
	
