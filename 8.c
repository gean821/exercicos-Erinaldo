#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//9. Sabe-se que:
//pé = 12 polegadas
//1 jarda = 3 pés
1// milha = 1,760 jarda
//Faça um programa que receba uma medida em pés, faça 
//as conversões a seguir e mostre os resultados.
//a) polegadas;
//b) jardas;
//c) milhas.

int polegadas,jardas, pes ;
float milha;
	printf("insira um valor para a medida em pés : ");
	scanf("%d", &pes);
	polegadas=(pes*12);
	printf("A medida informada em pés, convertida em polegadas é %.2d\n", polegadas) ;

//b
	printf("informe um valor para a medida em pés : ");
	scanf("%d",&pes);
	jardas=(jardas*3pes);
	printf("A medida de pés em jardas é %.2d\n", jardas);
	
//c
	printf("informe um valor para a medida em pés : ");
	scanf("%d", &pes);
	jardas=(1,760*3pes);
	milha=(milha*1,760jardas);
	printf("O valor de pés informado convertido em milhas é %.2f\n", milha); }
	
	
	






	
	



}

