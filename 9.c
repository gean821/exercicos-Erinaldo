#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(void) {
setlocale(LC_ALL, "pt_BR.UTF-8");
//10. O custo ao consumidor de um carro novo � a soma do 
//pre�o de f�brica com o percentual de lucro do distribuidor e 
//dos impostos aplicados ao pre�o de f�brica.
//Fa�a um programa que receba o pre�o de f�brica de um 
//ve�culo, o percentual de lucro do distribuidor e o percentual 
//de impostos, calcule e mostre:
//a) o valor correspondente ao lucro do distribuidor;
//b) o valor correspondente aos impostos;
//c) o pre�o final do ve�culo.

//a
float preco_fabrica,percentual_lucro,imposto,preco_final;
	printf("Informe o pre�o de F�brica do ve�culo : ");
	scanf("%f", &preco_fabrica);
	percentual_lucro= preco_fabrica*0.20; 
	printf("o percentual de lucro do distribuidor � %.2f\n",percentual_lucro);
	
//b
	imposto=preco_fabrica*0.01;
	printf("O valor correspondente ao imposto � %.2f\n", imposto);

//c
	preco_final=preco_fabrica+percentual_lucro+imposto;
	printf("O pre�o final do carro � %.2f\n",preco_final);
	
	
	
	}
	
