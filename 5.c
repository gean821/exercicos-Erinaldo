#include<stdio.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL, "pt_BR.UTF-8");
//6. Fa�a um programa que calcule e mostre a �rea de 
//um tri�ngulo. Sabe-se que: �rea = (base * altura)/2.
float base,altura,area;
	printf ("informe um valor para a base e a altura : " );
	scanf("%f %f", &base, &altura);
	area=(base*altura) /2;
	printf("a �rea do tri�ngulo, de acordo com os valores dados � %.2f\n : ",area);
	



}

