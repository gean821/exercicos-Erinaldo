#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//5. Fa�a um programa que receba o sal�rio de um 
//funcion�rio e o percentual de aumento, calcule e 
//mostre o valor do aumento e o novo sal�rio.
float salario, aumento, novo_salario;
	printf("informe seu sal�rio : ");
	scanf("%f", &salario);
	printf("insira um percentual de aumento para o sal�rio : ");
	scanf("%f", &aumento);
	aumento=aumento*salario;
	printf("o valor do aumento foi de %.2f\n" : , aumento);
	novo_salario=aumento+salario;
	printf("o valor do novo sal�rio com o aumento � de : %.2f\n" , novo_salario);


}

