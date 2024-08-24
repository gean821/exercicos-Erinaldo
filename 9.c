#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(void) {
setlocale(LC_ALL, "pt_BR.UTF-8");
//10. O custo ao consumidor de um carro novo é a soma do 
//preço de fábrica com o percentual de lucro do distribuidor e 
//dos impostos aplicados ao preço de fábrica.
//Faça um programa que receba o preço de fábrica de um 
//veículo, o percentual de lucro do distribuidor e o percentual 
//de impostos, calcule e mostre:
//a) o valor correspondente ao lucro do distribuidor;
//b) o valor correspondente aos impostos;
//c) o preço final do veículo.

//a
float preco_fabrica,percentual_lucro,imposto,preco_final;
	printf("Informe o preço de Fábrica do veículo : ");
	scanf("%f", &preco_fabrica);
	percentual_lucro= preco_fabrica*0.20; 
	printf("o percentual de lucro do distribuidor é %.2f\n",percentual_lucro);
	
//b
	imposto=preco_fabrica*0.01;
	printf("O valor correspondente ao imposto é %.2f\n", imposto);

//c
	preco_final=preco_fabrica+percentual_lucro+imposto;
	printf("O preço final do carro é %.2f\n",preco_final);
	
	
	
	}
	
