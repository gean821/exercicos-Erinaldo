#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//6. Faça um programa que calcule e mostre a área de 
//um triângulo. Sabe-se que: Área = (base * altura)/2.
float base,altura,area;
	printf ("informe um valor para a base e a altura : " );
	scanf("%f %f", &base, &altura);
	area=(base*altura) /2;
	printf("a área do triângulo, de acordo com os valores dados é %.2f\n : ",area);
	



}

