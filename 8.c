#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//9. Sabe-se que:
//p� = 12 polegadas
//1 jarda = 3 p�s
1// milha = 1,760 jarda
//Fa�a um programa que receba uma medida em p�s, fa�a 
//as convers�es a seguir e mostre os resultados.
//a) polegadas;
//b) jardas;
//c) milhas.

int polegadas,jardas, pes ;
float milha;
	printf("insira um valor para a medida em p�s : ");
	scanf("%d", &pes);
	polegadas=(pes*12);
	printf("A medida informada em p�s, convertida em polegadas � %.2d\n", polegadas) ;

//b
	printf("informe um valor para a medida em p�s : ");
	scanf("%d",&pes);
	jardas=(jardas*3pes);
	printf("A medida de p�s em jardas � %.2d\n", jardas);
	
//c
	printf("informe um valor para a medida em p�s : ");
	scanf("%d", &pes);
	jardas=(1,760*3pes);
	milha=(milha*1,760jardas);
	printf("O valor de p�s informado convertido em milhas � %.2f\n", milha); }
	
	
	






	
	



}

