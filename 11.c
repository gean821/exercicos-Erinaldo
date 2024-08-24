#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(void) {
setlocale(LC_ALL, "pt_BR.UTF-8");
//11. Faça um programa que receba o número de horas 
//trabalhadas e o valor do salário mínimo, calcule e mostre o 
//salário a receber, seguindo estas regras:
//a) a hora trabalhada vale a metade do salário mínimo.
//b) o salário bruto equivale ao número de horas 
//trabalhadas multiplicado pelo valor da hora trabalhada.
//c) o imposto equivale a 3% do salário bruto.
//d) o salário a receber equivale ao salário bruto menos o 
//imposto.

int horas_trabalhadas;
float salario_minimo,valor_hora,salario_recebido, salario_bruto,imposto;
//a
	printf("Informe o seu salário : ");
	scanf("%f", &salario_minimo);
	printf("informe o numero de horas trabalhadas : ");
	scanf("%d", &horas_trabalhadas);
	valor_hora=salario_minimo/2;
	salario_bruto=horas_trabalhadas*valor_hora;
	imposto=salario_bruto*0.03;
	salario_recebido=salario_bruto-imposto;
	printf("o Salário recebido com todas as condições impostas é %.2f\n",salario_recebido); }
	
	
	
	
	
	
