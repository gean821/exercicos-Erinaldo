#include<stdio.h>
#include<locale.h>
int main (void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//. Fa�a um programa que receba o sal�rio de um
//funcion�rio e o percentual de aumento, calcule e
//mostre o valor do aumento e o novo sal�rio.
float sal�rio, aumento, novo_salario;
printf("informe seu sal�rio : ");
scanf("%f",&salario);
aumento=salario*0.40;
printf("o valor do aumento � %f : ", aumento);
novo_salario=aumento+salario;
printf("O valor do novo sal�rio � %f : ", novo_salario);
	
	
	

}
